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

#ifndef _DeviceSampleCollectedContext_H
#define _DeviceSampleCollectedContext_H

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

/* Forward declaration of the class Device::SampleCollectedContext */
#ifndef _DeviceSampleCollectedContext_
  EW_DECLARE_CLASS( DeviceSampleCollectedContext )
#define _DeviceSampleCollectedContext_
#endif


/* Deklaration of class : 'Device::SampleCollectedContext' */
EW_DEFINE_FIELDS( DeviceSampleCollectedContext, XObject )
  EW_PROPERTY( WellIndex,       XPoint )
  EW_PROPERTY( CircuitNumber,   XInt32 )
  EW_PROPERTY( Time,            XString )
EW_END_OF_FIELDS( DeviceSampleCollectedContext )

/* Virtual Method Table (VMT) for the class : 'Device::SampleCollectedContext' */
EW_DEFINE_METHODS( DeviceSampleCollectedContext, XObject )
EW_END_OF_METHODS( DeviceSampleCollectedContext )

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetWellIndex()' */
void DeviceSampleCollectedContext_OnSetWellIndex( DeviceSampleCollectedContext _this, 
  XPoint value );

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetCircuitNumber()' */
void DeviceSampleCollectedContext_OnSetCircuitNumber( DeviceSampleCollectedContext _this, 
  XInt32 value );

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetTime()' */
void DeviceSampleCollectedContext_OnSetTime( DeviceSampleCollectedContext _this, 
  XString value );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceSampleCollectedContext_H */

/* Embedded Wizard */
