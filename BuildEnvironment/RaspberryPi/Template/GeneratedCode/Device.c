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

#include "ewlocale.h"
#include "_CoreSystemEvent.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceRemainingTimeContext.h"
#include "_DeviceSampleCollectedContext.h"
#include "Device.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x000002F4, /* ratio 50.26 % */
  0xB8002B00, 0x00000452, 0x00EA0027, 0x0C400368, 0xE4003280, 0xC0027800, 0x0021800C,
  0x300444D2, 0x00466126, 0x01CC0074, 0x8020C3A0, 0x1E0B0305, 0xCEE0087C, 0x006C9640,
  0x21E834C4, 0x2029C1A5, 0x18D98401, 0x864EE712, 0x747E6470, 0x000CE003, 0x1C5A0010,
  0x00049005, 0x251090D1, 0x3429D1DA, 0x13834966, 0xA8C52E6C, 0x85476251, 0x5422431A,
  0x5461D0C8, 0x126B2692, 0x0A505834, 0xDD14B700, 0x657A4496, 0x45A71BE3, 0xEAF47EB7,
  0xB24AEC31, 0x344A590D, 0xDB6B41A8, 0xCF1113B7, 0x2EF1297D, 0x9B48A351, 0x600C153E,
  0x3398CEEA, 0xEAD06001, 0xA0802173, 0xBC622131, 0x4765998B, 0x2CC800A8, 0x0B148A55,
  0xB406835A, 0x400ABEBA, 0x54A45681, 0x4884323E, 0xC46183FB, 0xAD2F1570, 0xE42F18DB,
  0xF6397B8B, 0xAC7489CD, 0x0D1BB367, 0xF39CE086, 0x40CED06E, 0xBC7C6A85, 0xE5576F5A,
  0x2F3A7360, 0xD676994B, 0x008400B5, 0x0A000260, 0x4323BB80, 0x18E8D5FA, 0x00D7EB6D,
  0x9006DC0E, 0xF47EBF05, 0xDF816948, 0xE6E52A79, 0xE5F07B96, 0x787BDF34, 0x499B362D,
  0xD7556816, 0x84B1F14E, 0x660A48A0, 0xF8839F58, 0x461E866D, 0x1124490A, 0x585D9344,
  0x2E1B82E1, 0x1441A0F5, 0x759B9568, 0xA27831ED, 0x88AA0D86, 0xB22E045F, 0x3B59DD94,
  0x4B221485, 0x5264998B, 0x00000040, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x0018 };
static const XStringRes _Const0002 = { _StringsDefault0, 0x0023 };
static const XStringRes _Const0003 = { _StringsDefault0, 0x0041 };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0054 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0072 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x008C };
static const XStringRes _Const0007 = { _StringsDefault0, 0x00A4 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x00AA };
static const XStringRes _Const0009 = { _StringsDefault0, 0x00B4 };
static const XStringRes _Const000A = { _StringsDefault0, 0x00D3 };
static const XStringRes _Const000B = { _StringsDefault0, 0x00F4 };
static const XStringRes _Const000C = { _StringsDefault0, 0x0107 };
static const XStringRes _Const000D = { _StringsDefault0, 0x010E };
static const XStringRes _Const000E = { _StringsDefault0, 0x0115 };
static const XStringRes _Const000F = { _StringsDefault0, 0x0128 };
static const XStringRes _Const0010 = { _StringsDefault0, 0x013E };
static const XStringRes _Const0011 = { _StringsDefault0, 0x0156 };
static const XStringRes _Const0012 = { _StringsDefault0, 0x016A };
static const XColor _Const0013 = { 0xF3, 0x89, 0x00, 0xFF };
static const XColor _Const0014 = { 0x32, 0xCE, 0x00, 0xFF };
static const XColor _Const0015 = { 0x07, 0x36, 0xA3, 0xFF };
static const XColor _Const0016 = { 0x00, 0x00, 0xFF, 0xFF };
static const XColor _Const0017 = { 0x00, 0xFF, 0xFF, 0xFF };
static const XColor _Const0018 = { 0xFF, 0x00, 0xFF, 0xFF };
static const XColor _Const0019 = { 0xFF, 0x00, 0x00, 0xFF };

