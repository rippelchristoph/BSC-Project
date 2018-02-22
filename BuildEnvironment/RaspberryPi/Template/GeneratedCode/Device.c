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

#include "ewlocale.h"
#include "_CoreSystemEvent.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceErrorContext.h"
#include "_DeviceRemainingTimeContext.h"
#include "_DeviceSampleCollectedContext.h"
#include "_DeviceTimeContext.h"
#include "Device.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x000003E8, /* ratio 47.20 % */
  0xB8002300, 0x80000452, 0x00C20029, 0x0E000368, 0xCA003600, 0xE002B000, 0x750043CD,
  0xA0044616, 0x058020C3, 0x70020B03, 0xC0CEF1B2, 0x1A21108D, 0x20D210F4, 0x01093A42,
  0x130001C8, 0x0E8642A1, 0xE001A621, 0x0019C006, 0x00B40020, 0x4F09200A, 0xDA671B9A,
  0xA3929989, 0x892D09C7, 0x73B0010E, 0x548C18E6, 0xC8CC9291, 0xA7524C50, 0x9416A32B,
  0x93EC8002, 0x5E834EB2, 0xE8F15991, 0xAB53A0CF, 0x719AB802, 0x1AADCC27, 0x699C4ABD,
  0xB4588350, 0x5476D166, 0xCF62D6CB, 0xC28F45B7, 0xA9600BDC, 0x3106A6C2, 0x31A9B544,
  0x16A9C6E7, 0xBABC4A9B, 0xA2190018, 0x01628343, 0xD440C00B, 0x4415A42C, 0x2B254A0D,
  0x0D1D8943, 0xC2EA8816, 0x06826CE3, 0x1A8ECA83, 0x006E289B, 0x259ED163, 0x4CE4F83B,
  0x66A53EC3, 0x2ED58AB5, 0xBF5DBC51, 0x97F0FEF6, 0xBEE2606C, 0x4A25BB0B, 0x85432256,
  0x4F867B3B, 0x6BE77ADE, 0x232621D2, 0x3290E8B5, 0x11E38BCE, 0x97100687, 0x77ACDD2D,
  0x3C6746B1, 0xC170BABD, 0x1DB71DD9, 0xD5CDCB5C, 0x01FA569C, 0xBD5B17A0, 0x14151059,
  0x9481CD6D, 0x17213B73, 0xF5467CD4, 0x784499F4, 0x6AC07690, 0xDBD68C00, 0x8505BF87,
  0x6A2088DA, 0xBF649A41, 0x4CD1954D, 0x13D44933, 0x245A104C, 0xB6144C21, 0x227153D5,
  0x8757F53E, 0xD0D105CE, 0xA8193A90, 0x7A3A8E10, 0x307A80F4, 0x4C133429, 0x46651D98,
  0xE4193F56, 0x5C465440, 0x08499164, 0x44912439, 0x4106F59F, 0x74296B54, 0x651446E3,
  0x1E6C2096, 0x491BF95D, 0x91767A5F, 0xE4C44744, 0x8A6E6F50, 0x48001D04, 0x449105B4,
  0x66D89E12, 0xA9F67B54, 0xA621A026, 0xA475DFE6, 0x40400479, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x0014 };
