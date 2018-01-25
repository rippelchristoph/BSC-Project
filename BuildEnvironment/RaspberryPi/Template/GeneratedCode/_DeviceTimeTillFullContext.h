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

#ifndef _DeviceTimeTillFullContext_H
#define _DeviceTimeTillFullContext_H

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

/* Forward declaration of the class Device::TimeTillFullContext */
#ifndef _DeviceTimeTillFullContext_
  EW_DECLARE_CLASS( DeviceTimeTillFullContext )
#define _DeviceTimeTillFullContext_
#endif


/* Deklaration of class : 'Device::TimeTillFullContext' */
EW_DEFINE_FIELDS( DeviceTimeTillFullContext, XObject )
  EW_PROPERTY( TimeTillFull,    XString )
EW_END_OF_FIELDS( DeviceTimeTillFullContext )

/* Virtual Method Table (VMT) for the class : 'Device::TimeTillFullContext' */
EW_DEFINE_METHODS( DeviceTimeTillFullContext, XObject )
EW_END_OF_METHODS( DeviceTimeTillFullContext )

/* 'C' function for method : 'Device::TimeTillFullContext.OnSetTimeTillFull()' */
void DeviceTimeTillFullContext_OnSetTimeTillFull( DeviceTimeTillFullContext _this, 
  XString value );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceTimeTillFullContext_H */

/* Embedded Wizard */
