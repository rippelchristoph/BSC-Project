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
  0x00000322, /* ratio 49.38 % */
  0xB8002F00, 0x00000452, 0xB8010718, 0x21708848, 0x410987C2, 0x63A00430, 0x06884562,
  0x082C0C2B, 0x3A8009C0, 0x1000DA00, 0x000CA003, 0x009E0039, 0x08600330, 0x01273480,
  0x12F8F98C, 0x73001D00, 0xB0041A28, 0x8F41A360, 0x2C0CEF26, 0xD14D8009, 0x027C1E9D,
  0x40136298, 0x99379898, 0xE709153E, 0x00374C28, 0xD89000CE, 0x24802B62, 0x34DEB000,
  0xD38ED289, 0x1A2B46A3, 0xA254A09C, 0x6728984B, 0xD3798482, 0x24914823, 0x9834EAC9,
  0x82C1A094, 0x56040052, 0xC4A2B819, 0x84DF312B, 0x6DF5EACD, 0xEB35B94C, 0x144BC4D2,
  0x4A0D41A5, 0xB94E0B01, 0x9450F0D9, 0x956AB18A, 0x656C5608, 0x1A9F6600, 0x83106A35,
  0x0121A952, 0xD26A3554, 0x44D5E2A5, 0x40058E67, 0x89576BC6, 0x3002F658, 0x5AB834A0,
  0x02DA0A00, 0xA45352A0, 0x321FE3C9, 0xD9DC1E6F, 0x8BD0622B, 0x19ACB747, 0xAF5D2697,
  0x8DE76376, 0xEBC43069, 0xC2AB8AA6, 0xBB356AA6, 0x65DCC6EF, 0x9E1A6F7A, 0x6CE3DEB2,
  0x021002FD, 0x28000980, 0xD3962800, 0x14C1DF4D, 0x09C04E9A, 0x59728077, 0x169CA828,
  0x11C7E5C2, 0x28018173, 0x06055360, 0xC66798B8, 0x528164ED, 0x20353D88, 0x84E21651,
  0x720789E1, 0xFA6B9C28, 0x4A1204B9, 0x5A649928, 0x98662389, 0x1A1D57A2, 0xCC528144,
  0x869FF7A5, 0x21B8A235, 0xC045C28E, 0xE9EC5123, 0x2F4DD4F5, 0x4ED9E512, 0x0004053B,
  0x00000000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x001A };