static const XStringRes _Const0002 = { _StringsDefault0, 0x001F };
static const XStringRes _Const0003 = { _StringsDefault0, 0x003D };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0050 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x006E };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0088 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x00A0 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x00A6 };
static const XStringRes _Const0009 = { _StringsDefault0, 0x00B0 };
static const XStringRes _Const000A = { _StringsDefault0, 0x00B5 };
static const XStringRes _Const000B = { _StringsDefault0, 0x00BA };
static const XStringRes _Const000C = { _StringsDefault0, 0x00BF };
static const XStringRes _Const000D = { _StringsDefault0, 0x00DF };
static const XStringRes _Const000E = { _StringsDefault0, 0x00FE };
static const XStringRes _Const000F = { _StringsDefault0, 0x011F };
static const XStringRes _Const0010 = { _StringsDefault0, 0x013E };
static const XStringRes _Const0011 = { _StringsDefault0, 0x0154 };
static const XStringRes _Const0012 = { _StringsDefault0, 0x015B };
static const XStringRes _Const0013 = { _StringsDefault0, 0x0162 };
static const XStringRes _Const0014 = { _StringsDefault0, 0x0169 };
static const XColor _Const0015 = { 0xF3, 0x89, 0x00, 0xFF };
static const XColor _Const0016 = { 0x32, 0xCE, 0x00, 0xFF };
static const XColor _Const0017 = { 0x1E, 0x60, 0x33, 0xFF };
static const XColor _Const0018 = { 0x00, 0x00, 0xFF, 0xFF };
static const XColor _Const0019 = { 0x00, 0xFF, 0xFF, 0xFF };
static const XColor _Const001A = { 0xFF, 0x00, 0xFF, 0xFF };
static const XColor _Const001B = { 0xFF, 0x00, 0x00, 0xFF };
static const XStringRes _Const001C = { _StringsDefault0, 0x0181 };
static const XStringRes _Const001D = { _StringsDefault0, 0x0194 };
static const XStringRes _Const001E = { _StringsDefault0, 0x01A3 };
static const XStringRes _Const001F = { _StringsDefault0, 0x01B1 };
static const XStringRes _Const0020 = { _StringsDefault0, 0x01C1 };
static const XStringRes _Const0021 = { _StringsDefault0, 0x01CF };
static const XStringRes _Const0022 = { _StringsDefault0, 0x01DD };
static const XStringRes _Const0023 = { _StringsDefault0, 0x01EB };

/* User defined inline code: 'Device::BSCHeader' */
#include "BSCController.h"
#include <stdlib.h>
#include <stdio.h>

/* Initializer for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Init( DeviceDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSystemEvent__Init( &_this->SampleCollectedEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->RemainingTimeEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->TimeEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->ErrorEvent, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DeviceDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Temperature = 0.000000f;
  _this->WellViewEnabled = 1;
}

/* Re-Initializer for the class 'Device::DeviceClass' */
void DeviceDeviceClass__ReInit( DeviceDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSystemEvent__ReInit( &_this->SampleCollectedEvent );
  CoreSystemEvent__ReInit( &_this->RemainingTimeEvent );
  CoreSystemEvent__ReInit( &_this->TimeEvent );
  CoreSystemEvent__ReInit( &_this->ErrorEvent );
}

/* Finalizer method for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Done( DeviceDeviceClass _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( DeviceDeviceClass );

  /* Finalize all embedded objects */
  CoreSystemEvent__Done( &_this->SampleCollectedEvent );
  CoreSystemEvent__Done( &_this->RemainingTimeEvent );
  CoreSystemEvent__Done( &_this->TimeEvent );
  CoreSystemEvent__Done( &_this->ErrorEvent );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Mark( DeviceDeviceClass _this )
{
  EwMarkObject( &_this->SampleCollectedEvent );
  EwMarkObject( &_this->RemainingTimeEvent );
  EwMarkObject( &_this->TimeEvent );
  EwMarkObject( &_this->ErrorEvent );

  /* Give the super class a chance to mark its objects and references */
  TemplatesDeviceClass__Mark( &_this->_Super );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetSampleVolume()' */
void DeviceDeviceClass_OnSetSampleVolume( DeviceDeviceClass _this, XInt32 value )
{
  if ( _this->SampleVolume == value )
    return;

  _this->SampleVolume = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0000 ), EwNewStringInt( _this->SampleVolume, 
    0, 10 )));
  BSCSetSampleVolume(value);//ul
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetSampleVolume, DeviceDeviceClass_OnSetSampleVolume 
    ), 0 );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetNewWell()' */
void DeviceDeviceClass_OnSetNewWell( DeviceDeviceClass _this, XBool value )
{
  if ( _this->NewWell == value )
    return;

  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNewWell, DeviceDeviceClass_OnSetNewWell 
    ), 0 );
  EwTrace( "%s", EwLoadString( &_Const0001 ));
}

