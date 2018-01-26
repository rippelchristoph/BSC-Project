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

#ifndef _DeviceRemainingTimeContext_H
#define _DeviceRemainingTimeContext_H

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

/* Forward declaration of the class Device::RemainingTimeContext */
#ifndef _DeviceRemainingTimeContext_
  EW_DECLARE_CLASS( DeviceRemainingTimeContext )
#define _DeviceRemainingTimeContext_
#endif


/* Deklaration of class : 'Device::RemainingTimeContext' */
EW_DEFINE_FIELDS( DeviceRemainingTimeContext, XObject )
  EW_PROPERTY( RemainingTime,   XInt32 )
  EW_PROPERTY( CircuitNumber,   XInt32 )
EW_END_OF_FIELDS( DeviceRemainingTimeContext )

/* Virtual Method Table (VMT) for the class : 'Device::RemainingTimeContext' */
EW_DEFINE_METHODS( DeviceRemainingTimeContext, XObject )
EW_END_OF_METHODS( DeviceRemainingTimeContext )

/* 'C' function for method : 'Device::RemainingTimeContext.OnSetRemainingTime()' */
void DeviceRemainingTimeContext_OnSetRemainingTime( DeviceRemainingTimeContext _this, 
  XInt32 value );

/* 'C' function for method : 'Device::RemainingTimeContext.OnSetCircuitNumber()' */
void DeviceRemainingTimeContext_OnSetCircuitNumber( DeviceRemainingTimeContext _this, 
  XInt32 value );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceRemainingTimeContext_H */

/* Embedded Wizard */
