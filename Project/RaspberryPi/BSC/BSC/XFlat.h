/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard. Please do not make 
* any modifications of this file! The modifications are lost when the file is
* generated again by Embedded Wizard!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 8.20
* Profile  : RasPi
* Platform : RaspberryPi.OpenGL.RGBA8888
*
*******************************************************************************/

#ifndef XFlat_H
#define XFlat_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x00080014
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x00080014
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_XFlatIconButton.h"

/* Font resources used for the different widgets. If you want to change the fonts 
   within your project, just create a variant of these font resources and define 
   the attributes of the font resources according your design ideas. */
EW_DECLARE_FONT_RES( XFlatFontL )

/* Bitmap resources used for the different button widgets. All bitmap resources 
   used for buttons contain two frames, representing the inactive / active states. */
EW_DECLARE_BITMAP_RES( XFlatButtonEmpty )

/* Color constant representing a theme color of the widget kit. If you want to change 
   this color within your project, just create a variant of this color constant 
   and select a new color value that meets your design ideas. */
extern const XColor XFlatColorEnabled;

/* Color constant representing a theme color of the widget kit. If you want to change 
   this color within your project, just create a variant of this color constant 
   and select a new color value that meets your design ideas. */
extern const XColor XFlatColorDisabled;

#ifdef __cplusplus
  }
#endif

#endif /* XFlat_H */

/* Embedded Wizard */