/* intervall in seconds; circuitNumber from 1 to 6 */
void DeviceDeviceClass_StartSampling( DeviceDeviceClass _this, XInt32 aIntervall, 
  XInt32 aCircuitNumber )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0002 
    ), EwNewStringInt( aIntervall, 0, 10 )), EwLoadString( &_Const0003 )), EwNewStringInt( 
    aCircuitNumber, 0, 10 )));

  if (( aCircuitNumber < 0 ) || ( aCircuitNumber > 5 ))
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const0004 ), EwNewStringInt( 
      aCircuitNumber, 0, 10 )));
    return;
  }

  if ( aIntervall <= 0 )
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const0005 ), EwNewStringInt( 
      aIntervall, 0, 10 )));
    return;
  }

  BSCAddOrder(aIntervall, aCircuitNumber);
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onSampleCollected( DeviceDeviceClass _this, XInt32 aXPosition, 
  XInt32 aYPosition, XInt32 aCircuitNumber, XInt32 aYear, XInt32 aMonth, XInt32 
  aDay, XInt32 aHour, XInt32 aMinute )
{
  DeviceSampleCollectedContext context;

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0006 ), EwNewStringInt( aXPosition, 0, 
    10 )), EwLoadString( &_Const0007 )), EwNewStringInt( aYPosition, 0, 10 )), EwLoadString( 
    &_Const0003 )), EwNewStringInt( aCircuitNumber, 0, 10 )), EwLoadString( &_Const0008 
    )), EwNewStringInt( aDay, 0, 10 )), EwLoadString( &_Const0009 )), EwNewStringInt( 
    aMonth, 0, 10 )), EwLoadString( &_Const0009 )), EwNewStringInt( aYear, 0, 10 
    )), EwLoadString( &_Const000A )), EwNewStringInt( aHour, 0, 10 )), EwLoadString( 
    &_Const000B )), EwNewStringInt( aMinute, 0, 10 )));
  context = EwNewObject( DeviceSampleCollectedContext, 0 );
  DeviceSampleCollectedContext_OnSetCircuitNumber( context, aCircuitNumber );
  DeviceSampleCollectedContext_OnSetYear( context, aYear );
  DeviceSampleCollectedContext_OnSetMonth( context, aMonth );
  DeviceSampleCollectedContext_OnSetDay( context, aDay );
  DeviceSampleCollectedContext_OnSetHour( context, aHour );
  DeviceSampleCollectedContext_OnSetMinute( context, aMinute );
  DeviceSampleCollectedContext_OnSetXPosition( context, aXPosition );
  DeviceSampleCollectedContext_OnSetYPosition( context, aYPosition );

  if ( _this->WellViewEnabled == 1 )
  {
    CoreSystemEvent_Trigger( &_this->SampleCollectedEvent, ((XObject)context ), 
    0 );
  }
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onSampleCollected()' */
void DeviceDeviceClass__onSampleCollected( void* _this, XInt32 aXPosition, XInt32 
  aYPosition, XInt32 aCircuitNumber, XInt32 aYear, XInt32 aMonth, XInt32 aDay, XInt32 
  aHour, XInt32 aMinute )
{
  DeviceDeviceClass_onSampleCollected((DeviceDeviceClass)_this, aXPosition, aYPosition
  , aCircuitNumber, aYear, aMonth, aDay, aHour, aMinute );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onRemainingTime( DeviceDeviceClass _this, XInt32 aCircuitNumber, 
  XInt32 aRemainingTime )
{
  DeviceRemainingTimeContext context = EwNewObject( DeviceRemainingTimeContext, 
    0 );

  if (( aCircuitNumber > 5 ) || ( aCircuitNumber < 0 ))
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const000C ), EwNewStringInt( 
      aCircuitNumber, 0, 10 )));
    return;
  }

  if ( aRemainingTime < 0 )
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const000D ), EwNewStringInt( 
      aRemainingTime, 0, 10 )));
  }

  DeviceRemainingTimeContext_OnSetCircuitNumber( context, aCircuitNumber );
  DeviceRemainingTimeContext_OnSetRemainingTime( context, aRemainingTime );
  CoreSystemEvent_Trigger( &_this->RemainingTimeEvent, ((XObject)context ), 0 );
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onRemainingTime()' */
void DeviceDeviceClass__onRemainingTime( void* _this, XInt32 aCircuitNumber, XInt32 
  aRemainingTime )
{
  DeviceDeviceClass_onRemainingTime((DeviceDeviceClass)_this, aCircuitNumber, aRemainingTime );
}

/* 'C' function for method : 'Device::DeviceClass.StopSampling()' */
void DeviceDeviceClass_StopSampling( DeviceDeviceClass _this, XInt32 aCircuitNumber )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwLoadString( &_Const000E ), EwNewStringInt( aCircuitNumber, 
    0, 10 )));

  if (( aCircuitNumber < 0 ) || ( aCircuitNumber > 5 ))
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const000F ), EwNewStringInt( 
      aCircuitNumber, 0, 10 )));
    return;
  }
}