/* User defined inline code: 'Device::I2CHeader' */
#include <unistd.h>				//Needed for I2C port
#include <fcntl.h>				//Needed for I2C port
#include <sys/ioctl.h>			//Needed for I2C port
#include <linux/i2c-dev.h>		//Needed for I2C port
#include <stdio.h>
#include <time.h>

/* Initializer for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Init( DeviceDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSystemEvent__Init( &_this->SampleCollectedEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->RemainingTimeEvent, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DeviceDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->NuOfCircuits = 6;
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
}

/* Finalizer method for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Done( DeviceDeviceClass _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( DeviceDeviceClass );

  /* Finalize all embedded objects */
  CoreSystemEvent__Done( &_this->SampleCollectedEvent );
  CoreSystemEvent__Done( &_this->RemainingTimeEvent );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::DeviceClass' */
void DeviceDeviceClass__Mark( DeviceDeviceClass _this )
{
  EwMarkObject( &_this->SampleCollectedEvent );
  EwMarkObject( &_this->RemainingTimeEvent );

  /* Give the super class a chance to mark its objects and references */
  TemplatesDeviceClass__Mark( &_this->_Super );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetNuOfCircuits()' */
void DeviceDeviceClass_OnSetNuOfCircuits( DeviceDeviceClass _this, XInt32 value )
{
  if ( _this->NuOfCircuits == value )
    return;

  _this->NuOfCircuits = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0000 ), EwNewStringInt( _this->NuOfCircuits, 
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
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNuOfCircuits, DeviceDeviceClass_OnSetNuOfCircuits 
    ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateNuOfCircuits( DeviceDeviceClass _this, XInt32 aNewValue )
{
  if ( aNewValue != _this->NuOfCircuits )
  {
    _this->NuOfCircuits = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNuOfCircuits, 
      DeviceDeviceClass_OnSetNuOfCircuits ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateNuOfCircuits()' */
void DeviceDeviceClass__UpdateNuOfCircuits( void* _this, XInt32 aNewValue )
{
  DeviceDeviceClass_UpdateNuOfCircuits((DeviceDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Device::DeviceClass.OnSetNewWell()' */
void DeviceDeviceClass_OnSetNewWell( DeviceDeviceClass _this, XBool value )
{
  if ( _this->NewWell == value )
    return;

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
  EwTrace( "%s", EwLoadString( &_Const0001 ));
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNewWell, DeviceDeviceClass_OnSetNewWell 
    ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateNewWell( DeviceDeviceClass _this, XBool aNewValue )
{
  if ( aNewValue != _this->NewWell )
  {
    EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetNewWell, DeviceDeviceClass_OnSetNewWell 
      ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateNewWell()' */
void DeviceDeviceClass__UpdateNewWell( void* _this, XBool aNewValue )
{
  DeviceDeviceClass_UpdateNewWell((DeviceDeviceClass)_this, aNewValue );
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
    EwTrace( "%s", EwLoadString( &_Const0004 ));
    return;
  }

  if ( aIntervall <= 0 )
  {
    EwTrace( "%s", EwLoadString( &_Const0005 ));
    return;
  }
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void DeviceDeviceClass_onSampleCollected( DeviceDeviceClass _this, XPoint aWellIndex, 
  XInt32 aCircuitNumber, XString aTime )
{
  DeviceSampleCollectedContext context;

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0006 ), 
    EwNewStringInt( aWellIndex.X, 0, 10 )), EwLoadString( &_Const0007 )), EwNewStringInt( 
    aWellIndex.Y, 0, 10 )), EwLoadString( &_Const0003 )), EwNewStringInt( aCircuitNumber, 
    0, 10 )), EwLoadString( &_Const0008 )), aTime ));
  context = EwNewObject( DeviceSampleCollectedContext, 0 );
  DeviceSampleCollectedContext_OnSetWellIndex( context, aWellIndex );
  DeviceSampleCollectedContext_OnSetCircuitNumber( context, aCircuitNumber );
  DeviceSampleCollectedContext_OnSetTime( context, aTime );
  CoreSystemEvent_Trigger( &_this->SampleCollectedEvent, ((XObject)context ), 0 
  );
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.onSampleCollected()' */
void DeviceDeviceClass__onSampleCollected( void* _this, XPoint aWellIndex, XInt32 
  aCircuitNumber, XString aTime )
{
  DeviceDeviceClass_onSampleCollected((DeviceDeviceClass)_this, aWellIndex, aCircuitNumber
  , aTime );
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
    EwTrace( "%s", EwLoadString( &_Const0009 ));
    return;
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

  EwTrace( "%s", EwConcatString( EwLoadString( &_Const000A ), EwNewStringInt( aCircuitNumber, 
    0, 10 )));

  if (( aCircuitNumber < 0 ) || ( aCircuitNumber > 5 ))
  {
    EwTrace( "%s", EwLoadString( &_Const0004 ));
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
    EwConcatString( EwLoadString( &_Const000B ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000C )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000D )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetTRPosition()' */
void DeviceDeviceClass_SetTRPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const000E ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000C )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000D )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetWastePosition()' */
void DeviceDeviceClass_SetWastePosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const000F ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000C )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000D )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetCurrentPosition()' */
void DeviceDeviceClass_SetCurrentPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0010 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000C )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000D )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetTopPosition()' */
void DeviceDeviceClass_SetTopPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0011 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000C )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000D )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.OnSetTemperature()' */
void DeviceDeviceClass_OnSetTemperature( DeviceDeviceClass _this, XFloat value )
{
  if ( _this->Temperature == value )
    return;

  _this->Temperature = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0012 ), EwNewStringFloat( 
    _this->Temperature, 0, 6 )));
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
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetTemperature, DeviceDeviceClass_OnSetTemperature 
    ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateTemperature( DeviceDeviceClass _this, XFloat aNewArgument )
{
  if ( aNewArgument != _this->Temperature )
  {
    _this->Temperature = aNewArgument;
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const0012 ), EwNewStringFloat( 
      _this->Temperature, 0, 6 )));
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
      return _Const0013;

    case 1 :
      return _Const0014;

    case 2 :
      return _Const0015;

    case 3 :
      return _Const0016;

    case 4 :
      return _Const0017;

    case 5 :
      return _Const0018;

    default : 
      return _Const0019;
  }
}

/* Default onget method for the property 'NuOfCircuits' */
XInt32 DeviceDeviceClass_OnGetNuOfCircuits( DeviceDeviceClass _this )
{
  return _this->NuOfCircuits;
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

  /* Release all used strings */
  EwReleaseString( &_this->Time );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Device::SampleCollectedContext' */
void DeviceSampleCollectedContext__Mark( DeviceSampleCollectedContext _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetWellIndex()' */
void DeviceSampleCollectedContext_OnSetWellIndex( DeviceSampleCollectedContext _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WellIndex, value ))
    return;

  _this->WellIndex = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetCircuitNumber()' */
void DeviceSampleCollectedContext_OnSetCircuitNumber( DeviceSampleCollectedContext _this, 
  XInt32 value )
{
  if ( _this->CircuitNumber == value )
    return;

  _this->CircuitNumber = value;
}

/* 'C' function for method : 'Device::SampleCollectedContext.OnSetTime()' */
void DeviceSampleCollectedContext_OnSetTime( DeviceSampleCollectedContext _this, 
  XString value )
{
  if ( !EwCompString( _this->Time, value ))
    return;

  EwRetainString( &_this->Time, value );
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

/* Embedded Wizard */
