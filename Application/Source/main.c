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
*   generated applications on the STM32 environment. The main() function
*   initializes the Runtime Environment / Graphics Engine, creates an instance
*   of the application class and drives message translation and screen updates.
*
*   In order to keep the main() function independent from the particular GUI
*   application, the application class and the screen size are taken from the
*   generated code. In this manner, it is not necessary to modify this file
*   when creating new GUI applications. Just set the attributes 'ScreenSize'
*   and 'ApplicationClass' of the profile in the Embedded Wizard IDE.
*
*   This program demonstrates how to integrate an application developed using
*   Chora and Mosaic class library on a STM32 target.
*
*******************************************************************************/

#include "stm32746g_discovery.h"
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery_sdram.h"

#include <stdio.h>

#include "xprintf.h"
#include "tlsf.h"

#include "ewrte.h"
#include "ewgfx.h"
#include "ewextgfx.h"
#include "ewgfxdefs.h"
#include "Core.h"
#include "Graphics.h"

#include "ew_bsp_system.h"
#include "ew_bsp_clock.h"
#include "ew_bsp_event.h"
#include "ew_bsp_display.h"
#include "ew_bsp_touch.h"
#include "ew_bsp_serial.h"
#include "ew_bsp_inout.h"

#include "IEMiddleware.h"

tlsf_t MemPool;

/* define pyhiscal dimension of the LCD framebuffer */
#define FRAME_BUFFER_WIDTH    480
#define FRAME_BUFFER_HEIGHT   272

/* calculated addresses for framebuffer(s) and memory manager */
#define FRAME_BUFFER_SIZE     FRAME_BUFFER_WIDTH * FRAME_BUFFER_HEIGHT * FRAME_BUFFER_DEPTH
#define FRAME_BUFFER_ADDR     (void*)(LCD_FB_START_ADDRESS)

#ifdef EW_USE_DOUBLE_BUFFER
  #define DOUBLE_BUFFER_ADDR  (void*)((unsigned char*)FRAME_BUFFER_ADDR + FRAME_BUFFER_SIZE)
  #define DOUBLE_BUFFER_SIZE  FRAME_BUFFER_SIZE
#else
  #define DOUBLE_BUFFER_ADDR  (void*)(0)
  #define DOUBLE_BUFFER_SIZE  0
#endif

#define MEMORY_POOL_ADDR      (void*)((unsigned char*)FRAME_BUFFER_ADDR + FRAME_BUFFER_SIZE + DOUBLE_BUFFER_SIZE)
#define MEMORY_POOL_SIZE      0x800000 - FRAME_BUFFER_SIZE - DOUBLE_BUFFER_SIZE