/* 'C' function for method : 'Device::DeviceClass.SetPosition()' */
void DeviceDeviceClass_SetPosition( DeviceDeviceClass _this, XInt32 aIndex, XInt32 
  aX, XInt32 aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0010 ), 
    EwNewStringInt( aIndex, 0, 10 )), EwLoadString( &_Const0011 )), EwNewStringInt( 
    aX, 0, 10 )), EwLoadString( &_Const0012 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( 
    &_Const0013 )), EwNewStringInt( aZ, 0, 10 )));
  BSCSetPosition(aIndex, aX, aY, aZ);
}

/* 'C' function for method : 'Device::DeviceClass.SetCurrentPosition()' */
void DeviceDeviceClass_SetCurrentPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0014 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const0012 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const0013 )), 
    EwNewStringInt( aZ, 0, 10 )));
  BSCSetCurrentPosition(aX,aY,aZ);
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateTemperature( DeviceDeviceClass _this, XFloat aNewArgument )
{
  if ( aNewArgument != _this->Temperature )
  {
    _this->Temperature = aNewArgument;
    EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetTemperature, DeviceDeviceClass_OnSetTemperature 
      ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateTemperature()' */
void DeviceDeviceClass__UpdateTemperature( void* _this, XFloat aNewArgument )
{
  DeviceDeviceClass_UpdateTemperature((DeviceDeviceClass)_this, aNewArgument );
}

/* 'C' function for method : 'Device::DeviceClass.getColor()' */
XColor DeviceDeviceClass_getColor( DeviceDeviceClass _this, XInt32 aCircuitNumber )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  switch ( aCircuitNumber )
  {
    case 0 :
      return _Const0015;

    case 1 :
      return _Const0016;

    case 2 :
      return _Const0017;

    case 3 :
      return _Const0018;

    case 4 :
      return _Const0019;

    case 5 :
      return _Const001A;

    default : 
      return _Const001B;
  }
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onTime( DeviceDeviceClass _this, XInt32 aYear, XInt32 aMonth, 
  XInt32 aDay, XInt32 aHour, XInt32 aMinute )
{
  DeviceTimeContext context = EwNewObject( DeviceTimeContext, 0 );

  DeviceTimeContext_OnSetYear( context, aYear );
  DeviceTimeContext_OnSetMonth( context, aMonth );
  DeviceTimeContext_OnSetDay( context, aDay );
  DeviceTimeContext_OnSetHour( context, aHour );
  DeviceTimeContext_OnSetMinute( context, aMinute );
  CoreSystemEvent_Trigger( &_this->TimeEvent, ((XObject)context ), 0 );
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onTime()' */
void DeviceDeviceClass__onTime( void* _this, XInt32 aYear, XInt32 aMonth, XInt32 
  aDay, XInt32 aHour, XInt32 aMinute )
{
  DeviceDeviceClass_onTime((DeviceDeviceClass)_this, aYear, aMonth, aDay, aHour, 
  aMinute );
}

/* 'C' function for method : 'Device::DeviceClass.ExitApplication()' */
void DeviceDeviceClass_ExitApplication( DeviceDeviceClass _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwLoadString( &_Const001C ));
  BSCShutdown();
}

/* 'C' function for method : 'Device::DeviceClass.StartConfig()' */
void DeviceDeviceClass_StartConfig( DeviceDeviceClass _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwLoadString( &_Const001D ));
  BSCStartConfig();
}

/* 'C' function for method : 'Device::DeviceClass.OnSetFlowSpeed()' */
void DeviceDeviceClass_OnSetFlowSpeed( DeviceDeviceClass _this, XInt32 value )
{
  if ( _this->FlowSpeed == value )
    return;

  _this->FlowSpeed = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const001E ), EwNewStringInt( _this->FlowSpeed, 
    0, 10 )));
  BSCSetFlowSpeed(value); //ul/s
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetFlowSpeed, DeviceDeviceClass_OnSetFlowSpeed 
    ), 0 );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetWasteVolume()' */
void DeviceDeviceClass_OnSetWasteVolume( DeviceDeviceClass _this, XInt32 value )
{
  if ( _this->WasteVolume == value )
    return;

  _this->WasteVolume = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const001F ), EwNewStringInt( _this->WasteVolume, 
    0, 10 )));
  BSCSetWasteVolume(value); //ul
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetWasteVolume, DeviceDeviceClass_OnSetWasteVolume 
    ), 0 );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetNeedleGap()' */
