/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file implements a generic main() function for running Embedded Wizard
*   generated applications in the Linux OpenGL environment with EGL API. The
*   main() function initializes the Runtime Environment, creates an instance
*   of the application class and drives the message translation and screen
*   updates.
*
*   In order to keep the main() function independent from the particular GUI
*   application, the application class and the screen size are taken from the
*   generated code. In this manner, it is not necessary to modify this file
*   when creating new GUI applications. Just set the attributes 'ScreenSize'
*   and 'ApplicationClass' of the profile in the Embedded Wizard IDE.
*
*   This program demonstrates how to integrate an application developed using
*   Chora and Mosaic class library with the Linux operating system and EGL.
*
*******************************************************************************/

#include "ewrte.h"
#include "ewgfx.h"
#include "Core.h"
#include "Graphics.h"
#include "ewextgfx.h"

#include "bcm_host.h"

#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <termio.h>
#include <sys/poll.h>
#include <fcntl.h>
#include <pthread.h>
#include <linux/input.h>

#include "BSCController.h"

/***************************1****************************************************
* static variables
*******************************************************************************/
static int TouchEventXPos;
static int TouchEventYPos;
static int TouchState = 0; /* 0 - none, 1 - begin, 2 - move, 3 - end */
static int ShutDown   = 0;


/*******************************************************************************
* FUNCTION:
*   TouchEventThread
*
* DESCRIPTION:
*   The function TouchEventThread implements an independend thread to read data
*   from the touch controller and to provide them as touch events for the
*   EmWi application. The thread is running until the flag ShutDown is set.
*   This function may be adapted to the touch driver of your hardware.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Zero.
*
*******************************************************************************/
static void* TouchEventThread( void* aArg )
{
  struct input_event events[ 64 ];
  int i;
  int rd;
  int touchDev;

  /* get access to touch events from input device */
  EwPrint( "Open Touch Driver...                         " );
  touchDev = open( "/dev/input/event0", O_RDONLY );
  if ( touchDev < 0 )
    return 0;
  EwPrint( "[OK]\n" );

  EwPrint( "Start Touch Event Thread...                  " );
  EwPrint( "[OK]\n" );

  /* loop forever until main application is finished */
  while ( !ShutDown )
  {
    /* read touch event from input device */
    rd = read( touchDev, events, sizeof( struct input_event ) * 64 );

    /* check for right size - otherwise terminate */
    if ( rd < (int) sizeof( struct input_event ) )
      break;

    for ( i = 0; i < rd / sizeof( struct input_event ); i++ )
    {
      unsigned int type;
      unsigned int code;
      long         value;

      type  = events[ i ].type;
      code  = events[ i ].code;
      value = events[ i ].value;

      if ( type == 3 )
      {
        if ( code == 0 )
          TouchEventXPos = value;
        else if ( code == 1 )
          TouchEventYPos = value;
      }
      else if ( type == 1 && code == 330 )
      {
        if ( value && TouchState == 0 )
          TouchState = 1;
        else if ( !value && TouchState == 2 )
          TouchState = 3;
      }
    }
  }

  EwPrint( "Stop Touch Event Thread...                   " );
  EwPrint( "[OK]\n" );
  EwPrint( "Close Touch Driver...                        " );
  close( touchDev );
  EwPrint( "[OK]\n" );
  return 0;
}


/*******************************************************************************
* FUNCTION:
*   TermInit
*
* DESCRIPTION:
*   The function TermInit prepares the console for keyboard intputs. This is for
*   tests and debugging purpose only, when there is no other input device
*   available.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
static void TermInit( void )
{
  struct termio term;

  ioctl( 0, TCGETA, (void *)&term );
  term.c_lflag &= ~ICANON;
  term.c_lflag &= ~ECHO;
  ioctl( 0, TCSETAW, (void *)&term );
}


/*******************************************************************************
* FUNCTION:
*   TermDone
*
* DESCRIPTION:
*   The function TermDone termintates the console for keyboard inputs. This is
*   for tests and debugging purpose only, when there is no other input device
*   available.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
static void TermDone( void )
{
  struct termio term;

  ioctl( 0,TCGETA,(void *)&term );
  term.c_lflag |= ICANON;
  term.c_lflag |= ECHO;
  ioctl( 0,TCSETAW,(void *)&term );
}


/*******************************************************************************
* FUNCTION:
*   TermGetChar
*
* DESCRIPTION:
*   The function TermGetChar reads the next character from the console. This is
*   for tests and debugging purpose only, when there is no other input device
*   available.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Returns the read character or 0 if no character available.
*
*******************************************************************************/
unsigned char TermGetChar( void )
{
  unsigned char c = 0;
  struct pollfd p;

  p.fd     = 0;
  p.events = POLLIN;

  /* ask the console for the next character */
  if (( poll( &p, 1, 0 ) > 0 ) && ( p.revents == POLLIN ) && ( read( 0, &c, 1 ) != 1 ))
    c = 0;

  return c;
}

