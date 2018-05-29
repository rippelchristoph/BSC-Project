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
  0x000003F2, /* ratio 47.92 % */
  0xB8002300, 0x80000452, 0x00C20029, 0x0E000368, 0xCA003600, 0xE002B000, 0x750043CD,
  0xA0044616, 0x0A0020C3, 0x70020B03, 0xC0CEF1B2, 0x7621108D, 0x49E00104, 0x006E8DC3,
  0xF31001A4, 0x0490478C, 0x6894920D, 0x8BCA0AF2, 0xB90C012B, 0x4C8E7168, 0x1A6C009A,
  0x20D210F4, 0x01093A42, 0x150001C8, 0x0E8642A1, 0x09ACCE21, 0xAE8B6580, 0x85209200,
  0x9DAA712A, 0x7A3929A8, 0xEC14D09C, 0xC75399D0, 0x950A3C60, 0x62864664, 0xB8ED4E36,
  0x29416DB4, 0x04BB0000, 0x54E7D41C, 0xBE595C8B, 0x6E400A95, 0xE77599C6, 0x51EBD5E2,
  0x98C0DF83, 0x6965AB07, 0x9B5222B8, 0x24C6C52C, 0xC2ACF8CB, 0xB43106B4, 0xEB31AAB5,
  0xD316A1C6, 0x9A4B944A, 0x2CAFD80C, 0x6835A8B1, 0xDD966DA0, 0x65B41400, 0x4328E549,
  0x14017C89, 0xE3C2EB68, 0x0D609CF2, 0x9C99173E, 0x99BFC8B3, 0x8C661731, 0xA3DBA938,
  0x0642E771, 0xDE63576B, 0x5C3FC0B2, 0x3B582C06, 0x41DDCED8, 0x50C89663, 0x5CA3D6E1,
  0x0E3CCF8B, 0xAA6AC43C, 0x1AC4399E, 0x27DD1756, 0x81426E1F, 0x007898D7, 0x7A193796,
  0x1D07A9C9, 0xF611ED76, 0x7D9F771E, 0x8F82D707, 0x00192835, 0x9C9631E7, 0xE1416D05,
  0x8D505199, 0x5E775337, 0x001A2581, 0x078449B6, 0x070C0770, 0xD5C96E80, 0xBF4B1D08,
  0x16A368E5, 0x2135B1C0, 0x178E3300, 0xCDAE4BC4, 0x29429724, 0x4193167A, 0x9507FC0F,
  0x05415342, 0x1C66521B, 0x0E0014A5, 0x510465B4, 0x90849800, 0x64491243, 0xB410725B,
  0x284293E5, 0x6C51446E, 0x51E7221F, 0xB4EDD097, 0x49106D91, 0x0E544474, 0x48A74725,
  0x8480020E, 0x60027967, 0xB6738F54, 0x70A0E815, 0x8E14644A, 0x2437091E, 0xE7B92D7B,
  0x01014791, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x0014 };