void DeviceDeviceClass_OnSetNeedleGap( DeviceDeviceClass _this, XInt32 value )
{
  if ( _this->NeedleGap == value )
    return;

  _this->NeedleGap = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0020 ), EwNewStringInt( _this->NeedleGap, 
    0, 10 )));
  BSCSetNeedleGap(value); //um
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNeedleGap, DeviceDeviceClass_OnSetNeedleGap 
    ), 0 );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetWellViewEnabled()' */
void DeviceDeviceClass_OnSetWellViewEnabled( DeviceDeviceClass _this, XBool value )
{
  if ( _this->WellViewEnabled == value )
    return;

  _this->WellViewEnabled = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetWellViewEnabled, 
    DeviceDeviceClass_OnSetWellViewEnabled ), 0 );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetNumHolesY()' */
void DeviceDeviceClass_OnSetNumHolesY( DeviceDeviceClass _this, XInt32 value )
{
  if ( _this->NumHolesY == value )
    return;

  _this->NumHolesY = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0021 ), EwNewStringInt( _this->NumHolesY, 
    0, 10 )));

  if (( _this->NumHolesX < 7 ) && ( _this->NumHolesY < 9 ))
  {
    DeviceDeviceClass_OnSetWellViewEnabled( _this, 1 );
  }
  else
  {
    DeviceDeviceClass_OnSetWellViewEnabled( _this, 0 );
  }

  BSCSetNumHolesY(value);
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNumHolesY, DeviceDeviceClass_OnSetNumHolesY 
    ), 0 );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetNumHolesX()' */
void DeviceDeviceClass_OnSetNumHolesX( DeviceDeviceClass _this, XInt32 value )
{
  if ( _this->NumHolesX == value )
    return;

  _this->NumHolesX = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0022 ), EwNewStringInt( _this->NumHolesX, 
    0, 10 )));

  if (( _this->NumHolesX < 7 ) && ( _this->NumHolesY < 9 ))
  {
    DeviceDeviceClass_OnSetWellViewEnabled( _this, 1 );
  }
  else
  {
    DeviceDeviceClass_OnSetWellViewEnabled( _this, 0 );
  }

  BSCSetNumHolesX(value);
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNumHolesX, DeviceDeviceClass_OnSetNumHolesX 
    ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onError( DeviceDeviceClass _this, XString aErrorMessage )
{
  DeviceErrorContext context = EwNewObject( DeviceErrorContext, 0 );

  DeviceErrorContext_OnSetErrorMessage( context, aErrorMessage );
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0023 ), aErrorMessage ));
  CoreSystemEvent_Trigger( &_this->ErrorEvent, ((XObject)context ), 0 );
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onError()' */
void DeviceDeviceClass__onError( void* _this, XString aErrorMessage )
{
  DeviceDeviceClass_onError((DeviceDeviceClass)_this, aErrorMessage );
}

/* 'C' function for method : 'Device::DeviceClass.StopConfig()' */
void DeviceDeviceClass_StopConfig( DeviceDeviceClass _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  BSCStopConfig();
}

/* Default onget method for the property 'SampleVolume' */
XInt32 DeviceDeviceClass_OnGetSampleVolume( DeviceDeviceClass _this )
{
  return _this->SampleVolume;
}

/* Default onget method for the property 'NewWell' */
XBool DeviceDeviceClass_OnGetNewWell( DeviceDeviceClass _this )
{
  return _this->NewWell;
}

/* Default onget method for the property 'Temperature' */
XFloat DeviceDeviceClass_OnGetTemperature( DeviceDeviceClass _this )
{
  return _this->Temperature;
}

/* Default onset method for the property 'Temperature' */
void DeviceDeviceClass_OnSetTemperature( DeviceDeviceClass _this, XFloat value )
{
  _this->Temperature = value;
}

/* Default onget method for the property 'FlowSpeed' */
XInt32 DeviceDeviceClass_OnGetFlowSpeed( DeviceDeviceClass _this )
{
  return _this->FlowSpeed;
}

/* Default onget method for the property 'WasteVolume' */
XInt32 DeviceDeviceClass_OnGetWasteVolume( DeviceDeviceClass _this )
{
  return _this->WasteVolume;
}

/* Default onget method for the property 'NeedleGap' */
XInt32 DeviceDeviceClass_OnGetNeedleGap( DeviceDeviceClass _this )
{
  return _this->NeedleGap;
}