/*******************************************************************************
* FUNCTION:
*   GetKeyCommand
*
* DESCRIPTION:
*   The function GetKeyCommand reads the next key code from the console and
*   translates it into an Embedded Wizard key code. The mapping between the key
*   code from the console and the resulting Embedded Wizard key code can be
*   adapted to the needs of your application.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Returns the next EmWi key code or CoreKeyCodeNoKey if no key code available.
*
*******************************************************************************/
XEnum GetKeyCommand( void )
{
  switch ( TermGetChar())
  {
    case 0x1b :
      switch ( TermGetChar())
      {
        case 0x00 : return CoreKeyCodeExit;
        case 0x5b :
          switch ( TermGetChar())
          {
            case 0x41 : return CoreKeyCodeUp;
            case 0x42 : return CoreKeyCodeDown;
            case 0x43 : return CoreKeyCodeRight;
            case 0x44 : return CoreKeyCodeLeft;
          }
        break;
      }
    break;

    case 0x0A : return CoreKeyCodeOk;
    case 'm'  : return CoreKeyCodeMenu;
    case 'p'  : return CoreKeyCodePower;
  }

  return CoreKeyCodeNoKey;
}


/*******************************************************************************
* FUNCTION:
*   EglInit
*
* DESCRIPTION:
*   The function EglInit initializes EGL / OpenGL ES 2.0 and creates a full-
*   screen framebuffer. After calling this function, OpenGL is prepared for
*   drawing operations.
*
* ARGUMENTS:
*   aDisplay - Pointer to return EGL display.
*   aSurface - Pointer to return EGL surface.
*
* RETURN VALUE:
*   Returns 1 if successful, otherwise 0.
*
*******************************************************************************/
static int EglInit( EGLDisplay *aDisplay, EGLSurface *aSurface )
{
  EGLDisplay  eglDisplay        = 0;
  EGLConfig   eglConfig         = 0;
  EGLSurface  eglSurface        = 0;
  EGLContext  eglContext        = 0;
  EGLint      contextAttribs[]  = { EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE };
  EGLint      num_configs;
  EGLint      configAttribs[] =
  {
    EGL_SURFACE_TYPE,      EGL_WINDOW_BIT,
    EGL_RENDERABLE_TYPE,   EGL_OPENGL_ES2_BIT,
    EGL_BUFFER_SIZE,       32,
    EGL_COLOR_BUFFER_TYPE, EGL_RGB_BUFFER,
    EGL_RED_SIZE,          8,
    EGL_GREEN_SIZE,        8,
    EGL_BLUE_SIZE,         8,
    EGL_ALPHA_SIZE,        8,
    EGL_NATIVE_RENDERABLE, EGL_TRUE,
    EGL_NONE
  };

  eglDisplay = eglGetDisplay( EGL_DEFAULT_DISPLAY );
  eglInitialize( eglDisplay, 0, 0 );
  eglBindAPI( EGL_OPENGL_ES_API );
  eglChooseConfig( eglDisplay, configAttribs, &eglConfig, 1, &num_configs );

  if ( num_configs != 1 )
    return 0;

  eglSurface = eglCreateWindowSurface( eglDisplay, eglConfig, 0, 0 );
  eglContext = eglCreateContext( eglDisplay, eglConfig, EGL_NO_CONTEXT, contextAttribs );

  #if EW_PERFORM_FULLSCREEN_UPDATE == 0
    eglSurfaceAttrib( eglDisplay, eglSurface, EGL_SWAP_BEHAVIOR,
                      EGL_BUFFER_PRESERVED );
  #else
    eglSurfaceAttrib( eglDisplay, eglSurface, EGL_SWAP_BEHAVIOR,
                      EGL_BUFFER_DESTROYED );
  #endif

  eglMakeCurrent( eglDisplay, eglSurface, eglSurface, eglContext );

  *aDisplay = eglDisplay;
  *aSurface = eglSurface;

  return 1;
}


