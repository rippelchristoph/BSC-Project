/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software and related documentation are intellectual property owned by 
* TARA Systems and are copyright of TARA Systems.
* Any copying, reproduction or redistribution of the software in whole or in 
* part by any means not in accordance with the End-User License Agreement for
* Embedded Wizard software is expressly prohibited.
* 
********************************************************************************
*
* DESCRIPTION:
*   This header file contains Graphics Engine configuration parameters and the
*   adaptation for the OpenGL ES 2.0 graphics subsystem.
*
*******************************************************************************/

#ifndef EWEXTGFX_H
#define EWEXTGFX_H


/* Include the OpenGL API. */
#ifdef __APPLE__
  #include <OpenGLES/ES2/gl.h>
  #include <OpenGLES/ES2/glext.h>
#else
  #include <GLES2/gl2.h>
  #include <GLES2/gl2ext.h>
#endif


#ifdef __cplusplus
  extern "C" 
  {
#endif


/* Respect OpenGL limitations */
#ifndef EW_MAX_SURFACE_WIDTH
  #define EW_MAX_SURFACE_WIDTH  2048
#endif

#ifndef EW_MAX_SURFACE_HEIGHT
  #define EW_MAX_SURFACE_HEIGHT 2048
#endif


/* The following macros address different GPU specific optimizations and
   workarounds. If not explicitly recomended, try these switches in order
   to verify the resulting performance.

   EW_PERFORM_FULLSCREEN_UPDATE forces the OpenGL driver to clear framebuffer
   before starting a new screen update. If this option is set 1, the Mosaic
   will redraw the entire screen each time something changes on the screen.
   The explicit clear may improve the overall performance depending on the
   GPU hardware.

   EW_USE_TEXTURE2D_PROJ uses the texture2DProj() function in fragment shaders
   per default. If set to 0, texture2D() function is used and the perspective
   distortion is calculated by x/z and y/z coordinate divisions. This mode was
   faster on PowerVR GPU

   EW_USE_POWER_OF_TWO_TEXTURES determines the constraints for the texture
   size calculation. If set 1, the width and the height of all textures is
   adjusted to the next 'power of two' value. If set 0, the origin size is
   used without any adjustment. This option exists for the case of a possible
   GPU HW limitations only. Usually, in OpenGL ES 2.0 there is no necessity
   to adjust texture width and height.
*/
#ifndef EW_PERFORM_FULLSCREEN_UPDATE
  #define EW_PERFORM_FULLSCREEN_UPDATE 0
#endif

#ifndef EW_USE_TEXTURE2D_PROJ
  #define EW_USE_TEXTURE2D_PROJ        0
#endif

#ifndef EW_USE_POWER_OF_TWO_TEXTURES
  #define EW_USE_POWER_OF_TWO_TEXTURES 0
#endif


/* The following macros exist for debugging purpose only. Please avoid the
   usage of these macros in the release version. They are intended to simplify
   the bring up phase on a new target system.

   EW_CHECK_OPENGL_ERRORS determines whether the OpenGL error status should
   be evaluated after each drawing operation. If set to 0, no evaluation is
   done. This is typical for the release version. If set 1, the evaluation is
   performed. 

   EW_PRINT_GFX_TASK_DETAILS determines whether this OpenGL driver should
   log the performed operations and their parameters or not. If set 0, nothing
   is logged. This is typical for the release version. If set 1, all performed
   drawing operations are logged.

   EW_PRINT_VIDEO_MEMORY_USAGE determines whether this OpenGL driver should
   log the video memory usage or not. If set 0, nothing is log. This is typical
   for the release version. If set 1, each surface creation/destroying is logged.
*/
#ifndef EW_CHECK_OPENGL_ERRORS
  #define EW_CHECK_OPENGL_ERRORS       0
#endif

#ifndef EW_PRINT_GFX_TASK_DETAILS
  #define EW_PRINT_GFX_TASK_DETAILS    0
#endif

#ifndef EW_PRINT_VIDEO_MEMORY_USAGE
  #define EW_PRINT_VIDEO_MEMORY_USAGE  0
#endif


/* If not explicitly specified, assume following default number of tasks,
   which can wait for execution in a so-called 'issue'. Large number of
   tasks can promote the automatic elimination of drawing tasks. */
#ifndef EW_MAX_ISSUE_TASKS
  #define EW_MAX_ISSUE_TASKS 160
#endif


/* The following platform specific function is called during the initialization
   of the Graphics Engine. The function ensures, that OpenGL shader program is
   compiled and installed in the current OpenGL context. */
int OpenGLInit
(
  void*             aArgs
);


/* The following platform specific function is called during the shutdown of
   the Graphics Engine. The function releases the previously compiled shader
   program. */
void OpenGLDone
(
  void
);


/* Redirect the following operations to this OpenGL module */
#define EwGfxInit OpenGLInit
#define EwGfxDone OpenGLDone


/* The following platform specific function is responsible for the creation of
   a new viewport on the OpenGL target. The function uses the OpenGL framebuffer
   passed in the aDisplay1 parameter. */
unsigned long OpenGLInitViewport
(
  int               aWidth,
  int               aHeight,
  int               aExtentX,
  int               aExtentY,
  int               aExtentWidth,
  int               aExtentHeight,
  int               aOrient,
  int               aOpacity,
  void*             aDisplay1,
  void*             aDisplay2,
  void*             aDisplay3
);


/* The following platform specific function releases a previously created OpenGL
   viewport. */
void OpenGLDoneViewport
(
  unsigned long     aHandle
);


/* The following platform specific function has the job to initiate the screen
   update cycle. The function returns a temporary surface representing the 
   OpenGL framebuffer. */
unsigned long OpenGLBeginUpdate
(
  unsigned long     aHandle
);


/* The following platform specific function has the job to finalize the screen
   update cycle. The function forces OpenGL to update the framebuffer changes */
void OpenGLEndUpdate
(
  unsigned long     aHandle,
  int               aX,
  int               aY,
  int               aWidth,
  int               aHeight
);


/* Redirect the following operations to this OpenGL module */
#define EwGfxInitViewport  OpenGLInitViewport
#define EwGfxDoneViewport  OpenGLDoneViewport
#define EwGfxBeginUpdate   OpenGLBeginUpdate
#define EwGfxEndUpdate     OpenGLEndUpdate


/* This function will be called, when a surface should be created. The function
   creates a new texture object to represent the surface. In case of index8
   surface, an additional software emulated surface is used. */
unsigned long OpenGLCreateSurface
(
  int               aFormat,
  int               aWidth,
  int               aHeight
);


/* This function will be called, when a surface should be destroyed. The 
   function destroys the related texture objects and temporary reserved
   memory. */
void OpenGLDestroySurface
(
  unsigned long     aHandle
);


/* This function will be called, when direct access to a surface memory is
   required. In case of OpenGL textures, only write access is possible.
   Index8 surfaces are handled in a special way by using an additional
   index8 emulated software surface. */
unsigned long OpenGLLockSurface
(
  unsigned long     aHandle,
  int               aX,
  int               aY,
  int               aWidth,
  int               aHeight,
  int               aIndex,
  int               aCount,
  int               aReadPixel,
  int               aWritePixel,
  int               aReadClut,
  int               aWriteClut,
  XSurfaceMemory*   aMemory
);


/* This function will be called, when the previous lock to a surface memory
   is terminated. Now, the OpenGL texture needs an update. */
void OpenGLUnlockSurface
(
  unsigned long     aSurfaceHandle,
  unsigned long     aLockHandle,
  int               aX,
  int               aY,
  int               aWidth,
  int               aHeight,
  int               aIndex,
  int               aCount,
  int               aWritePixel,
  int               aWriteClut
);


/* Redirect the surface creation to this OpenGL module */
#define EwGfxCreateNativeSurface    OpenGLCreateSurface
#define EwGfxCreateAlpha8Surface    OpenGLCreateSurface
#define EwGfxCreateIndex8Surface    OpenGLCreateSurface
#define EwGfxDestroyNativeSurface   OpenGLDestroySurface
#define EwGfxDestroyAlpha8Surface   OpenGLDestroySurface
#define EwGfxDestroyIndex8Surface   OpenGLDestroySurface
#define EwGfxLockNativeSurface      OpenGLLockSurface
#define EwGfxLockAlpha8Surface      OpenGLLockSurface
#define EwGfxLockIndex8Surface      OpenGLLockSurface
#define EwGfxUnlockNativeSurface    OpenGLUnlockSurface
#define EwGfxUnlockAlpha8Surface    OpenGLUnlockSurface
#define EwGfxUnlockIndex8Surface    OpenGLUnlockSurface


/* This function will be called in order to obtain the real size of a surface
   with the given size. In case of OpenGL surfaces has always the power of 2
   size. */
void OpenGLAdjustSurfaceSize
(
  int               aFormat,
  int               aWidth,
  int               aHeight,
  int*              aResWidth,
  int*              aResHeight
);


/* Redirect the surface size calculation to this OpenGL module */
#define EwGfxAdjustNativeSurfaceSize OpenGLAdjustSurfaceSize
#define EwGfxAdjustIndex8SurfaceSize OpenGLAdjustSurfaceSize
#define EwGfxAdjustAlpha8SurfaceSize OpenGLAdjustSurfaceSize


/* This function will be called, when a line should be drawn. The function
   draws the line by using OpenGL functionality. */
void OpenGLLineDriver
(
  unsigned long     aDstHandle,
  int               aDstX1,
  int               aDstY1,
  int               aDstX2,
  int               aDstY2,
  int               aClipX,
  int               aClipY,
  int               aClipWidth,
  int               aClipHeight,
  int               aBlend,
  unsigned long*    aColors
);


/* Redirect the line drawing to this OpenGL module */
#define EwGfxDrawLineGradient      OpenGLLineDriver
#define EwGfxDrawLineGradientBlend OpenGLLineDriver


/* This function will be called to fill an area of the texture aDstHandle
   with color or color gradient. The operation is done by OpenGL. */
void OpenGLFillDriver
(
  unsigned long     aDstHandle,
  int               aDstX,
  int               aDstY,
  int               aWidth,
  int               aHeight,
  int               aBlend,
  unsigned long*    aColors
);


/* Redirect the fill area operations to this OpenGL module */
#define EwGfxFillGradient           OpenGLFillDriver
#define EwGfxFillGradientBlend      OpenGLFillDriver


/* This function will be called to copy an area from the aSrcHandle surface to
   the surface aDstHandle. The operation is done by OpenGL. */
void OpenGLCopyDriver
(
  unsigned long     aDstHandle,
  unsigned long     aSrcHandle,
  int               aDstX,
  int               aDstY,
  int               aSrcX,
  int               aSrcY,
  int               aWidth,
  int               aHeight,
  int               aBlend,
  unsigned long*    aColors
);


/* Redirect the copy surface operations to this OpenGL module */
#define EwGfxCopyNative                 OpenGLCopyDriver
#define EwGfxCopyNativeBlend            OpenGLCopyDriver
#define EwGfxCopyNativeGradient         OpenGLCopyDriver
#define EwGfxCopyNativeGradientBlend    OpenGLCopyDriver
#define EwGfxCopyIndex8                 OpenGLCopyDriver
#define EwGfxCopyIndex8Blend            OpenGLCopyDriver
#define EwGfxCopyIndex8Gradient         OpenGLCopyDriver
#define EwGfxCopyIndex8GradientBlend    OpenGLCopyDriver
#define EwGfxCopyAlpha8Gradient         OpenGLCopyDriver
#define EwGfxCopyAlpha8GradientBlend    OpenGLCopyDriver


/* This function will be called to warp a source surface area. The operation
   is done by OpenGL. */
void OpenGLWarpDriver
(
  unsigned long     aDstHandle,
  unsigned long     aSrcHandle,
  float             aDstX1,
  float             aDstY1,
  float             aDstW1,
  float             aDstX2,
  float             aDstY2,
  float             aDstW2,
  float             aDstX3,
  float             aDstY3,
  float             aDstW3,
  float             aDstX4,
  float             aDstY4,
  float             aDstW4,
  int               aSrcX,
  int               aSrcY,
  int               aSrcWidth,
  int               aSrcHeight,
  int               aClipX,
  int               aClipY,
  int               aClipWidth,
  int               aClipHeight,
  int               aBlend,
  int               aFilter,
  unsigned long*    aColors
);


/* Redirect the warp surface operations to this OpenGL module */
#define EwGfxWarpPerspNative                        OpenGLWarpDriver
#define EwGfxWarpPerspNativeBlend                   OpenGLWarpDriver
#define EwGfxWarpPerspNativeGradient                OpenGLWarpDriver
#define EwGfxWarpPerspNativeGradientBlend           OpenGLWarpDriver
#define EwGfxWarpPerspNativeFilter                  OpenGLWarpDriver
#define EwGfxWarpPerspNativeFilterBlend             OpenGLWarpDriver
#define EwGfxWarpPerspNativeFilterGradient          OpenGLWarpDriver
#define EwGfxWarpPerspNativeFilterGradientBlend     OpenGLWarpDriver
#define EwGfxWarpPerspIndex8                        OpenGLWarpDriver
#define EwGfxWarpPerspIndex8Blend                   OpenGLWarpDriver
#define EwGfxWarpPerspIndex8Gradient                OpenGLWarpDriver
#define EwGfxWarpPerspIndex8GradientBlend           OpenGLWarpDriver
#define EwGfxWarpPerspIndex8Filter                  OpenGLWarpDriver
#define EwGfxWarpPerspIndex8FilterBlend             OpenGLWarpDriver
#define EwGfxWarpPerspIndex8FilterGradient          OpenGLWarpDriver
#define EwGfxWarpPerspIndex8FilterGradientBlend     OpenGLWarpDriver
#define EwGfxWarpPerspAlpha8Gradient                OpenGLWarpDriver
#define EwGfxWarpPerspAlpha8GradientBlend           OpenGLWarpDriver
#define EwGfxWarpPerspAlpha8FilterGradient          OpenGLWarpDriver
#define EwGfxWarpPerspAlpha8FilterGradientBlend     OpenGLWarpDriver
#define EwGfxWarpAffineNative                       OpenGLWarpDriver
#define EwGfxWarpAffineNativeBlend                  OpenGLWarpDriver
#define EwGfxWarpAffineNativeGradient               OpenGLWarpDriver
#define EwGfxWarpAffineNativeGradientBlend          OpenGLWarpDriver
#define EwGfxWarpAffineNativeFilter                 OpenGLWarpDriver
#define EwGfxWarpAffineNativeFilterBlend            OpenGLWarpDriver
#define EwGfxWarpAffineNativeFilterGradient         OpenGLWarpDriver
#define EwGfxWarpAffineNativeFilterGradientBlend    OpenGLWarpDriver
#define EwGfxWarpAffineIndex8                       OpenGLWarpDriver
#define EwGfxWarpAffineIndex8Blend                  OpenGLWarpDriver
#define EwGfxWarpAffineIndex8Gradient               OpenGLWarpDriver
#define EwGfxWarpAffineIndex8GradientBlend          OpenGLWarpDriver
#define EwGfxWarpAffineIndex8Filter                 OpenGLWarpDriver
#define EwGfxWarpAffineIndex8FilterBlend            OpenGLWarpDriver
#define EwGfxWarpAffineIndex8FilterGradient         OpenGLWarpDriver
#define EwGfxWarpAffineIndex8FilterGradientBlend    OpenGLWarpDriver
#define EwGfxWarpAffineAlpha8Gradient               OpenGLWarpDriver
#define EwGfxWarpAffineAlpha8GradientBlend          OpenGLWarpDriver
#define EwGfxWarpAffineAlpha8FilterGradient         OpenGLWarpDriver
#define EwGfxWarpAffineAlpha8FilterGradientBlend    OpenGLWarpDriver


#ifdef __cplusplus
  }
#endif

#endif /* EWEXTGFX_H */


/* pba */