/* Default onget method for the property 'WellViewEnabled' */
XBool DeviceDeviceClass_OnGetWellViewEnabled( DeviceDeviceClass _this )
{
  return _this->WellViewEnabled;
}

/* Default onget method for the property 'NumHolesY' */
XInt32 DeviceDeviceClass_OnGetNumHolesY( DeviceDeviceClass _this )
{
  return _this->NumHolesY;
}

/* Default onget method for the property 'NumHolesX' */
XInt32 DeviceDeviceClass_OnGetNumHolesX( DeviceDeviceClass _this )
{
  return _this->NumHolesX;
}

/* Variants derived from the class : 'Device::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( DeviceDeviceClass )
EW_END_OF_CLASS_VARIANTS( DeviceDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Device::DeviceClass' */
EW_DEFINE_CLASS( DeviceDeviceClass, TemplatesDeviceClass, "Device::DeviceClass" )
EW_END_OF_CLASS( DeviceDeviceClass )

/* User defined auto object: 'Device::Device' */
EW_DEFINE_AUTOOBJECT( DeviceDevice, DeviceDeviceClass )

/* Initializer for the auto object 'Device::Device' */
void DeviceDevice__Init( DeviceDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Device::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( DeviceDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( DeviceDevice )

/* Initializer for the class 'Device::SampleCollectedContext' */
void DeviceSampleCollectedContext__Init( DeviceSampleCollectedContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DeviceSampleCollectedContext );
}

/* Re-Initializer for the class 'Device::SampleCollectedContext' */
void DeviceSampleCollectedContext__ReInit( DeviceSampleCollectedContext _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Device::SampleCollectedContext' */
void DeviceSampleCollectedContext__Done( DeviceSampleCollectedContext _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( DeviceSampleCollectedContext );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::SampleCollectedContext' */
void DeviceSampleCollectedContext__Mark( DeviceSampleCollectedContext _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetXPosition()' */
void DeviceSampleCollectedContext_OnSetXPosition( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->XPosition == value )
    return;

  _this->XPosition = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetCircuitNumber()' */
void DeviceSampleCollectedContext_OnSetCircuitNumber( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->CircuitNumber == value )
    return;

  _this->CircuitNumber = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetYear()' */
void DeviceSampleCollectedContext_OnSetYear( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->Year == value )
    return;

  _this->Year = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetMonth()' */
void DeviceSampleCollectedContext_OnSetMonth( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->Month == value )
    return;

  _this->Month = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetDay()' */
void DeviceSampleCollectedContext_OnSetDay( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->Day == value )
    return;

  _this->Day = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetMinute()' */
void DeviceSampleCollectedContext_OnSetMinute( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->Minute == value )
    return;

  _this->Minute = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetHour()' */
void DeviceSampleCollectedContext_OnSetHour( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->Hour == value )
    return;

  _this->Hour = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetYPosition()' */
void DeviceSampleCollectedContext_OnSetYPosition( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->YPosition == value )
    return;

  _this->YPosition = value;
}

/* Variants derived from the class : 'Device::SampleCollectedContext' */
EW_DEFINE_CLASS_VARIANTS( DeviceSampleCollectedContext )
EW_END_OF_CLASS_VARIANTS( DeviceSampleCollectedContext )

/* Virtual Method Table (VMT) for the class : 'Device::SampleCollectedContext' */
EW_DEFINE_CLASS( DeviceSampleCollectedContext, XObject, "Device::SampleCollectedContext" )
EW_END_OF_CLASS( DeviceSampleCollectedContext )

/* Initializer for the class 'Device::RemainingTimeContext' */
void DeviceRemainingTimeContext__Init( DeviceRemainingTimeContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DeviceRemainingTimeContext );
}

/* Re-Initializer for the class 'Device::RemainingTimeContext' */
void DeviceRemainingTimeContext__ReInit( DeviceRemainingTimeContext _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Device::RemainingTimeContext' */
void DeviceRemainingTimeContext__Done( DeviceRemainingTimeContext _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( DeviceRemainingTimeContext );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::RemainingTimeContext' */
void DeviceRemainingTimeContext__Mark( DeviceRemainingTimeContext _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Device::RemainingTimeContext.OnSetRemainingTime()' */
void DeviceRemainingTimeContext_OnSetRemainingTime( DeviceRemainingTimeContext _this, 
  XInt32 value )
{
  if ( _this->RemainingTime == value )
    return;

  _this->RemainingTime = value;
}

/* 'C' function for method : 'Device::RemainingTimeContext.OnSetCircuitNumber()' */
void DeviceRemainingTimeContext_OnSetCircuitNumber( DeviceRemainingTimeContext _this, 
  XInt32 value )
{
  if ( _this->CircuitNumber == value )
    return;

  _this->CircuitNumber = value;
}

/* Variants derived from the class : 'Device::RemainingTimeContext' */
EW_DEFINE_CLASS_VARIANTS( DeviceRemainingTimeContext )
EW_END_OF_CLASS_VARIANTS( DeviceRemainingTimeContext )

/* Virtual Method Table (VMT) for the class : 'Device::RemainingTimeContext' */
EW_DEFINE_CLASS( DeviceRemainingTimeContext, XObject, "Device::RemainingTimeContext" )
EW_END_OF_CLASS( DeviceRemainingTimeContext )

/* Initializer for the class 'Device::TimeContext' */
void DeviceTimeContext__Init( DeviceTimeContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DeviceTimeContext );
}

/* Re-Initializer for the class 'Device::TimeContext' */
void DeviceTimeContext__ReInit( DeviceTimeContext _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Device::TimeContext' */
void DeviceTimeContext__Done( DeviceTimeContext _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( DeviceTimeContext );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::TimeContext' */
void DeviceTimeContext__Mark( DeviceTimeContext _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Device::TimeContext.OnSetDay()' */
void DeviceTimeContext_OnSetDay( DeviceTimeContext _this, XInt32 value )
{
  if ( _this->Day == value )
    return;

  _this->Day = value;
}

/* 'C' function for method : 'Device::TimeContext.OnSetMonth()' */
void DeviceTimeContext_OnSetMonth( DeviceTimeContext _this, XInt32 value )
{
  if ( _this->Month == value )
    return;

  _this->Month = value;
}

/* 'C' function for method : 'Device::TimeContext.OnSetYear()' */
void DeviceTimeContext_OnSetYear( DeviceTimeContext _this, XInt32 value )
{
  if ( _this->Year == value )
    return;

  _this->Year = value;
}

/* 'C' function for method : 'Device::TimeContext.OnSetHour()' */
void DeviceTimeContext_OnSetHour( DeviceTimeContext _this, XInt32 value )
{
  if ( _this->Hour == value )
    return;

  _this->Hour = value;
}

/* 'C' function for method : 'Device::TimeContext.OnSetMinute()' */
void DeviceTimeContext_OnSetMinute( DeviceTimeContext _this, XInt32 value )
{
  if ( _this->Minute == value )
    return;

  _this->Minute = value;
}

/* Variants derived from the class : 'Device::TimeContext' */
EW_DEFINE_CLASS_VARIANTS( DeviceTimeContext )
EW_END_OF_CLASS_VARIANTS( DeviceTimeContext )

/* Virtual Method Table (VMT) for the class : 'Device::TimeContext' */
EW_DEFINE_CLASS( DeviceTimeContext, XObject, "Device::TimeContext" )
EW_END_OF_CLASS( DeviceTimeContext )

/* Initializer for the class 'Device::ErrorContext' */
void DeviceErrorContext__Init( DeviceErrorContext _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DeviceErrorContext );
}

/* Re-Initializer for the class 'Device::ErrorContext' */
void DeviceErrorContext__ReInit( DeviceErrorContext _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Device::ErrorContext' */
void DeviceErrorContext__Done( DeviceErrorContext _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( DeviceErrorContext );

  /* Release all used strings */
  EwReleaseString( &_this->ErrorMessage );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::ErrorContext' */
void DeviceErrorContext__Mark( DeviceErrorContext _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Device::ErrorContext.OnSetErrorMessage()' */
void DeviceErrorContext_OnSetErrorMessage( DeviceErrorContext _this, XString value )
{
  if ( !EwCompString( _this->ErrorMessage, value ))
    return;

  EwRetainString( &_this->ErrorMessage, value );
}

/* Variants derived from the class : 'Device::ErrorContext' */
EW_DEFINE_CLASS_VARIANTS( DeviceErrorContext )
EW_END_OF_CLASS_VARIANTS( DeviceErrorContext )

/* Virtual Method Table (VMT) for the class : 'Device::ErrorContext' */
EW_DEFINE_CLASS( DeviceErrorContext, XObject, "Device::ErrorContext" )
EW_END_OF_CLASS( DeviceErrorContext )

/* Embedded Wizard */