static const XStringRes _Const0002 = { _StringsDefault0, 0x002F };
static const XStringRes _Const0003 = { _StringsDefault0, 0x003A };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0058 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x006B };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0089 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x00A3 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x00BB };
static const XStringRes _Const0009 = { _StringsDefault0, 0x00C1 };
static const XStringRes _Const000A = { _StringsDefault0, 0x00CB };
static const XStringRes _Const000B = { _StringsDefault0, 0x00EA };
static const XStringRes _Const000C = { _StringsDefault0, 0x010B };
static const XStringRes _Const000D = { _StringsDefault0, 0x011E };
static const XStringRes _Const000E = { _StringsDefault0, 0x0125 };
static const XStringRes _Const000F = { _StringsDefault0, 0x012C };
static const XStringRes _Const0010 = { _StringsDefault0, 0x013F };
static const XStringRes _Const0011 = { _StringsDefault0, 0x0155 };
static const XStringRes _Const0012 = { _StringsDefault0, 0x016D };
static const XStringRes _Const0013 = { _StringsDefault0, 0x0181 };
static const XColor _Const0014 = { 0xF3, 0x89, 0x00, 0xFF };
static const XColor _Const0015 = { 0x32, 0xCE, 0x00, 0xFF };
static const XColor _Const0016 = { 0x07, 0x36, 0xA3, 0xFF };
static const XColor _Const0017 = { 0x00, 0x00, 0xFF, 0xFF };
static const XColor _Const0018 = { 0x00, 0xFF, 0xFF, 0xFF };
static const XColor _Const0019 = { 0xFF, 0x00, 0xFF, 0xFF };
static const XColor _Const001A = { 0xFF, 0x00, 0x00, 0xFF };

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
  EwRetainString( &_this->Time, EwLoadString( &_Const0000 ));
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

  /* Release all used strings */
  EwReleaseString( &_this->Time );

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
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0001 ), EwNewStringInt( _this->NuOfCircuits, 
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
  EwTrace( "%s", EwLoadString( &_Const0002 ));
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

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0003 
    ), EwNewStringInt( aIntervall, 0, 10 )), EwLoadString( &_Const0004 )), EwNewStringInt( 
    aCircuitNumber, 0, 10 )));

  if (( aCircuitNumber < 0 ) || ( aCircuitNumber > 5 ))
  {
    EwTrace( "%s", EwLoadString( &_Const0005 ));
    return;
  }

  if ( aIntervall <= 0 )
  {
    EwTrace( "%s", EwLoadString( &_Const0006 ));
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
    EwConcatString( EwConcatString( EwConcatString( EwLoadString( &_Const0007 ), 
    EwNewStringInt( aWellIndex.X, 0, 10 )), EwLoadString( &_Const0008 )), EwNewStringInt( 
    aWellIndex.Y, 0, 10 )), EwLoadString( &_Const0004 )), EwNewStringInt( aCircuitNumber, 
    0, 10 )), EwLoadString( &_Const0009 )), aTime ));
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
    EwTrace( "%s", EwLoadString( &_Const000A ));
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

  EwTrace( "%s", EwConcatString( EwLoadString( &_Const000B ), EwNewStringInt( aCircuitNumber, 
    0, 10 )));

  if (( aCircuitNumber < 0 ) || ( aCircuitNumber > 5 ))
  {
    EwTrace( "%s", EwLoadString( &_Const0005 ));
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
    EwConcatString( EwLoadString( &_Const000C ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000D )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000E )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetTRPosition()' */
void DeviceDeviceClass_SetTRPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const000F ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000D )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000E )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetWastePosition()' */
void DeviceDeviceClass_SetWastePosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0010 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000D )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000E )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetCurrentPosition()' */
void DeviceDeviceClass_SetCurrentPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0011 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000D )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000E )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.SetTopPosition()' */
void DeviceDeviceClass_SetTopPosition( DeviceDeviceClass _this, XInt32 aX, XInt32 
  aY, XInt32 aZ )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  EwTrace( "%s", EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
    EwConcatString( EwLoadString( &_Const0012 ), EwNewStringInt( aX, 0, 10 )), EwLoadString( 
    &_Const000D )), EwNewStringInt( aY, 0, 10 )), EwLoadString( &_Const000E )), 
    EwNewStringInt( aZ, 0, 10 )));
}

/* 'C' function for method : 'Device::DeviceClass.OnSetTemperature()' */
void DeviceDeviceClass_OnSetTemperature( DeviceDeviceClass _this, XFloat value )
{
  if ( _this->Temperature == value )
    return;

  _this->Temperature = value;
  EwTrace( "%s", EwConcatString( EwLoadString( &_Const0013 ), EwNewStringFloat( 
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
    EwTrace( "%s", EwConcatString( EwLoadString( &_Const0013 ), EwNewStringFloat( 
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
      return _Const0014;

    case 1 :
      return _Const0015;

    case 2 :
      return _Const0016;

    case 3 :
      return _Const0017;

    case 4 :
      return _Const0018;

    case 5 :
      return _Const0019;

    default : 
      return _Const001A;
  }
}

/* 'C' function for method : 'Device::DeviceClass.OnSetTime()' */
void DeviceDeviceClass_OnSetTime( DeviceDeviceClass _this, XString value )
{
  if ( !EwCompString( _this->Time, value ))
    return;

  EwRetainString( &_this->Time, value );
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
  EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetTime, DeviceDeviceClass_OnSetTime 
    ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void DeviceDeviceClass_UpdateTime( DeviceDeviceClass _this, XString aNewValue )
{
  if ( EwCompString( aNewValue, _this->Time ) != 0 )
  {
    EwRetainString( &_this->Time, aNewValue );
    EwNotifyRefObservers( EwNewRef( _this, DeviceDeviceClass_OnGetTime, DeviceDeviceClass_OnSetTime 
      ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Device::DeviceClass.UpdateTime()' */
void DeviceDeviceClass__UpdateTime( void* _this, XString aNewValue )
{
  DeviceDeviceClass_UpdateTime((DeviceDeviceClass)_this, aNewValue );
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

/* Default onget method for the property 'Time' */
XString DeviceDeviceClass_OnGetTime( DeviceDeviceClass _this )
{
  return _this->Time;
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
