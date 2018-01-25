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

#ifndef _DeviceCurrentTimeContext_H
#define _DeviceCurrentTimeContext_H

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

/* Forward declaration of the class Device::CurrentTimeContext */
#ifndef _DeviceCurrentTimeContext_
  EW_DECLARE_CLASS( DeviceCurrentTimeContext )
#define _DeviceCurrentTimeContext_
#endif


/* Deklaration of class : 'Device::CurrentTimeContext' */
EW_DEFINE_FIELDS( DeviceCurrentTimeContext, XObject )
  EW_PROPERTY( CurrentTime,     XString )
EW_END_OF_FIELDS( DeviceCurrentTimeContext )

/* Virtual Method Table (VMT) for the class : 'Device::CurrentTimeContext' */
EW_DEFINE_METHODS( DeviceCurrentTimeContext, XObject )
EW_END_OF_METHODS( DeviceCurrentTimeContext )

/* 'C' function for method : 'Device::CurrentTimeContext.OnSetCurrentTime()' */
void DeviceCurrentTimeContext_OnSetCurrentTime( DeviceCurrentTimeContext _this, 
  XString value );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceCurrentTimeContext_H */

/* Embedded Wizard */
