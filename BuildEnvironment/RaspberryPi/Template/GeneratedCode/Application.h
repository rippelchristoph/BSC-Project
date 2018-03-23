/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 8.30
* Profile  : RasPi
* Platform : RaspberryPi.OpenGL.RGBA8888
*
*******************************************************************************/

#ifndef Application_H
#define Application_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x0008001E
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x0008001E
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationAActionButton.h"
#include "_ApplicationAHorzBar.h"
#include "_ApplicationAHorzSlider.h"
#include "_ApplicationANumKeyboard.h"
#include "_ApplicationATextEditor.h"
#include "_ApplicationAToggleButton.h"
#include "_ApplicationApplication.h"
#include "_ApplicationClock.h"
#include "_ApplicationConfig.h"
#include "_ApplicationConfig2Int.h"
#include "_ApplicationConfigInt.h"
#include "_ApplicationConfigPosition.h"
#include "_ApplicationControllMenu.h"
#include "_ApplicationError.h"
#include "_ApplicationNewWellDialoge.h"
#include "_ApplicationSampleController.h"
#include "_ApplicationTab1.h"
#include "_ApplicationTab2.h"
#include "_ApplicationTemperature.h"
#include "_ApplicationWellLabel.h"
#include "_ApplicationWellPart.h"

/* Bitmap resource : 'Application::Oval' */
EW_DECLARE_BITMAP_RES( ApplicationOval )

/* Bitmap resource : 'Application::Logo' */
EW_DECLARE_BITMAP_RES( ApplicationLogo )

/* Font resource : 'Application::FontArial17' */
EW_DECLARE_FONT_RES( ApplicationFontArial17 )

/* Bitmap resource : 'Application::ConfigTR' */
EW_DECLARE_BITMAP_RES( ApplicationConfigTR )

/* Bitmap resource : 'Application::ConfigBL' */
EW_DECLARE_BITMAP_RES( ApplicationConfigBL )

/* Bitmap resource : 'Application::ConfigTop' */
EW_DECLARE_BITMAP_RES( ApplicationConfigTop )

/* Bitmap resource : 'Application::ConfigWaste' */
EW_DECLARE_BITMAP_RES( ApplicationConfigWaste )

/* User defined constant: 'Application::BackgroundColor' */
extern const XColor ApplicationBackgroundColor;

/* User defined constant: 'Application::WidgetColor' */
extern const XColor ApplicationWidgetColor;

/* User defined auto object: 'Application::ApplicationObj' */
EW_DECLARE_AUTOOBJECT( ApplicationApplicationObj, ApplicationApplication )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
