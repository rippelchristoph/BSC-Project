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

#ifndef _DeviceDeviceClass_H
#define _DeviceDeviceClass_H

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

#include "_CoreSystemEvent.h"
#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Device::DeviceClass */
#ifndef _DeviceDeviceClass_
  EW_DECLARE_CLASS( DeviceDeviceClass )
#define _DeviceDeviceClass_
#endif


/* Deklaration of class : 'Device::DeviceClass' */
EW_DEFINE_FIELDS( DeviceDeviceClass, TemplatesDeviceClass )
  EW_PROPERTY( SampleVolume,    XInt32 )
  EW_OBJECT  ( SampleCollectedEvent, CoreSystemEvent )
  EW_OBJECT  ( RemainingTimeEvent, CoreSystemEvent )
  EW_PROPERTY( Temperature,     XFloat )
  EW_OBJECT  ( TimeEvent,       CoreSystemEvent )
  EW_PROPERTY( NewWell,         XBool )
EW_END_OF_FIELDS( DeviceDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Device::DeviceClass' */
EW_DEFINE_METHODS( DeviceDeviceClass, TemplatesDeviceClass )
EW_END_OF_METHODS( DeviceDeviceClass )

/* 'C' function for method : 'Device::DeviceClass.OnSetSampleVolume()' */
void DeviceDeviceClass_OnSetSampleVolume( DeviceDeviceClass _this, XInt32 value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateSampleVolume( DeviceDeviceClass _this, XInt32 aNewValue );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateSampleVolume()' */
void DeviceDeviceClass__UpdateSampleVolume( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Device::DeviceClass.UpdateSampleVolume(). */
#define _DeviceDeviceClass__UpdateSampleVolume_

/* 'C' function for method : 'Device::DeviceClass.OnSetNewWell()' */
void DeviceDeviceClass_OnSetNewWell( DeviceDeviceClass _this, XBool value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateNewWell( DeviceDeviceClass _this, XBool aNewValue );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateNewWell()' */
void DeviceDeviceClass__UpdateNewWell( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Device::DeviceClass.UpdateNewWell(). */
#define _DeviceDeviceClass__UpdateNewWell_

/* intervall in seconds; circuitNumber from 1 to 6 */
void DeviceDeviceClass_StartSampling( DeviceDeviceClass _this, XInt32 aIntervall, 
  XInt32 aCircuitNumber );

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onSampleCollected( DeviceDeviceClass _this, XInt32 aXPosition, 
  XInt32 aYPosition, XInt32 aCircuitNumber, XInt32 aYear, XInt32 aMonth, XInt32 
  aDay, XInt32 aHour, XInt32 aMinute );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onSampleCollected()' */
void DeviceDeviceClass__onSampleCollected( void* _this, XInt32 aXPosition, XInt32 
  aYPosition, XInt32 aCircuitNumber, XInt32 aYear, XInt32 aMonth, XInt32 aDay, XInt32 
  aHour, XInt32 aMinute );

/* The following define announces the presence of the method Device::DeviceClass.onSampleCollected(). */
#define _DeviceDeviceClass__onSampleCollected_

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onRemainingTime( DeviceDeviceClass _this, XInt32 aCircuitNumber, 
  XInt32 aRemainingTime );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onRemainingTime()' */
void DeviceDeviceClass__onRemainingTime( void* _this, XInt32 aCircuitNumber, XInt32 
  aRemainingTime );

/* The following define announces the presence of the method Device::DeviceClass.onRemainingTime(). */
#define _DeviceDeviceClass__onRemainingTime_

/* 'C' function for method : 'Device::DeviceClass.StopSampling()' */
void DeviceDeviceClass_StopSampling( DeviceDeviceClass _this, XInt32 aCircuitNumber );

/* 'C' function for method : 'Device::DeviceClass.SetBLPosition()' */
void DeviceDeviceClass_SetBLPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ );

/* 'C' function for method : 'Device::DeviceClass.SetTRPosition()' */
void DeviceDeviceClass_SetTRPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ );

/* 'C' function for method : 'Device::DeviceClass.SetWastePosition()' */
void DeviceDeviceClass_SetWastePosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ );

/* 'C' function for method : 'Device::DeviceClass.SetCurrentPosition()' */
void DeviceDeviceClass_SetCurrentPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ );

/* 'C' function for method : 'Device::DeviceClass.SetTopPosition()' */
void DeviceDeviceClass_SetTopPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ );

/* 'C' function for method : 'Device::DeviceClass.OnSetTemperature()' */
void DeviceDeviceClass_OnSetTemperature( DeviceDeviceClass _this, XFloat value );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateTemperature( DeviceDeviceClass _this, XFloat aNewArgument );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateTemperature()' */
void DeviceDeviceClass__UpdateTemperature( void* _this, XFloat aNewArgument );

/* The following define announces the presence of the method Device::DeviceClass.UpdateTemperature(). */
#define _DeviceDeviceClass__UpdateTemperature_

/* 'C' function for method : 'Device::DeviceClass.getColor()' */
XColor DeviceDeviceClass_getColor( DeviceDeviceClass _this, XInt32 aCircuitNumber );

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onTime( DeviceDeviceClass _this, XInt32 aYear, XInt32 aMonth, 
  XInt32 aDay, XInt32 aHour, XInt32 aMinute );

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onTime()' */
void DeviceDeviceClass__onTime( void* _this, XInt32 aYear, XInt32 aMonth, XInt32 
  aDay, XInt32 aHour, XInt32 aMinute );

/* The following define announces the presence of the method Device::DeviceClass.onTime(). */
#define _DeviceDeviceClass__onTime_

/* 'C' function for method : 'Device::DeviceClass.ExitApplication()' */
void DeviceDeviceClass_ExitApplication( DeviceDeviceClass _this );

/* Default onget method for the property 'SampleVolume' */
XInt32 DeviceDeviceClass_OnGetSampleVolume( DeviceDeviceClass _this );

/* Default onget method for the property 'NewWell' */
XBool DeviceDeviceClass_OnGetNewWell( DeviceDeviceClass _this );

/* Default onget method for the property 'Temperature' */
XFloat DeviceDeviceClass_OnGetTemperature( DeviceDeviceClass _this );

#ifdef __cplusplus
  }
#endif

#endif /* _DeviceDeviceClass_H */

/* Embedded Wizard */