/*******************************************************************************
* FUNCTION:
*   Update
*
* DESCRIPTION:
*   The function Update performs the screen update of the dirty area.
*
* ARGUMENTS:
*   aViewPort    - Viewport used for the screen update.
*   aApplication - Root object used for the screen update.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
static void Update( XViewport* aViewport, CoreRoot aApplication )
{
  XBitmap*       bitmap     = EwBeginUpdate( aViewport );
  GraphicsCanvas canvas     = EwNewObject( GraphicsCanvas, 0 );
  XRect          updateRect = {{ 0, 0 }, { 0, 0 }};

  /* let's redraw the dirty area of the screen. Cover the returned bitmap
     objects within a canvas, so Mosaic can draw to it. */
  if ( bitmap && canvas )
  {
    GraphicsCanvas__AttachBitmap( canvas, (XUInt32)bitmap );
    updateRect = CoreRoot__UpdateGE20( aApplication, canvas );
    GraphicsCanvas__DetachBitmap( canvas );
  }

  /* complete the update */
  if ( bitmap )
    EwEndUpdate( aViewport, updateRect );
}


/* Completion callback for the viewport. If EwEndUpdate() is called, the
   callback ensures, that the screen content is flipped */
static void ViewportProc( XViewport* aViewport, unsigned long aHandle,
  void* aDisplay1, void* aDisplay2, void* aDisplay3, XRect aArea )
{
  /* Perform the swap if there was something drawn on the screen */
  if (( aArea.Point2.X > aArea.Point1.X ) && ( aArea.Point2.Y > aArea.Point1.Y ))
    eglSwapBuffers( (EGLDisplay)aDisplay2, (EGLSurface)aDisplay3 );
}


