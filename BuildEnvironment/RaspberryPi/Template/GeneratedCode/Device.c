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
#include "_DeviceRemainingTimeContext.h"
#include "_DeviceSampleCollectedContext.h"
#include "_DeviceTimeContext.h"
#include "Device.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000038C, /* ratio 47.14 % */
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
  0x3C6746B1, 0xC170BABD, 0x1DB71DD9, 0xD5CDCB5C, 0x01FA569C, 0xBD5B17A0, 0x109BF541,
  0x00013000, 0x81CD6D14, 0x213B7394, 0xBD68DC57, 0x001AB01D, 0xA1F875A8, 0x2839A416,
  0x51646B52, 0x30859168, 0x4F56D861, 0x4166921B, 0xC4296B54, 0x022A46E2, 0x1A8BA370,
  0x47A1C512, 0x5536FD92, 0x24CD3346, 0xE5304F51, 0x2F85E3B8, 0x8FC005A6, 0x55105106,
  0x584DEC6B, 0x362D9321, 0x7F836319, 0x001F81E1, 0xA6243441, 0x942A064E, 0x791E7225,
  0x00001014, 0x00000000
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
static const XStringRes _Const0011 = { _StringsDefault0, 0x0151 };
static const XStringRes _Const0012 = { _StringsDefault0, 0x0158 };
static const XStringRes _Const0013 = { _StringsDefault0, 0x015F };
static const XStringRes _Const0014 = { _StringsDefault0, 0x0172 };
static const XStringRes _Const0015 = { _StringsDefault0, 0x0188 };
static const XStringRes _Const0016 = { _StringsDefault0, 0x01A0 };
static const XColor _Const0017 = { 0xF3, 0x89, 0x00, 0xFF };
static const XColor _Const0018 = { 0x32, 0xCE, 0x00, 0xFF };
static const XColor _Const0019 = { 0x1E, 0x60, 0x33, 0xFF };
static const XColor _Const001A = { 0x00, 0x00, 0xFF, 0xFF };
static const XColor _Const001B = { 0x00, 0xFF, 0xFF, 0xFF };
static const XColor _Const001C = { 0xFF, 0x00, 0xFF, 0xFF };
static const XColor _Const001D = { 0xFF, 0x00, 0x00, 0xFF };
static const XStringRes _Const001E = { _StringsDefault0, 0x01B4 };

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

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DeviceDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->SampleVolume = 6;
  _this->Temperature = 0.000000f;
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

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Mark( DeviceDeviceClass _this )
{
  EwMarkObject( &_this->SampleCollectedEvent );
  EwMarkObject( &_this->RemainingTimeEvent );
  EwMarkObject( &_this->TimeEvent );

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
  CoreSystemEvent_Trigger( &_this->SampleCollectedEvent, ((XObject)context ), 0 
  );
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

/* 'C' function for method : 'Device::DeviceClass.SetBLPosition()' */
void DeviceDeviceClass_SetBLPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0010 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const0011 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const0012 )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetTRPosition()' */
void DeviceDeviceClass_SetTRPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0013 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const0011 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const0012 )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetWastePosition()' */
void DeviceDeviceClass_SetWastePosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0014 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const0011 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const0012 )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetCurrentPosition()' */
void DeviceDeviceClass_SetCurrentPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0015 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const0011 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const0012 )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetTopPosition()' */
void DeviceDeviceClass_SetTopPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0016 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const0011 )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const0012 )), 
    EwNewStringInt( aZ, 0, 10 )));
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
      return _Const0017;

    case 1 :
      return _Const0018;

    case 2 :
      return _Const0019;

    case 3 :
      return _Const001A;

    case 4 :
      return _Const001B;

    case 5 :
      return _Const001C;

    default : 
      return _Const001D;
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

  EwTrace( "%s", EwLoadString( &_Const001E ));
  BSCShutdown();
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

/* Embedded Wizard */