static const XStringRes _Const0002 = { _StringsDefault0, 0x0028 };
static const XStringRes _Const0003 = { _StringsDefault0, 0x003C };
static const XStringRes _Const0004 = { _StringsDefault0, 0x005A };
static const XStringRes _Const0005 = { _StringsDefault0, 0x006D };
static const XStringRes _Const0006 = { _StringsDefault0, 0x008B };
static const XStringRes _Const0007 = { _StringsDefault0, 0x00A5 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x00BD };
static const XStringRes _Const0009 = { _StringsDefault0, 0x00C3 };
static const XStringRes _Const000A = { _StringsDefault0, 0x00CD };
static const XStringRes _Const000B = { _StringsDefault0, 0x00D2 };
static const XStringRes _Const000C = { _StringsDefault0, 0x00D7 };
static const XStringRes _Const000D = { _StringsDefault0, 0x00DC };
static const XStringRes _Const000E = { _StringsDefault0, 0x00FC };
static const XStringRes _Const000F = { _StringsDefault0, 0x011B };
static const XStringRes _Const0010 = { _StringsDefault0, 0x013C };
static const XStringRes _Const0011 = { _StringsDefault0, 0x015B };
static const XStringRes _Const0012 = { _StringsDefault0, 0x0171 };
static const XStringRes _Const0013 = { _StringsDefault0, 0x0178 };
static const XStringRes _Const0014 = { _StringsDefault0, 0x017F };
static const XColor _Const0015 = { 0x00, 0x00, 0xFF, 0xFF };
static const XColor _Const0016 = { 0x00, 0xFF, 0xFF, 0xFF };
static const XColor _Const0017 = { 0xFF, 0x00, 0xFF, 0xFF };
static const XColor _Const0018 = { 0x1E, 0x60, 0x33, 0xFF };
static const XColor _Const0019 = { 0x32, 0xCE, 0x00, 0xFF };
static const XColor _Const001A = { 0xF3, 0x89, 0x00, 0xFF };
static const XColor _Const001B = { 0xFF, 0x00, 0x00, 0xFF };
static const XStringRes _Const001C = { _StringsDefault0, 0x0186 };
static const XStringRes _Const001D = { _StringsDefault0, 0x0199 };
static const XStringRes _Const001E = { _StringsDefault0, 0x01A8 };
static const XStringRes _Const001F = { _StringsDefault0, 0x01B6 };
static const XStringRes _Const0020 = { _StringsDefault0, 0x01C6 };
static const XStringRes _Const0021 = { _StringsDefault0, 0x01D4 };
static const XStringRes _Const0022 = { _StringsDefault0, 0x01E2 };
static const XStringRes _Const0023 = { _StringsDefault0, 0x01F0 };

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

  _this->NewWell = value;
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNewWell, DeviceDeviceClass_OnSetNewWell 
    ), 0 );

  if ( _this->NewWell == 1 )
  {
    BSCNewWellStart();
  }

  if ( _this->NewWell == 0 )
  {
    BSCNewWellStop();
  }

  if ( _this->NewWell == 1 )
    EwTrace( "%s", EwLoadString( &_Const0001 ));

  if ( _this->NewWell == 0 )
    EwTrace( "%s", EwLoadString( &_Const0002 ));
}

/* intervall in seconds; circuitNumber from 1 to 6 */
void DeviceDeviceClass_StartSampling( DeviceDeviceClass _this, XInt32 aIntervall, 
  XInt32 aCircuitNumber )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0003 
    ), EwNewStringInt( aIntervall, 0, 10 )), EwLoadString( &_Const0004 )), EwNewStringInt( 
    aCircuitNumber, 0, 10 )));

  if (( aCircuitNumber < 0 ) || ( aCircuitNumber > 5 ))
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const0005 ), EwNewStringInt( 
      aCircuitNumber, 0, 10 )));
    return;
  }

  if ( aIntervall < 0 )
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const0006 ), EwNewStringInt( 
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
    EwConcatString( EwLoadString( &_Const0007 ), EwNewStringInt( aXPosition, 0, 
    10 )), EwLoadString( &_Const0008 )), EwNewStringInt( aYPosition, 0, 10 )), EwLoadString( 
    &_Const0004 )), EwNewStringInt( aCircuitNumber, 0, 10 )), EwLoadString( &_Const0009 
    )), EwNewStringInt( aDay, 0, 10 )), EwLoadString( &_Const000A )), EwNewStringInt( 
    aMonth, 0, 10 )), EwLoadString( &_Const000A )), EwNewStringInt( aYear, 0, 10 
    )), EwLoadString( &_Const000B )), EwNewStringInt( aHour, 0, 10 )), EwLoadString( 
    &_Const000C )), EwNewStringInt( aMinute, 0, 10 )));
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
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const000D ), EwNewStringInt( 
      aCircuitNumber, 0, 10 )));
    return;
  }

  if ( aRemainingTime < 0 )
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const000E ), EwNewStringInt( 
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

  EwTrace( "%s", EwConcatString( EwLoadString( &_Const000F ), EwNewStringInt( aCircuitNumber, 
    0, 10 )));

  if (( aCircuitNumber < 0 ) || ( aCircuitNumber > 5 ))
  {
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const0010 ), EwNewStringInt( 
      aCircuitNumber, 0, 10 )));
    return;
  }

  BSCRemoveOrder(aCircuitNumber);
}

/* 'C' function for method : 'Device::DeviceClass.SetPosition()' */
void DeviceDeviceClass_SetPosition( DeviceDeviceClass _this, XInt32 aIndex, XInt32 
  aX, XInt32 aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0011 ), 
    EwNewStringInt( aIndex, 0, 10 )), EwLoadString( &_Const0012 )), EwNewStringInt( 
    aX, 0, 10 )), EwLoadString( &_Const0013 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( 
    &_Const0014 )), EwNewStringInt( aZ, 0, 10 )));
  BSCSetPosition(aIndex, aX, aY, aZ);
}

/* 'C' function for method : 'Device::DeviceClass.SetCurrentPosition()' */
void DeviceDeviceClass_SetCurrentPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

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