/*******************************************************************************
* FUNCTION:
*   main
*
* DESCRIPTION:
*   The main function of the whole application. The main function launches the
*   touch event thread and provides a for-ever loop to drive the Embedded Wizard
*   UI application.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Zero if successful.
*
*******************************************************************************/
int main( int argc, char** argv )
{
  EGLDisplay      eglDisplay  = 0;
  EGLSurface      eglSurface  = 0;
  CoreRoot        rootObject;
  XViewport*      viewport;
  XEnum           cmd         = CoreKeyCodeNoKey;
  GLint           framebuffer = 0xFFFFFFFF;
  GLint           w           = -1;
  GLint           h           = -1;
  pthread_t       touchThread;
  pthread_attr_t  threadAttr;

  /* prepare the console for user inputs */
  TermInit();

  bcm_host_init();

  /* startup the graphics sub-system */
  EwPrint( "Initialize EGL / OpenGL ES 2.0...            " );
  if ( ! EglInit( &eglDisplay, &eglSurface ) )
    return 1;
  EwPrint( "[OK]\n" );

  /* get the framebuffer and its size in pixel */
  glGetIntegerv( GL_FRAMEBUFFER_BINDING, &framebuffer );
  eglQuerySurface( eglDisplay, eglSurface, EGL_WIDTH,  &w );
  eglQuerySurface( eglDisplay, eglSurface, EGL_HEIGHT, &h);

  /* initialize the Graphics Engine */
  EwPrint( "Initialize Graphics Engine...                " );
  if ( !EwInitGraphicsEngine( 0 ))
    return 2;
  EwPrint( "[OK]\n" );

  /* create the applications root object and initialize it */
  EwPrint( "Create EmWi Root Object...                   " );
  rootObject = (CoreRoot)EwNewObjectIndirect( EwApplicationClass, 0 );
  EwLockObject( rootObject );
  CoreRoot__Initialize( rootObject, EwScreenSize );
  EwPrint( "[OK]\n" );

  /* create viewport object to provide uniform access to the framebuffer */
  EwPrint( "Create EmWi Viewport...                      " );
  viewport = EwInitViewport( EwScreenSize, EwNewRect( 0, 0, w, h ), 0, 255,
    &framebuffer, eglDisplay, eglSurface, ViewportProc );
  EwPrint( "[OK]\n" );

  /* create thread for touch events */
  pthread_attr_init( &threadAttr );
  pthread_attr_setdetachstate( &threadAttr, PTHREAD_CREATE_JOINABLE );
  pthread_create( &touchThread, &threadAttr, TouchEventThread, NULL );
  pthread_attr_destroy( &threadAttr );
  sleep( 1 );

  //Get Time from Server
  system("sudo date -s \"$(wget -qSO- --max-redirect=0 google.com 2>&1 | grep Date: | cut -d' ' -f5-8)Z\"");
  
  TBSCController* BSCController = newBSCController();
  
  /* start the EmWi main loop and process all user inputs, timers and signals */
  EwPrint( "Start EmWi Main Loop...                      " );
  EwPrint( "[OK]\n" );
  while( cmd != CoreKeyCodePower )
  {
    int timers  = 0;
    int signals = 0;
    int events  = 0;
    XPoint lastPos = {0,0};
	
	if (ProcessBSCController(BSCController)) {
		break;
	}

    /* receive keyboard events and provide it to the application */
    cmd = GetKeyCommand();
    if ( cmd != CoreKeyCodeNoKey )
    {
      /* feed the application with a 'press' and 'release' event */
      events |= CoreRoot__DriveKeyboardHitting( rootObject, cmd, 0, 1 );
      events |= CoreRoot__DriveKeyboardHitting( rootObject, cmd, 0, 0 );
    }

    /* receive touch events and provide it to the application */
    if ( TouchState > 0 )
    {
      XPoint pos;
      pos.X = TouchEventXPos;
      pos.Y = TouchEventYPos;

      /* begin of touch cycle */
      if ( TouchState == 1 )
      {
        events |= CoreRoot__DriveCursorHitting( rootObject, 1, 0, pos );
        TouchState = 2;
        lastPos = pos;
      }

      /* movement during touch cycle */
      else if ( TouchState == 2 )
      {
        if ( lastPos.X != pos.X || lastPos.Y != pos.Y )
          events |= CoreRoot__DriveCursorMovement( rootObject, pos );
        lastPos = pos;
      }

      /* end of touch cycle */
      else if ( TouchState == 3 )
      {
        events |= CoreRoot__DriveCursorHitting( rootObject, 0, 0, pos );
        TouchState = 0;
      }
    }

    /* process expired timers */
    timers = EwProcessTimers();

    /* process the pending signals */
    signals = EwProcessSignals();

    /* refresh the screen, if something has changed and draw its content */
    if ( timers || signals || events )
    {
      if ( CoreRoot__DoesNeedUpdate( rootObject ))
        Update( viewport, rootObject );

      /* after each processed message start the garbage collection */
      EwReclaimMemory();

      /* show the memory statistic */
      #ifdef EW_PRINT_MEMORY_USAGE
        EwPrintProfilerStatistic( 0 );
      #endif
    }
    /* otherwise suspend for a while */
    else
      usleep( 1 );
  }

  destroyBSCController(BSCController);

  EwPrint( "Terminate EmWi Main Loop...                  " );
  ShutDown = 1;
  EwPrint( "[OK]\n" );
  sleep( 1 );

  /* release unused resources */
  EwPrint( "Shut-down EmWi application and OpenGL...     " );
  EwDoneViewport( viewport );
  EwUnlockObject( rootObject );
  EwReclaimMemory();

  /* ... and deinitialize the Graphics Engine */
  EwDoneGraphicsEngine();

  /* show the finaly memory statistic */
  #ifdef EW_PRINT_MEMORY_USAGE
    EwPrintProfilerStatistic( 0 );
  #endif

  /* shutdown the OpenGL sub-system */
  eglMakeCurrent( eglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT ) ;
  eglTerminate( eglDisplay );

  /* restore console settings */
  TermDone();
  EwPrint( "[OK]\n" );

  return 0;
}

/* pba, msy */