#undef USE_TERMINAL_INPUT


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
static XEnum GetKeyCommand( void )
{
  #ifdef USE_TERMINAL_INPUT
    switch ( EwBspGetCharacter())
    {
      case 0x65 : EwPrint("Key 'Exit' pressed\n");  return CoreKeyCodeExit;
      case 0x38 : EwPrint("Key 'Up' pressed\n");    return CoreKeyCodeUp;
      case 0x32 : EwPrint("Key 'Down' pressed\n");  return CoreKeyCodeDown;
      case 0x36 : EwPrint("Key 'Right' pressed\n"); return CoreKeyCodeRight;
      case 0x34 : EwPrint("Key 'Left' pressed\n");  return CoreKeyCodeLeft;
      case 0x35 : EwPrint("Key 'OK' pressed\n");    return CoreKeyCodeOk;
      case 0x6D : EwPrint("Key 'Menu' pressed\n");  return CoreKeyCodeMenu;
      case 0x70 : EwPrint("Key 'Power' pressed\n"); return CoreKeyCodePower;
    }
  #endif

  return CoreKeyCodeNoKey;
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


/*******************************************************************************
* FUNCTION:
*   main
*
* DESCRIPTION:
*   The main function of the whole application. The main function initializes all
*   necessary drivers and provides a for-ever loop to drive the EmWi application.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Zero if successful.
*
*******************************************************************************/
int main( void )
{
  CoreRoot   rootObject;
  XViewport* viewport;
  XEnum      cmd = CoreKeyCodeNoKey;

  int        touched = 0;
  XPoint     touchPos;

  /* initalize system */
  EwBspConfigSystem();

  /* configure LED */
  EwBspConfigLed();

  /* configure system tick counter */
  EwBspConfigSystemTick();

  EwBspConfigRealTimeClock();

  /* initialize serial interface for debugging and connect xprintf module */
  EwBspConfigSerial();
  xdev_out( EwBspPutCharacter );

  /* initialize display */
  EwPrint( "Initialize Display...                        " );
  EwBspConfigDisplay( FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT, FRAME_BUFFER_ADDR );
  EwPrint( "[OK]\n" );

  /* initialize touchscreen */
  EwPrint( "Initialize Touch Driver...                   " );
  EwBspConfigTouch( FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT );
  EwPrint( "[OK]\n" );

  /* initialize tlsf memory manager */
  /* please note, that the first part of SDRAM is reserved for framebuffer */
  EwPrint( "Initialize Memory Manager...                 " );
  MemPool = tlsf_create_with_pool( MEMORY_POOL_ADDR, MEMORY_POOL_SIZE );
  EwPrint( "[OK]\n" );
  EwPrint( "MemoryPool at address 0x%08X size 0x%08X\n", MEMORY_POOL_ADDR, MEMORY_POOL_SIZE );

  /* initialize the Graphics Engine and Runtime Environment */
  EwPrint( "Initialize Graphics Engine...                " );
  if ( !EwInitGraphicsEngine( 0 ))
    return 2;
  EwPrint( "[OK]\n" );

  /* create the applications root object ... */
  EwPrint( "Create Embedded Wizard Root Object...        " );
  rootObject = (CoreRoot)EwNewObjectIndirect( EwApplicationClass, 0 );
  EwLockObject( rootObject );
  CoreRoot__Initialize( rootObject, EwScreenSize );
  EwPrint( "[OK]\n" );

  /* create Embedded Wizard viewport object to provide uniform access to the framebuffer */
  EwPrint( "Create Embedded Wizard Viewport...           " );
  viewport = EwInitViewport( EwScreenSize, EwNewRect( 0, 0, FRAME_BUFFER_WIDTH, FRAME_BUFFER_HEIGHT ),
    0, 255, FRAME_BUFFER_ADDR, DOUBLE_BUFFER_ADDR, 0, 0 );
  EwPrint( "[OK]\n" );

  //Middleware + Hardware INitializing:

  IEMiddlewareInitialize();

  /* start the Embedded Wizard main loop and process all user inputs, timers and signals */
  while ( cmd != CoreKeyCodePower )
  {
    int timers  = 0;
    int signals = 0;
    int events  = 0;

    /* receive keyboard inputs */
    cmd = GetKeyCommand();

    if ( cmd != CoreKeyCodeNoKey )
    {
      /* feed the application with a 'press' and 'release' event */
      events |= CoreRoot__DriveKeyboardHitting( rootObject, cmd, 0, 1 );
      events |= CoreRoot__DriveKeyboardHitting( rootObject, cmd, 0, 0 );
    }

    /* receive touch inputs and provide the application with them */
    if ( EwBspGetTouchPosition( &touchPos ))
    {
      /* begin of touch cycle */
      if ( touched == 0 )
        CoreRoot__DriveCursorHitting( rootObject, 1, 0, touchPos );

      /* movement during touch cycle */
      else if ( touched == 1 )
        CoreRoot__DriveCursorMovement( rootObject, touchPos );

      touched = 1;
      events  = 1;
    }
    /* end of touch cycle */
    else if ( touched == 1 )
    {
      CoreRoot__DriveCursorHitting( rootObject, 0, 0, touchPos );
      touched = 0;
      events  = 1;
    }

    /* process expired timers */
    timers = EwProcessTimers();

    /* process the pending signals */
    signals = EwProcessSignals();

    /* refresh the screen, if something has changed and draw its content */
    if ( timers || signals || events )
    {
      EwBspLedOn();
      Update( viewport, rootObject );
      EwBspLedOff();

      /* after each processed message start the garbage collection */
      EwReclaimMemory();

      /* show the memory statistic */
      #ifdef EW_PRINT_MEMORY_USAGE
        EwPrintProfilerStatistic( 0 );
      #endif
    }
    /* otherwise sleep/suspend the UI application until a certain event occurs or a timer expires... */
    else
      EwBspWaitForSystemEvent( EwNextTimerExpiration());

    IEMiddlewareProcess();
  }

  /* finished -> release unused resources and memory */
  EwPrint( "Shutting down application...                 " );
  EwDoneViewport( viewport );
  EwUnlockObject( rootObject );
  EwReclaimMemory();

  /* ... and deinitialize the Graphics Engine */
  EwDoneGraphicsEngine();

  EwPrint( "[OK]\n" );

  tlsf_destroy( MemPool );

  return 0;
}


/* msy */
