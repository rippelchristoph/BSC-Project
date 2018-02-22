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

#ifndef _DeviceErrorContext_H
#define _DeviceErrorContext_H

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

/* Forward declaration of the class Device::ErrorContext */
#ifndef _DeviceErrorContext_
  EW_DECLARE_CLASS( DeviceErrorContext )
#define _DeviceErrorContext_
#endif


/* Deklaration of class : 'Device::ErrorContext' */
EW_DEFINE_FIELDS( DeviceErrorContext, XObject )
  EW_PROPERTY( ErrorMessage,    XString )
EW_END_OF_FIELDS( DeviceErrorContext )

/* Virtual Method Table (VMT) for the class : 'Device::ErrorContext' */
EW_DEFINE_METHODS( DeviceErrorContext, XObject )
EW_END_OF_METHODS( DeviceErrorContext )

/* 'C' function for method : 'Device::ErrorContext.OnSetErrorMessage()' */
void DeviceErrorContext_OnSetErrorMessage( DeviceErrorContext _this, XString value );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceErrorContext_H */

/* Embedded Wizard */
