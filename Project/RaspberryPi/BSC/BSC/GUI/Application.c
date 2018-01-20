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
#include "_ApplicationApplication.h"
#include "_ApplicationClock.h"
#include "_ApplicationConfig.h"
#include "_ApplicationConfigPosition.h"
#include "_ApplicationControllMenu.h"
#include "_ApplicationMainMenu.h"
#include "_ApplicationNumKeyboard.h"
#include "_ApplicationSampleController.h"
#include "_ApplicationTemperature.h"
#include "_ApplicationTextEditor.h"
#include "_ApplicationWell.h"
#include "_ApplicationWellLabel.h"
#include "_ApplicationWellPart.h"
#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreOutline.h"
#include "_CorePropertyObserver.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreSystemEventHandler.h"
#include "_CoreTime.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_DeviceDeviceClass.h"
#include "_DeviceRemainingTimeContext.h"
#include "_DeviceSampleCollectedContext.h"
#include "_EffectsBoolEffect.h"
#include "_FlatActionButton.h"
#include "_FlatHorzBar.h"
#include "_FlatHorzSlider.h"
#include "_FlatIndicator.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpGroup.h"
#include "_ViewsWarpImage.h"
#include "Application.h"
#include "Core.h"
#include "Device.h"
#include "Flat.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000456, /* ratio 48.29 % */
  0xB8002900, 0x80000452, 0x00720018, 0xC6000170, 0x640085C1, 0x03887C34, 0x34878800,
  0x3000E800, 0x83454003, 0x441A0902, 0x43A190A8, 0x9E250C84, 0xA31168F4, 0x3B190046,
  0xB0302C1A, 0x3599C3E0, 0x29C44A0D, 0x0041A392, 0xE4667B34, 0xCFC6B369, 0x1C6D36A0,
  0xC6E009CD, 0x011F9ED2, 0xD0EA605C, 0x5789C9A1, 0xA8BC4EAB, 0x89D76375, 0x641A890E,
  0xD965B628, 0x3013068D, 0x0E80029D, 0xE4003080, 0x6089FDB4, 0x0037DCED, 0xC034FCE0,
  0x00586114, 0x01527B6A, 0x9E000650, 0x32E80AB9, 0xB0F85C1D, 0xCB89B2DB, 0x14CBD896,
  0x4F2F0014, 0x9C86626D, 0xB2C2A0D9, 0x0C1A917F, 0x44A7B8A2, 0x0C00B0A3, 0xF533DCA1,
  0x7B7C836A, 0xE4B0013E, 0x47A613A7, 0xA3100308, 0xB64B4DDB, 0x245F7469, 0xE1782003,
  0xEB7DA48B, 0x0D000B79, 0x892D3600, 0x717B9617, 0x76969D79, 0xD3BDCB74, 0x0074801B,
  0xBEFBBFBE, 0xE16E5B58, 0x039E73E0, 0xBAE00720, 0x83BAE119, 0x0280078F, 0xCEE61680,
  0x8ECC5FA1, 0x8BC23E77, 0x92D7A1BC, 0x04FC2952, 0xE8425305, 0x67615DC6, 0x7A517774,
  0x20E745C6, 0xD18D6C00, 0x5D707A9C, 0x0F73A167, 0x45D78002, 0x21B5E1CE, 0x08482C00,
  0xCDC51B57, 0x1274D175, 0x001E4846, 0x1D085CFC, 0x18D5717F, 0x5D6E88DC, 0x17835BE7,
  0x85E376F9, 0x1DA8016E, 0xF5CA178C, 0x203F0018, 0x0D6EA0A8, 0x701F3616, 0x1BF789F0,
  0xA7422300, 0xC51785E1, 0xC38B1BC8, 0x40DC78A5, 0x1FA741BA, 0xF000D600, 0xE9BE7BDE,
  0x358F0008, 0x00238616, 0xA29881E9, 0xF9396E6F, 0x164A0F53, 0x139AE0B6, 0x94A5F942,
  0x63285517, 0x4962547B, 0x763596E4, 0x859822E9, 0x9952D989, 0xE8478267, 0x27412D8E,
  0xC06B001F, 0x35879D89, 0x419856FA, 0xA094F519, 0xE9F64C9E, 0x067684A5, 0xCC7E685A,
  0xA1E1C95D, 0x2A997643, 0x57A57098, 0x5EA34B67, 0xB7741EC8, 0x4FD3F5CA, 0x00000101,
  0x00000000
};

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault1[] =
{
  0x00000094, /* ratio 72.97 % */
  0xB8001100, 0x00000452, 0x00CA0027, 0x8E8003C0, 0x06110041, 0x24200416, 0x00348021,
  0x738000E6, 0x001B22D1, 0xB1500020, 0xC1A1D0C8, 0x620D1202, 0xA0928879, 0x532C2CC1,
  0x50F2D002, 0x0021CC81, 0x037000DE, 0x33C74CC0, 0x44C8170F, 0x40CEF0A8, 0x1A3E008F,
  0xC012EA14, 0x37398694, 0xB4920802, 0x0187C3EA, 0x00000001, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 800, 480 }};
static const XPoint _Const0001 = { 800, 0 };
static const XRect _Const0002 = {{ 49, 720 }, { 849, 1200 }};
static const XRect _Const0003 = {{ 889, 800 }, { 1689, 1280 }};
static const XRect _Const0004 = {{ 960, 1210 }, { 1760, 1690 }};
static const XColor _Const0005 = { 0x74, 0x76, 0x74, 0xFF };
static const XRect _Const0006 = {{ 70, 50 }, { 140, 120 }};
static const XRect _Const0007 = {{ 70, 120 }, { 140, 190 }};
static const XRect _Const0008 = {{ 70, 190 }, { 140, 260 }};
static const XRect _Const0009 = {{ 70, 260 }, { 140, 330 }};
static const XRect _Const000A = {{ 70, 330 }, { 140, 400 }};
static const XRect _Const000B = {{ 70, 400 }, { 140, 470 }};
static const XRect _Const000C = {{ 140, 50 }, { 210, 120 }};
static const XStringRes _Const000D = { _StringsDefault0, 0x0003 };
static const XRect _Const000E = {{ 140, 120 }, { 210, 190 }};
static const XRect _Const000F = {{ 140, 190 }, { 210, 260 }};
static const XRect _Const0010 = {{ 140, 260 }, { 210, 330 }};
static const XRect _Const0011 = {{ 140, 330 }, { 210, 400 }};
static const XRect _Const0012 = {{ 140, 400 }, { 210, 470 }};
static const XRect _Const0013 = {{ 210, 50 }, { 280, 120 }};
static const XStringRes _Const0014 = { _StringsDefault0, 0x0017 };
static const XRect _Const0015 = {{ 210, 120 }, { 280, 190 }};
static const XRect _Const0016 = {{ 210, 190 }, { 280, 260 }};
static const XRect _Const0017 = {{ 210, 260 }, { 280, 330 }};
static const XRect _Const0018 = {{ 210, 330 }, { 280, 400 }};
static const XRect _Const0019 = {{ 210, 400 }, { 280, 470 }};
static const XRect _Const001A = {{ 280, 50 }, { 350, 120 }};
static const XRect _Const001B = {{ 280, 120 }, { 350, 190 }};
static const XRect _Const001C = {{ 280, 190 }, { 350, 260 }};
static const XRect _Const001D = {{ 280, 260 }, { 350, 330 }};
static const XRect _Const001E = {{ 280, 330 }, { 350, 400 }};
static const XRect _Const001F = {{ 280, 400 }, { 350, 470 }};
static const XRect _Const0020 = {{ 350, 50 }, { 420, 120 }};
static const XRect _Const0021 = {{ 350, 120 }, { 420, 190 }};
static const XRect _Const0022 = {{ 350, 190 }, { 420, 260 }};
static const XRect _Const0023 = {{ 350, 260 }, { 420, 330 }};
static const XRect _Const0024 = {{ 350, 330 }, { 420, 400 }};
static const XRect _Const0025 = {{ 350, 400 }, { 420, 470 }};
static const XRect _Const0026 = {{ 420, 50 }, { 490, 120 }};
static const XRect _Const0027 = {{ 420, 120 }, { 490, 190 }};
static const XRect _Const0028 = {{ 420, 190 }, { 490, 260 }};
static const XRect _Const0029 = {{ 420, 260 }, { 490, 330 }};
static const XRect _Const002A = {{ 420, 330 }, { 490, 400 }};
static const XRect _Const002B = {{ 420, 400 }, { 490, 470 }};
static const XRect _Const002C = {{ 490, 50 }, { 560, 120 }};
static const XRect _Const002D = {{ 490, 120 }, { 560, 190 }};
static const XRect _Const002E = {{ 490, 190 }, { 560, 260 }};
static const XRect _Const002F = {{ 490, 260 }, { 560, 330 }};
static const XRect _Const0030 = {{ 490, 330 }, { 560, 400 }};
static const XRect _Const0031 = {{ 490, 400 }, { 560, 470 }};
static const XRect _Const0032 = {{ 560, 50 }, { 630, 120 }};
static const XRect _Const0033 = {{ 560, 120 }, { 630, 190 }};
static const XRect _Const0034 = {{ 560, 190 }, { 630, 260 }};
static const XRect _Const0035 = {{ 560, 260 }, { 630, 330 }};
static const XRect _Const0036 = {{ 560, 330 }, { 630, 400 }};
static const XRect _Const0037 = {{ 560, 400 }, { 630, 470 }};
static const XRect _Const0038 = {{ 670, 400 }, { 790, 470 }};
static const XPoint _Const0039 = { 700, 110 };
static const XPoint _Const003A = { 800, 110 };
static const XPoint _Const003B = { 800, 10 };
static const XPoint _Const003C = { 700, 10 };
static const XRect _Const003D = {{ 70, 10 }, { 140, 50 }};
static const XStringRes _Const003E = { _StringsDefault0, 0x002B };
static const XRect _Const003F = {{ 140, 10 }, { 210, 50 }};
static const XStringRes _Const0040 = { _StringsDefault0, 0x0030 };
static const XRect _Const0041 = {{ 210, 10 }, { 280, 50 }};
static const XStringRes _Const0042 = { _StringsDefault0, 0x0035 };
static const XRect _Const0043 = {{ 280, 10 }, { 350, 50 }};
static const XStringRes _Const0044 = { _StringsDefault0, 0x003A };
static const XRect _Const0045 = {{ 350, 10 }, { 420, 50 }};
static const XStringRes _Const0046 = { _StringsDefault0, 0x003F };
static const XRect _Const0047 = {{ 420, 10 }, { 490, 50 }};
static const XStringRes _Const0048 = { _StringsDefault0, 0x0044 };
static const XRect _Const0049 = {{ 490, 10 }, { 560, 50 }};
static const XStringRes _Const004A = { _StringsDefault0, 0x0049 };
static const XRect _Const004B = {{ 560, 10 }, { 630, 50 }};
static const XStringRes _Const004C = { _StringsDefault0, 0x004E };
static const XRect _Const004D = {{ 0, 60 }, { 70, 100 }};
static const XRect _Const004E = {{ 0, 130 }, { 70, 170 }};
static const XRect _Const004F = {{ 0, 200 }, { 70, 240 }};
static const XRect _Const0050 = {{ 0, 270 }, { 70, 310 }};
static const XRect _Const0051 = {{ 0, 340 }, { 70, 380 }};
static const XRect _Const0052 = {{ 0, 410 }, { 70, 450 }};
static const XRect _Const0053 = {{ 0, 0 }, { 70, 70 }};
static const XPoint _Const0054 = { 0, 70 };
static const XPoint _Const0055 = { 70, 70 };
static const XPoint _Const0056 = { 70, 0 };
static const XPoint _Const0057 = { 0, 0 };
static const XRect _Const0058 = {{ 0, 20 }, { 70, 50 }};
static const XColor _Const0059 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const005A = {{ 0, 0 }, { 120, 60 }};
static const XStringRes _Const005B = { _StringsDefault0, 0x0053 };
static const XStringRes _Const005C = { _StringsDefault0, 0x006A };
static const XStringRes _Const005D = { _StringsDefault0, 0x006F };
static const XStringRes _Const005E = { _StringsDefault0, 0x0074 };
static const XRect _Const005F = {{ 0, 0 }, { 440, 70 }};
static const XRect _Const0060 = {{ 1, 1 }, { 440, 69 }};
static const XColor _Const0061 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0062 = {{ 0, 16 }, { 30, 46 }};
static const XRect _Const0063 = {{ 100, 4 }, { 210, 29 }};
static const XStringRes _Const0064 = { _StringsDefault0, 0x0079 };
static const XRect _Const0065 = {{ 100, 40 }, { 210, 65 }};
static const XStringRes _Const0066 = { _StringsDefault0, 0x0082 };
static const XRect _Const0067 = {{ 220, 10 }, { 380, 60 }};
static const XRect _Const0068 = {{ 400, 20 }, { 430, 50 }};
static const XRect _Const0069 = {{ 30, 20 }, { 90, 60 }};
static const XStringRes _Const006A = { _StringsDefault0, 0x008A };
static const XPoint _Const006B = { 90, 45 };
static const XPoint _Const006C = { 30, 45 };
static const XRect _Const006D = {{ 0, 0 }, { 160, 130 }};
static const XRect _Const006E = {{ 0, 0 }, { 160, 120 }};
static const XPoint _Const006F = { 0, 120 };
static const XPoint _Const0070 = { 160, 120 };
static const XPoint _Const0071 = { 160, 0 };
static const XRect _Const0072 = {{ 2, 2 }, { 157, 117 }};
static const XStringRes _Const0073 = { _StringsDefault0, 0x0090 };
static const XPoint _Const0074 = { 50, 70 };
static const XPoint _Const0075 = { 50, 50 };
static const XStringRes _Const0076 = { _StringsDefault0, 0x0099 };
static const XPoint _Const0077 = { 20, 20 };
static const XPoint _Const0078 = { -10, -10 };
static const XColor _Const0079 = { 0xEE, 0xEE, 0xEE, 0xCC };
static const XStringRes _Const007A = { _StringsDefault0, 0x00A1 };
static const XStringRes _Const007B = { _StringsDefault0, 0x00A6 };
static const XStringRes _Const007C = { _StringsDefault0, 0x00AB };
static const XStringRes _Const007D = { _StringsDefault0, 0x00B1 };
static const XStringRes _Const007E = { _StringsDefault0, 0x00B6 };
static const XRect _Const007F = {{ 0, 0 }, { 170, 180 }};
static const XPoint _Const0080 = { 10, 170 };
static const XPoint _Const0081 = { 160, 170 };
static const XPoint _Const0082 = { 160, 10 };
static const XPoint _Const0083 = { 10, 10 };
static const XRect _Const0084 = {{ 10, 10 }, { 60, 50 }};
static const XColor _Const0085 = { 0x4C, 0x4C, 0x4A, 0xFF };
static const XRect _Const0086 = {{ 60, 10 }, { 110, 50 }};
static const XRect _Const0087 = {{ 110, 10 }, { 160, 50 }};
static const XRect _Const0088 = {{ 10, 50 }, { 60, 90 }};
static const XRect _Const0089 = {{ 60, 50 }, { 110, 90 }};
static const XRect _Const008A = {{ 110, 50 }, { 160, 90 }};
static const XRect _Const008B = {{ 10, 90 }, { 60, 130 }};
static const XRect _Const008C = {{ 60, 90 }, { 110, 130 }};
static const XRect _Const008D = {{ 110, 90 }, { 160, 130 }};
static const XStringRes _Const008E = { _StringsDefault0, 0x00BB };
static const XRect _Const008F = {{ 60, 130 }, { 110, 170 }};
static const XStringRes _Const0090 = { _StringsDefault0, 0x00C0 };
static const XRect _Const0091 = {{ 10, 130 }, { 60, 170 }};
static const XRect _Const0092 = {{ 110, 130 }, { 160, 170 }};
static const XRect _Const0093 = {{ 0, 0 }, { 70, 40 }};
static const XStringRes _Const0094 = { _StringsDefault0, 0x00C5 };
static const XRect _Const0095 = {{ 0, 0 }, { 130, 60 }};
static const XStringRes _Const0096 = { _StringsDefault0, 0x00CA };
static const XStringRes _Const0097 = { _StringsDefault0, 0x00D2 };
static const XRect _Const0098 = {{ 670, 440 }, { 790, 470 }};
static const XStringRes _Const0099 = { _StringsDefault0, 0x00D8 };
static const XRect _Const009A = {{ 330, 110 }, { 470, 170 }};
static const XRect _Const009B = {{ 610, 230 }, { 780, 410 }};
static const XRect _Const009C = {{ 60, 10 }, { 690, 120 }};
static const XStringRes _Const009D = { _StringsDefault0, 0x00DE };
static const XStringRes _Const009E = { _StringsDefault0, 0x012C };
static const XStringRes _Const009F = { _StringsDefault0, 0x017C };
static const XStringRes _Const00A0 = { _StringsDefault0, 0x01BB };
static const XStringRes _Const00A1 = { _StringsDefault0, 0x01F8 };
static const XStringRes _Const00A2 = { _StringsDefault1, 0x0003 };
static const XStringRes _Const00A3 = { _StringsDefault1, 0x000B };
static const XRect _Const00A4 = {{ 60, 170 }, { 780, 240 }};
static const XRect _Const00A5 = {{ 60, 240 }, { 780, 300 }};
static const XRect _Const00A6 = {{ 60, 300 }, { 780, 360 }};
static const XRect _Const00A7 = {{ 10, 180 }, { 50, 230 }};
static const XStringRes _Const00A8 = { _StringsDefault1, 0x001C };
static const XRect _Const00A9 = {{ 10, 240 }, { 50, 290 }};
static const XStringRes _Const00AA = { _StringsDefault1, 0x0021 };
static const XRect _Const00AB = {{ 10, 300 }, { 50, 350 }};
static const XStringRes _Const00AC = { _StringsDefault1, 0x0026 };
static const XRect _Const00AD = {{ 10, 50 }, { 450, 120 }};
static const XRect _Const00AE = {{ 10, 120 }, { 450, 190 }};
static const XRect _Const00AF = {{ 10, 190 }, { 450, 260 }};
static const XRect _Const00B0 = {{ 10, 260 }, { 450, 330 }};
static const XRect _Const00B1 = {{ 10, 330 }, { 450, 400 }};
static const XRect _Const00B2 = {{ 10, 400 }, { 450, 470 }};
static const XRect _Const00B3 = {{ 670, 410 }, { 790, 470 }};
static const XRect _Const00B4 = {{ 460, 290 }, { 660, 470 }};
static const XRect _Const00B5 = {{ 660, 330 }, { 800, 390 }};
static const XRect _Const00B6 = {{ 480, 140 }, { 600, 170 }};
static const XStringRes _Const00B7 = { _StringsDefault1, 0x002B };
static const XRect _Const00B8 = {{ 480, 180 }, { 600, 210 }};
static const XStringRes _Const00B9 = { _StringsDefault1, 0x0035 };
static const XRect _Const00BA = {{ 480, 220 }, { 600, 250 }};
static const XStringRes _Const00BB = { _StringsDefault1, 0x0040 };

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* User defined inline code: 'Application::I2CHeader' */
#include <unistd.h>				//Needed for I2C port
#include <fcntl.h>				//Needed for I2C port
#include <sys/ioctl.h>			//Needed for I2C port
#include <linux/i2c-dev.h>		//Needed for I2C port
#include <stdio.h>
#include <time.h>

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_XObject, 0 );
  ApplicationMainMenu__Init( &_this->MainMenu, &_this->_XObject, 0 );
  ApplicationWell__Init( &_this->WellObj, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0000 );
  CoreSlideTouchHandler_OnSetSnapLast( &_this->SlideTouchHandler, _Const0001 );
  _this->SlideTouchHandler.SlideHorz = 1;
  _this->SlideTouchHandler.SlideVert = 0;
  CoreRectView__OnSetBounds( &_this->Outline, _Const0000 );
  CoreOutline_OnSetFormation( &_this->Outline, CoreFormationLeftToRight );
  CoreRectView__OnSetBounds( &_this->MainMenu, _Const0002 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->MainMenu, 1 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->MainMenu, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->MainMenu, 1 );
  CoreRectView__OnSetBounds( &_this->WellObj, _Const0003 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->WellObj, 1 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->WellObj, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->WellObj, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MainMenu ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellObj ), 0 );
  CoreOutline_OnSetSlideHandler( &_this->Outline, &_this->SlideTouchHandler );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreOutline__ReInit( &_this->Outline );
  ApplicationMainMenu__ReInit( &_this->MainMenu );
  ApplicationWell__ReInit( &_this->WellObj );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* Finalize all embedded objects */
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreOutline__Done( &_this->Outline );
  ApplicationMainMenu__Done( &_this->MainMenu );
  ApplicationWell__Done( &_this->WellObj );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Application' */
void ApplicationApplication__Mark( ApplicationApplication _this )
{
  EwMarkObject( &_this->SlideTouchHandler );
  EwMarkObject( &_this->Outline );
  EwMarkObject( &_this->MainMenu );
  EwMarkObject( &_this->WellObj );

  /* Give the super class a chance to mark its objects and references */
  CoreRoot__Mark( &_this->_Super );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreRoot_Restack,
  CoreRoot_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::MainMenu' */
void ApplicationMainMenu__Init( ApplicationMainMenu _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ApplicationControllMenu__Init( &_this->ControllMenue, &_this->_XObject, 0 );
  ApplicationConfig__Init( &_this->Config, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationMainMenu );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->ControllMenue, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Config, _Const0004 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Config, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->ControllMenue ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Config ), 0 );
  ApplicationControllMenu_OnSetConfig( &_this->ControllMenue, &_this->Config );
  ApplicationConfig_OnSetControllMenue( &_this->Config, &_this->ControllMenue );
}

/* Re-Initializer for the class 'Application::MainMenu' */
void ApplicationMainMenu__ReInit( ApplicationMainMenu _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ApplicationControllMenu__ReInit( &_this->ControllMenue );
  ApplicationConfig__ReInit( &_this->Config );
}

/* Finalizer method for the class 'Application::MainMenu' */
void ApplicationMainMenu__Done( ApplicationMainMenu _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationMainMenu );

  /* Finalize all embedded objects */
  ApplicationControllMenu__Done( &_this->ControllMenue );
  ApplicationConfig__Done( &_this->Config );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::MainMenu' */
void ApplicationMainMenu__Mark( ApplicationMainMenu _this )
{
  EwMarkObject( &_this->ControllMenue );
  EwMarkObject( &_this->Config );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationMainMenu_UpdateLayout( ApplicationMainMenu _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationMainMenu_UpdateViewState( ApplicationMainMenu _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* Variants derived from the class : 'Application::MainMenu' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMainMenu )
EW_END_OF_CLASS_VARIANTS( ApplicationMainMenu )

/* Virtual Method Table (VMT) for the class : 'Application::MainMenu' */
EW_DEFINE_CLASS( ApplicationMainMenu, CoreGroup, "Application::MainMenu" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationMainMenu_UpdateLayout,
  ApplicationMainMenu_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMainMenu )

/* Initializer for the class 'Application::Well' */
void ApplicationWell__Init( ApplicationWell _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A1, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B1, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C1, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D1, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E1, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F1, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A2, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B2, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C2, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D2, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E2, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F2, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A3, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B3, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C3, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D3, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E3, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F3, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A4, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B4, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C4, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D4, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E4, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F4, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A5, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B5, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C5, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D5, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E5, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F5, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A6, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B6, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C6, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D6, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E6, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F6, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A7, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B7, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C7, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D7, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E7, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F7, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->A8, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->B8, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->C8, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->D8, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->E8, &_this->_XObject, 0 );
  ApplicationWellPart__Init( &_this->F8, &_this->_XObject, 0 );
  ApplicationClock__Init( &_this->Time, &_this->_XObject, 0 );
  ViewsWarpImage__Init( &_this->Logo, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel1, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel2, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel3, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel4, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel5, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel6, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabel7, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabelA, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabelB, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabelC, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabelD, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabelE, &_this->_XObject, 0 );
  ApplicationWellLabel__Init( &_this->WellLabelF, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->NewWellObserver, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->SampleCollected, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationWell );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0005 );
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->A1, _Const0006 );
  ApplicationWellPart_OnSetTimeProperty( &_this->A1, _this->Time.TimeProperty );
  ApplicationWellPart_OnSetCircuitNumber( &_this->A1, 0 );
  CoreRectView__OnSetBounds( &_this->B1, _Const0007 );
  CoreRectView__OnSetBounds( &_this->C1, _Const0008 );
  CoreRectView__OnSetBounds( &_this->D1, _Const0009 );
  CoreRectView__OnSetBounds( &_this->E1, _Const000A );
  CoreRectView__OnSetBounds( &_this->F1, _Const000B );
  CoreRectView__OnSetBounds( &_this->A2, _Const000C );
  ApplicationWellPart_OnSetTimeProperty( &_this->A2, EwLoadString( &_Const000D ));
  ApplicationWellPart_OnSetCircuitNumber( &_this->A2, 1 );
  CoreRectView__OnSetBounds( &_this->B2, _Const000E );
  CoreRectView__OnSetBounds( &_this->C2, _Const000F );
  CoreRectView__OnSetBounds( &_this->D2, _Const0010 );
  CoreRectView__OnSetBounds( &_this->E2, _Const0011 );
  CoreRectView__OnSetBounds( &_this->F2, _Const0012 );
  CoreRectView__OnSetBounds( &_this->A3, _Const0013 );
  ApplicationWellPart_OnSetTimeProperty( &_this->A3, EwLoadString( &_Const0014 ));
  ApplicationWellPart_OnSetCircuitNumber( &_this->A3, 2 );
  CoreRectView__OnSetBounds( &_this->B3, _Const0015 );
  CoreRectView__OnSetBounds( &_this->C3, _Const0016 );
  CoreRectView__OnSetBounds( &_this->D3, _Const0017 );
  CoreRectView__OnSetBounds( &_this->E3, _Const0018 );
  CoreRectView__OnSetBounds( &_this->F3, _Const0019 );
  CoreRectView__OnSetBounds( &_this->A4, _Const001A );
  CoreRectView__OnSetBounds( &_this->B4, _Const001B );
  CoreRectView__OnSetBounds( &_this->C4, _Const001C );
  CoreRectView__OnSetBounds( &_this->D4, _Const001D );
  CoreRectView__OnSetBounds( &_this->E4, _Const001E );
  CoreRectView__OnSetBounds( &_this->F4, _Const001F );
  CoreRectView__OnSetBounds( &_this->A5, _Const0020 );
  CoreRectView__OnSetBounds( &_this->B5, _Const0021 );
  CoreRectView__OnSetBounds( &_this->C5, _Const0022 );
  CoreRectView__OnSetBounds( &_this->D5, _Const0023 );
  CoreRectView__OnSetBounds( &_this->E5, _Const0024 );
  CoreRectView__OnSetBounds( &_this->F5, _Const0025 );
  CoreRectView__OnSetBounds( &_this->A6, _Const0026 );
  CoreRectView__OnSetBounds( &_this->B6, _Const0027 );
  CoreRectView__OnSetBounds( &_this->C6, _Const0028 );
  CoreRectView__OnSetBounds( &_this->D6, _Const0029 );
  CoreRectView__OnSetBounds( &_this->E6, _Const002A );
  CoreRectView__OnSetBounds( &_this->F6, _Const002B );
  CoreRectView__OnSetBounds( &_this->A7, _Const002C );
  CoreRectView__OnSetBounds( &_this->B7, _Const002D );
  CoreRectView__OnSetBounds( &_this->C7, _Const002E );
  CoreRectView__OnSetBounds( &_this->D7, _Const002F );
  CoreRectView__OnSetBounds( &_this->E7, _Const0030 );
  CoreRectView__OnSetBounds( &_this->F7, _Const0031 );
  CoreRectView__OnSetBounds( &_this->A8, _Const0032 );
  CoreRectView__OnSetBounds( &_this->B8, _Const0033 );
  CoreRectView__OnSetBounds( &_this->C8, _Const0034 );
  CoreRectView__OnSetBounds( &_this->D8, _Const0035 );
  CoreRectView__OnSetBounds( &_this->E8, _Const0036 );
  CoreRectView__OnSetBounds( &_this->F8, _Const0037 );
  CoreRectView__OnSetBounds( &_this->Time, _Const0038 );
  CoreQuadView__OnSetPoint4( &_this->Logo, _Const0039 );
  CoreQuadView__OnSetPoint3( &_this->Logo, _Const003A );
  CoreQuadView__OnSetPoint2( &_this->Logo, _Const003B );
  CoreQuadView__OnSetPoint1( &_this->Logo, _Const003C );
  CoreRectView__OnSetBounds( &_this->WellLabel, _Const003D );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel, EwLoadString( &_Const003E 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabel1, _Const003F );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel1, EwLoadString( &_Const0040 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabel2, _Const0041 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel2, EwLoadString( &_Const0042 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabel3, _Const0043 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel3, EwLoadString( &_Const0044 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabel4, _Const0045 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel4, EwLoadString( &_Const0046 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabel5, _Const0047 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel5, EwLoadString( &_Const0048 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabel6, _Const0049 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel6, EwLoadString( &_Const004A 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabel7, _Const004B );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabel7, EwLoadString( &_Const004C 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabelA, _Const004D );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabelA, EwLoadString( &_Const003E 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabelB, _Const004E );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabelB, EwLoadString( &_Const0040 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabelC, _Const004F );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabelC, EwLoadString( &_Const0042 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabelD, _Const0050 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabelD, EwLoadString( &_Const0044 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabelE, _Const0051 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabelE, EwLoadString( &_Const0046 
  ));
  CoreRectView__OnSetBounds( &_this->WellLabelF, _Const0052 );
  ApplicationWellLabel_OnSetTextString( &_this->WellLabelF, EwLoadString( &_Const0048 
  ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->A8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->B8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->D8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->E8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->F8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Time ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Logo ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabel7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabelA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabelB ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabelC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabelD ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabelE ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WellLabelF ), 0 );
  _this->WellPartArray[ 0 ][ 0 ] = &_this->A1;
  _this->WellPartArray[ 0 ][ 1 ] = &_this->B1;
  _this->WellPartArray[ 0 ][ 2 ] = &_this->C1;
  _this->WellPartArray[ 0 ][ 3 ] = &_this->D1;
  _this->WellPartArray[ 0 ][ 4 ] = &_this->E1;
  _this->WellPartArray[ 0 ][ 5 ] = &_this->F1;
  _this->WellPartArray[ 1 ][ 0 ] = &_this->A2;
  _this->WellPartArray[ 1 ][ 1 ] = &_this->B2;
  _this->WellPartArray[ 1 ][ 2 ] = &_this->C2;
  _this->WellPartArray[ 1 ][ 3 ] = &_this->D2;
  _this->WellPartArray[ 1 ][ 4 ] = &_this->E2;
  _this->WellPartArray[ 1 ][ 5 ] = &_this->F2;
  _this->WellPartArray[ 2 ][ 0 ] = &_this->A3;
  _this->WellPartArray[ 2 ][ 1 ] = &_this->B3;
  _this->WellPartArray[ 2 ][ 2 ] = &_this->C3;
  _this->WellPartArray[ 2 ][ 3 ] = &_this->D3;
  _this->WellPartArray[ 2 ][ 4 ] = &_this->E3;
  _this->WellPartArray[ 2 ][ 5 ] = &_this->F3;
  _this->WellPartArray[ 3 ][ 0 ] = &_this->A4;
  _this->WellPartArray[ 3 ][ 1 ] = &_this->B4;
  _this->WellPartArray[ 3 ][ 2 ] = &_this->C4;
  _this->WellPartArray[ 3 ][ 3 ] = &_this->D4;
  _this->WellPartArray[ 3 ][ 4 ] = &_this->E4;
  _this->WellPartArray[ 3 ][ 5 ] = &_this->F4;
  _this->WellPartArray[ 4 ][ 0 ] = &_this->A5;
  _this->WellPartArray[ 4 ][ 1 ] = &_this->B5;
  _this->WellPartArray[ 4 ][ 2 ] = &_this->C5;
  _this->WellPartArray[ 4 ][ 3 ] = &_this->D5;
  _this->WellPartArray[ 4 ][ 4 ] = &_this->E5;
  _this->WellPartArray[ 4 ][ 5 ] = &_this->F5;
  _this->WellPartArray[ 5 ][ 0 ] = &_this->A6;
  _this->WellPartArray[ 5 ][ 1 ] = &_this->B6;
  _this->WellPartArray[ 5 ][ 2 ] = &_this->C6;
  _this->WellPartArray[ 5 ][ 3 ] = &_this->D6;
  _this->WellPartArray[ 5 ][ 4 ] = &_this->E6;
  _this->WellPartArray[ 5 ][ 5 ] = &_this->F6;
  _this->WellPartArray[ 6 ][ 0 ] = &_this->A7;
  _this->WellPartArray[ 6 ][ 1 ] = &_this->B7;
  _this->WellPartArray[ 6 ][ 2 ] = &_this->C7;
  _this->WellPartArray[ 6 ][ 3 ] = &_this->D7;
  _this->WellPartArray[ 6 ][ 4 ] = &_this->E7;
  _this->WellPartArray[ 6 ][ 5 ] = &_this->F7;
  _this->WellPartArray[ 7 ][ 0 ] = &_this->A8;
  _this->WellPartArray[ 7 ][ 1 ] = &_this->B8;
  _this->WellPartArray[ 7 ][ 2 ] = &_this->C8;
  _this->WellPartArray[ 7 ][ 3 ] = &_this->D8;
  _this->WellPartArray[ 7 ][ 4 ] = &_this->E8;
  _this->WellPartArray[ 7 ][ 5 ] = &_this->F8;
  ViewsWarpImage_OnSetBitmap( &_this->Logo, EwLoadResource( &ApplicationLogo, ResourcesBitmap 
  ));
  _this->NewWellObserver.OnEvent = EwNewSlot( _this, ApplicationWell_onNewWell );
  CorePropertyObserver_OnSetOutlet( &_this->NewWellObserver, EwNewRef( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetNewWell, DeviceDeviceClass_OnSetNewWell 
  ));
  _this->WellLabelArray[ 0 ] = &_this->WellLabelA;
  _this->WellLabelArray[ 1 ] = &_this->WellLabelB;
  _this->WellLabelArray[ 2 ] = &_this->WellLabelC;
  _this->WellLabelArray[ 3 ] = &_this->WellLabelD;
  _this->WellLabelArray[ 4 ] = &_this->WellLabelE;
  _this->WellLabelArray[ 5 ] = &_this->WellLabelF;
  _this->SampleCollected.OnEvent = EwNewSlot( _this, ApplicationWell_onSampleCollected 
  );
  CoreSystemEventHandler_OnSetEvent( &_this->SampleCollected, &EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->SampleCollectedEvent );
}

/* Re-Initializer for the class 'Application::Well' */
void ApplicationWell__ReInit( ApplicationWell _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ApplicationWellPart__ReInit( &_this->A1 );
  ApplicationWellPart__ReInit( &_this->B1 );
  ApplicationWellPart__ReInit( &_this->C1 );
  ApplicationWellPart__ReInit( &_this->D1 );
  ApplicationWellPart__ReInit( &_this->E1 );
  ApplicationWellPart__ReInit( &_this->F1 );
  ApplicationWellPart__ReInit( &_this->A2 );
  ApplicationWellPart__ReInit( &_this->B2 );
  ApplicationWellPart__ReInit( &_this->C2 );
  ApplicationWellPart__ReInit( &_this->D2 );
  ApplicationWellPart__ReInit( &_this->E2 );
  ApplicationWellPart__ReInit( &_this->F2 );
  ApplicationWellPart__ReInit( &_this->A3 );
  ApplicationWellPart__ReInit( &_this->B3 );
  ApplicationWellPart__ReInit( &_this->C3 );
  ApplicationWellPart__ReInit( &_this->D3 );
  ApplicationWellPart__ReInit( &_this->E3 );
  ApplicationWellPart__ReInit( &_this->F3 );
  ApplicationWellPart__ReInit( &_this->A4 );
  ApplicationWellPart__ReInit( &_this->B4 );
  ApplicationWellPart__ReInit( &_this->C4 );
  ApplicationWellPart__ReInit( &_this->D4 );
  ApplicationWellPart__ReInit( &_this->E4 );
  ApplicationWellPart__ReInit( &_this->F4 );
  ApplicationWellPart__ReInit( &_this->A5 );
  ApplicationWellPart__ReInit( &_this->B5 );
  ApplicationWellPart__ReInit( &_this->C5 );
  ApplicationWellPart__ReInit( &_this->D5 );
  ApplicationWellPart__ReInit( &_this->E5 );
  ApplicationWellPart__ReInit( &_this->F5 );
  ApplicationWellPart__ReInit( &_this->A6 );
  ApplicationWellPart__ReInit( &_this->B6 );
  ApplicationWellPart__ReInit( &_this->C6 );
  ApplicationWellPart__ReInit( &_this->D6 );
  ApplicationWellPart__ReInit( &_this->E6 );
  ApplicationWellPart__ReInit( &_this->F6 );
  ApplicationWellPart__ReInit( &_this->A7 );
  ApplicationWellPart__ReInit( &_this->B7 );
  ApplicationWellPart__ReInit( &_this->C7 );
  ApplicationWellPart__ReInit( &_this->D7 );
  ApplicationWellPart__ReInit( &_this->E7 );
  ApplicationWellPart__ReInit( &_this->F7 );
  ApplicationWellPart__ReInit( &_this->A8 );
  ApplicationWellPart__ReInit( &_this->B8 );
  ApplicationWellPart__ReInit( &_this->C8 );
  ApplicationWellPart__ReInit( &_this->D8 );
  ApplicationWellPart__ReInit( &_this->E8 );
  ApplicationWellPart__ReInit( &_this->F8 );
  ApplicationClock__ReInit( &_this->Time );
  ViewsWarpImage__ReInit( &_this->Logo );
  ApplicationWellLabel__ReInit( &_this->WellLabel );
  ApplicationWellLabel__ReInit( &_this->WellLabel1 );
  ApplicationWellLabel__ReInit( &_this->WellLabel2 );
  ApplicationWellLabel__ReInit( &_this->WellLabel3 );
  ApplicationWellLabel__ReInit( &_this->WellLabel4 );
  ApplicationWellLabel__ReInit( &_this->WellLabel5 );
  ApplicationWellLabel__ReInit( &_this->WellLabel6 );
  ApplicationWellLabel__ReInit( &_this->WellLabel7 );
  ApplicationWellLabel__ReInit( &_this->WellLabelA );
  ApplicationWellLabel__ReInit( &_this->WellLabelB );
  ApplicationWellLabel__ReInit( &_this->WellLabelC );
  ApplicationWellLabel__ReInit( &_this->WellLabelD );
  ApplicationWellLabel__ReInit( &_this->WellLabelE );
  ApplicationWellLabel__ReInit( &_this->WellLabelF );
  CorePropertyObserver__ReInit( &_this->NewWellObserver );
  CoreSystemEventHandler__ReInit( &_this->SampleCollected );
}

/* Finalizer method for the class 'Application::Well' */
void ApplicationWell__Done( ApplicationWell _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationWell );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ApplicationWellPart__Done( &_this->A1 );
  ApplicationWellPart__Done( &_this->B1 );
  ApplicationWellPart__Done( &_this->C1 );
  ApplicationWellPart__Done( &_this->D1 );
  ApplicationWellPart__Done( &_this->E1 );
  ApplicationWellPart__Done( &_this->F1 );
  ApplicationWellPart__Done( &_this->A2 );
  ApplicationWellPart__Done( &_this->B2 );
  ApplicationWellPart__Done( &_this->C2 );
  ApplicationWellPart__Done( &_this->D2 );
  ApplicationWellPart__Done( &_this->E2 );
  ApplicationWellPart__Done( &_this->F2 );
  ApplicationWellPart__Done( &_this->A3 );
  ApplicationWellPart__Done( &_this->B3 );
  ApplicationWellPart__Done( &_this->C3 );
  ApplicationWellPart__Done( &_this->D3 );
  ApplicationWellPart__Done( &_this->E3 );
  ApplicationWellPart__Done( &_this->F3 );
  ApplicationWellPart__Done( &_this->A4 );
  ApplicationWellPart__Done( &_this->B4 );
  ApplicationWellPart__Done( &_this->C4 );
  ApplicationWellPart__Done( &_this->D4 );
  ApplicationWellPart__Done( &_this->E4 );
  ApplicationWellPart__Done( &_this->F4 );
  ApplicationWellPart__Done( &_this->A5 );
  ApplicationWellPart__Done( &_this->B5 );
  ApplicationWellPart__Done( &_this->C5 );
  ApplicationWellPart__Done( &_this->D5 );
  ApplicationWellPart__Done( &_this->E5 );
  ApplicationWellPart__Done( &_this->F5 );
  ApplicationWellPart__Done( &_this->A6 );
  ApplicationWellPart__Done( &_this->B6 );
  ApplicationWellPart__Done( &_this->C6 );
  ApplicationWellPart__Done( &_this->D6 );
  ApplicationWellPart__Done( &_this->E6 );
  ApplicationWellPart__Done( &_this->F6 );
  ApplicationWellPart__Done( &_this->A7 );
  ApplicationWellPart__Done( &_this->B7 );
  ApplicationWellPart__Done( &_this->C7 );
  ApplicationWellPart__Done( &_this->D7 );
  ApplicationWellPart__Done( &_this->E7 );
  ApplicationWellPart__Done( &_this->F7 );
  ApplicationWellPart__Done( &_this->A8 );
  ApplicationWellPart__Done( &_this->B8 );
  ApplicationWellPart__Done( &_this->C8 );
  ApplicationWellPart__Done( &_this->D8 );
  ApplicationWellPart__Done( &_this->E8 );
  ApplicationWellPart__Done( &_this->F8 );
  ApplicationClock__Done( &_this->Time );
  ViewsWarpImage__Done( &_this->Logo );
  ApplicationWellLabel__Done( &_this->WellLabel );
  ApplicationWellLabel__Done( &_this->WellLabel1 );
  ApplicationWellLabel__Done( &_this->WellLabel2 );
  ApplicationWellLabel__Done( &_this->WellLabel3 );
  ApplicationWellLabel__Done( &_this->WellLabel4 );
  ApplicationWellLabel__Done( &_this->WellLabel5 );
  ApplicationWellLabel__Done( &_this->WellLabel6 );
  ApplicationWellLabel__Done( &_this->WellLabel7 );
  ApplicationWellLabel__Done( &_this->WellLabelA );
  ApplicationWellLabel__Done( &_this->WellLabelB );
  ApplicationWellLabel__Done( &_this->WellLabelC );
  ApplicationWellLabel__Done( &_this->WellLabelD );
  ApplicationWellLabel__Done( &_this->WellLabelE );
  ApplicationWellLabel__Done( &_this->WellLabelF );
  CorePropertyObserver__Done( &_this->NewWellObserver );
  CoreSystemEventHandler__Done( &_this->SampleCollected );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Well' */
void ApplicationWell__Mark( ApplicationWell _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->A1 );
  EwMarkObject( &_this->B1 );
  EwMarkObject( &_this->C1 );
  EwMarkObject( &_this->D1 );
  EwMarkObject( &_this->E1 );
  EwMarkObject( &_this->F1 );
  EwMarkObject( &_this->A2 );
  EwMarkObject( &_this->B2 );
  EwMarkObject( &_this->C2 );
  EwMarkObject( &_this->D2 );
  EwMarkObject( &_this->E2 );
  EwMarkObject( &_this->F2 );
  EwMarkObject( &_this->A3 );
  EwMarkObject( &_this->B3 );
  EwMarkObject( &_this->C3 );
  EwMarkObject( &_this->D3 );
  EwMarkObject( &_this->E3 );
  EwMarkObject( &_this->F3 );
  EwMarkObject( &_this->A4 );
  EwMarkObject( &_this->B4 );
  EwMarkObject( &_this->C4 );
  EwMarkObject( &_this->D4 );
  EwMarkObject( &_this->E4 );
  EwMarkObject( &_this->F4 );
  EwMarkObject( &_this->A5 );
  EwMarkObject( &_this->B5 );
  EwMarkObject( &_this->C5 );
  EwMarkObject( &_this->D5 );
  EwMarkObject( &_this->E5 );
  EwMarkObject( &_this->F5 );
  EwMarkObject( &_this->A6 );
  EwMarkObject( &_this->B6 );
  EwMarkObject( &_this->C6 );
  EwMarkObject( &_this->D6 );
  EwMarkObject( &_this->E6 );
  EwMarkObject( &_this->F6 );
  EwMarkObject( &_this->A7 );
  EwMarkObject( &_this->B7 );
  EwMarkObject( &_this->C7 );
  EwMarkObject( &_this->D7 );
  EwMarkObject( &_this->E7 );
  EwMarkObject( &_this->F7 );
  EwMarkObject( &_this->A8 );
  EwMarkObject( &_this->B8 );
  EwMarkObject( &_this->C8 );
  EwMarkObject( &_this->D8 );
  EwMarkObject( &_this->E8 );
  EwMarkObject( &_this->F8 );
  EwMarkObject( &_this->Time );
  EwMarkObjects( _this->WellPartArray );
  EwMarkObject( &_this->Logo );
  EwMarkObject( &_this->WellLabel );
  EwMarkObject( &_this->WellLabel1 );
  EwMarkObject( &_this->WellLabel2 );
  EwMarkObject( &_this->WellLabel3 );
  EwMarkObject( &_this->WellLabel4 );
  EwMarkObject( &_this->WellLabel5 );
  EwMarkObject( &_this->WellLabel6 );
  EwMarkObject( &_this->WellLabel7 );
  EwMarkObject( &_this->WellLabelA );
  EwMarkObject( &_this->WellLabelB );
  EwMarkObject( &_this->WellLabelC );
  EwMarkObject( &_this->WellLabelD );
  EwMarkObject( &_this->WellLabelE );
  EwMarkObject( &_this->WellLabelF );
  EwMarkObject( &_this->NewWellObserver );
  EwMarkObjects( _this->WellLabelArray );
  EwMarkObject( &_this->SampleCollected );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationWell_UpdateLayout( ApplicationWell _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationWell_UpdateViewState( ApplicationWell _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* Writes the given Time in the chosen WellPart */
void ApplicationWell_timeToWellPart( ApplicationWell _this, XInt32 aCircuitNumber, 
  XInt32 aColumn, XInt32 aRow, XString aTime )
{
  ApplicationWellPart_OnSetTimeProperty( _this->WellPartArray[ EwCheckIndex( aColumn, 
  8 )][ EwCheckIndex( aRow,  6 )], aTime );
  ApplicationWellPart_OnSetCircuitNumber( _this->WellPartArray[ EwCheckIndex( aColumn, 
  8 )][ EwCheckIndex( aRow,  6 )], aCircuitNumber );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationWell_onNewWell( ApplicationWell _this, XObject sender )
{
  XInt32 r;
  XInt32 c;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  for ( r = 0; r < 6; r = r + 1 )
  {
    for ( c = 0; c < 8; c = c + 1 )
    {
      ViewsText_OnSetString( &_this->WellPartArray[ EwCheckIndex( c, 8 )][ EwCheckIndex( 
      r,  6 )]->Text, 0 );
    }
  }
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationWell_onSampleCollected( ApplicationWell _this, XObject sender )
{
  DeviceSampleCollectedContext context;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  context = EwCastObject( _this->SampleCollected.Context, DeviceSampleCollectedContext 
  );
  ApplicationWell_timeToWellPart( _this, context->CircuitNumber, context->WellIndex.X, 
  context->WellIndex.Y, context->Time );
}

/* Variants derived from the class : 'Application::Well' */
EW_DEFINE_CLASS_VARIANTS( ApplicationWell )
EW_END_OF_CLASS_VARIANTS( ApplicationWell )

/* Virtual Method Table (VMT) for the class : 'Application::Well' */
EW_DEFINE_CLASS( ApplicationWell, CoreGroup, "Application::Well" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationWell_UpdateLayout,
  ApplicationWell_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationWell )

/* Initializer for the class 'Application::WellPart' */
void ApplicationWellPart__Init( ApplicationWellPart _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsWarpImage__Init( &_this->WarpImage, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationWellPart );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0053 );
  CoreQuadView__OnSetPoint4( &_this->WarpImage, _Const0054 );
  CoreQuadView__OnSetPoint3( &_this->WarpImage, _Const0055 );
  CoreQuadView__OnSetPoint2( &_this->WarpImage, _Const0056 );
  CoreQuadView__OnSetPoint1( &_this->WarpImage, _Const0057 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0058 );
  ViewsText_OnSetRowDistance( &_this->Text, 14 );
  ViewsText_OnSetAutoSize( &_this->Text, 0 );
  ViewsText_OnSetWrapWidth( &_this->Text, 0 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetString( &_this->Text, 0 );
  ViewsText_OnSetColor( &_this->Text, _Const0059 );
  CoreGroup__Add( _this, ((CoreView)&_this->WarpImage ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsWarpImage_OnSetBitmap( &_this->WarpImage, EwLoadResource( &ApplicationOval, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFontArial17, ResourcesFont 
  ));
}

/* Re-Initializer for the class 'Application::WellPart' */
void ApplicationWellPart__ReInit( ApplicationWellPart _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsWarpImage__ReInit( &_this->WarpImage );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::WellPart' */
void ApplicationWellPart__Done( ApplicationWellPart _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationWellPart );

  /* Finalize all embedded objects */
  ViewsWarpImage__Done( &_this->WarpImage );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->TimeProperty );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::WellPart' */
void ApplicationWellPart__Mark( ApplicationWellPart _this )
{
  EwMarkObject( &_this->WarpImage );
  EwMarkObject( &_this->Text );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationWellPart_UpdateLayout( ApplicationWellPart _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationWellPart_UpdateViewState( ApplicationWellPart _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application::WellPart.OnSetTimeProperty()' */
void ApplicationWellPart_OnSetTimeProperty( ApplicationWellPart _this, XString value )
{
  if ( !EwCompString( _this->TimeProperty, value ))
    return;

  EwRetainString( &_this->TimeProperty, value );
  ViewsText_OnSetString( &_this->Text, _this->TimeProperty );
}

/* 'C' function for method : 'Application::WellPart.OnSetCircuitNumber()' */
void ApplicationWellPart_OnSetCircuitNumber( ApplicationWellPart _this, XInt32 value )
{
  if ( value > 5 )
  {
    ViewsText_OnSetColor( &_this->Text, EwSetColorBlue( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorRed( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorGreen( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
  }

  if ( value == 0 )
  {
    ViewsText_OnSetColor( &_this->Text, EwSetColorBlue( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorRed( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorGreen( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
  }

  if ( value == 1 )
  {
    ViewsText_OnSetColor( &_this->Text, EwSetColorBlue( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorRed( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorGreen( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
  }

  if ( value == 2 )
  {
    ViewsText_OnSetColor( &_this->Text, EwSetColorBlue( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorRed( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorGreen( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
  }

  if ( value == 3 )
  {
    ViewsText_OnSetColor( &_this->Text, EwSetColorBlue( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorRed( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorGreen( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
  }

  if ( value == 4 )
  {
    ViewsText_OnSetColor( &_this->Text, EwSetColorBlue( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorRed( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorGreen( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
  }

  if ( value == 5 )
  {
    ViewsText_OnSetColor( &_this->Text, EwSetColorBlue( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorRed( ViewsText_OnGetColor( &_this->Text 
    ), 0 ));
    ViewsText_OnSetColor( &_this->Text, EwSetColorGreen( ViewsText_OnGetColor( &_this->Text 
    ), 255 ));
  }

  if ( _this->CircuitNumber == value )
    return;

  _this->CircuitNumber = value;
}

/* Variants derived from the class : 'Application::WellPart' */
EW_DEFINE_CLASS_VARIANTS( ApplicationWellPart )
EW_END_OF_CLASS_VARIANTS( ApplicationWellPart )

/* Virtual Method Table (VMT) for the class : 'Application::WellPart' */
EW_DEFINE_CLASS( ApplicationWellPart, CoreGroup, "Application::WellPart" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationWellPart_UpdateLayout,
  ApplicationWellPart_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationWellPart )

/* Bitmap resource : 'Application::Oval' */
EW_DEFINE_BITMAP_RES( ApplicationOval )
  EW_BITMAP_FRAMES( ApplicationOval, Default, EW_DRIVER_VARIANT_RGBA8888, 128, 128, 0 )
    EW_BITMAP_FRAME( 53, 1, 22, 3, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( ApplicationOval, Default )                   /* ratio 3.68 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x33818360,
    0x28196E06, 0x81A96068, 0x1B0E06B5, 0xB7A06D08, 0xE606EB81, 0x24D28953, 0x3D209149,
    0x7188D472, 0x388AC5E0, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0x82A2B44A, 0x1E064581,
    0x606BE81A, 0xA0FF81B9, 0x9518154A, 0x550054EA, 0xCACD5EB1, 0xAB57AB75, 0xED86B560,
    0xC0A9F02A, 0x0A9702A6, 0x68F02A4C, 0xE370B7D1, 0xB74B9DCA, 0x0589DDAE, 0x18190206,
    0x95C0A608, 0x1D8ABF63, 0xE0B0964C, 0x2B0F88C2, 0x70D8CC0E, 0x4600C058, 0x702BEC0A,
    0x77BCC0AF, 0xCCDE6B33, 0x88E7B3B9, 0x6A4E0635, 0xE97138D9, 0x9B538EC5, 0xB57A8D56,
    0x53A8D6EB, 0x302D1C0A, 0xB8DBE7F4, 0x5DDEEB73, 0x3CC0C3B0, 0x3EC1AD03, 0xC0B59C4D,
    0x0D8D0376, 0xD11034FC, 0xE3033EC0, 0x30332C0C, 0xD726C0CB, 0xFE8F4FAB, 0xE4F2F9BC,
    0x7F179103, 0x70B05E3D, 0xFA05C081, 0xBDBECDE6, 0x5D0BF7FB, 0xB035540C, 0xF8E370DF,
    0x34BC0DB5, 0x1E40CC70, 0x5F005503, 0x040A0243, 0x09FE40A0, 0xFA409FC4, 0x6A60E795,
    0x9F4409F6, 0x680DF240, 0x0A1885E1, 0xB1001B65, 0x7DCFE40C, 0xCE6001E4, 0x040CA440,
    0x65EB40C6, 0x278A59A8, 0x40A2540A, 0xE2183E23, 0x58750287, 0xE6388A9B, 0x030E22A8,
    0x6A2202E1, 0xC9B40CF0, 0x140C3E40, 0x1E2A8E80, 0x02915029, 0x9050290D, 0xA3E6A232,
    0x69223C40, 0x597295E5, 0x1E281030, 0x3ED618FE, 0xD032D103, 0x80210315, 0x990C99E5,
    0x02991029, 0x98102989, 0x23458651, 0xA40A5C00, 0xE6789A25, 0x03009089, 0x3BD031AD,
    0xCF860E5E, 0xA07D037E, 0x193CA1E7, 0x8340E0AA, 0xA01839C6, 0x1029F902, 0x7A56889F,
    0x38009561, 0xF5566813, 0x40C8F40C, 0x2A2A581A, 0xF40AA151, 0x3A9D40A9, 0x54A6959A,
    0x66AAEA8E, 0x48000294, 0x33EA817D, 0xBE012310, 0x055D6BAA, 0x40AB8002, 0xA11A3AB6,
    0xBAC503AC, 0x6539B1EB, 0x03A6D4C0, 0x0A5032F5, 0x19EB46C8, 0xAB3902B4, 0x2902B2EA,
    0x09B6ED2B, 0x3A4005B1, 0x26339281, 0xC7B2E4B7, 0x3AE20026, 0xE55AEE0A, 0x0024AAEA,
    0x6C300194, 0x32495988, 0xE6ED0310, 0x02BE1EEB, 0x5F2C2BD9, 0x257BEA46, 0x0A065B01,
    0x08520025, 0x098E70AC, 0x9D68193F, 0x30BC1000, 0x20026A7C, 0x0CCCA04B, 0x1CC4C224,
    0x40B1B923, 0xB17A3B19, 0xDC771540, 0x090303D9, 0x03256813, 0xCBF2601D, 0x102CBA57,
    0x2CAA8ECB, 0xCF30CA10, 0x0F4BC175, 0xCE692B0E, 0xF3FA2340, 0x2495A8BC, 0xFF41CED0,
    0x46003384, 0xA35597E3, 0xF4915000, 0x2D4AA3D4, 0x3621D410, 0x10D534BD, 0xD3B36C55,
    0x5033C503, 0xFD975C10, 0x8902D92A, 0x25D7E0FD, 0xC4904D9B, 0xCE87DF16, 0x6DB83040,
    0x0B75AEF7, 0x2383F734, 0xBBF66C47, 0x36A88710, 0x6DDF7900, 0x0F85B238, 0xEFC4221E,
    0x886F1D02, 0xF87DA350, 0x8E4ADCE4, 0x9AF16A35, 0x8DD12DEC, 0xE5356B0D, 0x39FBE7A0,
    0xA52210E7, 0xDEDFB6B0, 0xACE873F7, 0x8873FC2B, 0x3A8002EB, 0x05A2B1B2, 0xE7ADCCF6,
    0xB7CD330E, 0xB1BB6003, 0x60FACEAE, 0xACC800C8, 0x1B0BF1FB, 0xC2887C4F, 0xE9298A8B,
    0x31FC1D85, 0x3C9BD4F2, 0x0DABC1FD, 0xB199E98B, 0xC37BDAB2, 0x340F87D5, 0x0F7A21F8,
    0xA3AF8E7C, 0xECF8AFE6, 0x887EBD53, 0x277867AB, 0x97E29000, 0xB6FC002E, 0xF9D03FAF,
    0xFD5ABFDF, 0xE050B3F3, 0xFDAE7350, 0xE76A7019, 0x3080DC5A, 0x58D5A735, 0x741080EB,
    0x335703DB, 0x66E9EDA7, 0x1609F84A, 0xC115A800, 0x838D520E, 0x060D5C1A, 0x10A1B36F,
    0x2883CAFD, 0x4309DB74, 0xD8CE21B4, 0x02A93F08, 0x4852AF40, 0x2AF5A9C3, 0xE179AB86,
    0x80042A5D, 0x54E60A06, 0xDBA20C35, 0x81C14880, 0x132E70F0, 0x4AD40FC2, 0x5226C425,
    0x6B97898D, 0x92DF124C, 0x655DE822, 0xA2CC4E41, 0x3D98B0DB, 0x3D251514, 0x001381F8,
    0x32C5A514, 0x628C8D52, 0x85180D5C, 0xB8FC1E72, 0x74708CC9, 0xD3571BDB, 0x90949F46,
    0x63CC7180, 0x9A8812D9, 0x3684E616, 0xDB5839F8, 0x97C848F4, 0x827B0C55, 0x30452401,
    0xE0D90003, 0x8C8549C7, 0xB920D524, 0x1232471A, 0x1DE99622, 0x49C92493, 0x44326DA0,
    0xE3C88499, 0x00231304, 0xA893AE34, 0x4ABBD8E4, 0x3DCC9AB9, 0x79F83244, 0x09672A51,
    0x06AE5934, 0x0B710C96, 0x9AB32000, 0x97F2D116, 0x6AE5F326, 0x844BA320, 0x29442B78,
    0x1532A602, 0x7910A296, 0xC96A210B, 0x09A732CF, 0x27E106B3, 0xDDB1089A, 0xCD48B06A,
    0x8B8C2A6E, 0x421DB182, 0x049F82CC, 0xF99CF379, 0xC86AE732, 0xF49B9049, 0x8CE840EE,
    0x19E0B727, 0xE4667722, 0xA7943341, 0xABD5773E, 0x0013DD10, 0x788E291B, 0x6E5049F6,
    0x0135740D, 0x8A474005, 0x3A829CA3, 0xC50D5A34, 0xF00142CF, 0xE730E291, 0xD5D518A1,
    0x5153F145, 0x38A48400, 0x48A8C9CE, 0xFC521545, 0xA832347C, 0x5748CE81, 0xE295287A,
    0x5B4D9607, 0x4A58748D, 0x14CD3453, 0x493B4D3F, 0xD353A871, 0xA7895A9E, 0x2369D1F8,
    0x9F1D6351, 0x4547151A, 0x79238FC5, 0x1CEC1829, 0x7217A9F5, 0xC3207E2A, 0x1548C6D4,
    0x8F6D58AA, 0x1A498754, 0xAB3524FC, 0x524DD560, 0x9D92E92B, 0xB9ACF586, 0x846AEA01,
    0xDCC1531A, 0xDD70AD14, 0xD3574DCC, 0xC6AE5834, 0xABCD71A5, 0xCB7A5C5D, 0xAF548098,
    0x494BAD80, 0x8ED27357, 0x81A366AE, 0x36516C4D, 0x4E8E9ABA, 0x55113574, 0x128364AC,
    0x344CD5D1, 0xE819ABA1, 0x93DB3764, 0xA1260A83, 0x3E510CFF, 0x025A4B39, 0xEE9FE7DD,
    0x4B3C110C, 0xD085DACB, 0x24EE3513, 0x63573908, 0xF6DAD6CE, 0x0C14EA20, 0x4DA20F3B,
    0xB6F370C1, 0x71545DC0, 0x689079C4, 0xC19AC6AE, 0x5735AE0D, 0x1C83CD83, 0x4CC93513,
    0x899B64EE, 0x441E679A, 0x8D4D5597, 0x593BA52F, 0x98860A61, 0x2C8D44AF, 0x5B592BB9,
    0x0F97060A, 0x4A636519, 0x86F24A79, 0x9B989575, 0xB4432648, 0xF59EF749, 0xE509A893,
    0xC8E91843, 0xBED240D5, 0x60A4A561, 0x2047F92C, 0x47C00995, 0x146A243D, 0x163B9399,
    0xA60880A7, 0xE38B1F29, 0x71B49E47, 0x308C6F35, 0x9E68E74D, 0x8C46A22F, 0x4170D464,
    0x359A88D1, 0xA88AA506, 0xF588ADF9, 0x79CECE09, 0x5C492E31, 0x7C5712CD, 0x66A2284E,
    0xA1E1728A, 0x44031B0F, 0x88934F1A, 0x11D39982, 0xD5C2F2ED, 0x3EB470C4, 0x510DE48E,
    0x38CDC3A3, 0x4C273F18, 0xD8572732, 0x46A20BC7, 0xB2941C83, 0xA5284119, 0x351030F6,
    0x1972D40F, 0x81E41827, 0x033D9058, 0x8398B07C, 0x40FC6138, 0xABF342CC, 0x97EE6ADF,
    0xAFEB35BF, 0xA001A87F, 0x9C57D28E, 0x7DB9D9F5, 0xFC4D43EF, 0xFBBDD472, 0xB9CFEF80,
    0xCC6A1F23, 0x19E7A797, 0x43D32058, 0x87AEDDF4, 0xEF05ED1A, 0x9E33C43E, 0xBCA683A4,
    0x55EF34FB, 0xEF0FBBB5, 0xDE340D36, 0xDB77E885, 0xE0EC5D42, 0xF18E6A47, 0x9BB13F19,
    0x5736BB5D, 0xAE7C81E9, 0x5D1AD2D5, 0x3305D9AD, 0x6C712AF5, 0xA31B3EB8, 0x984AE3EE,
    0x833EEE01, 0xCFB05C2B, 0x30FBB894, 0xEB706CCE, 0x46F6885B, 0xA8E765B8, 0x510ED470,
    0x3876E0DF, 0xD81B21AF, 0xE48F76D6, 0xB61A8714, 0x6D696F51, 0x6ED40E2D, 0x7CCE6E1D,
    0x1D388A2E, 0x87D8D6C8, 0xC7DDA634, 0xCBB6ED67, 0xB4D3EED0, 0x69707B7A, 0x40D7A35F,
    0x7CE9A778, 0xA678C4E3, 0xE6D7CFBE, 0x498AC42D, 0x331AD31B, 0xB7A64478, 0x6DF4FBBC,
    0x5B847090, 0xB0777B9A, 0x209C4B43, 0x83E443E0, 0x546DC620, 0x565E2BBE, 0x70BDF3EC,
    0xF740BF9D, 0x6902600C, 0xB5BD376F, 0x0FDCFBEA, 0x973E3EC2, 0x3B13EEFF, 0x751466EB,
    0x03D475BD, 0x0E5C0CB3, 0xB651D992, 0x634FB593, 0x6794BCD5, 0x0AB956F0, 0x184EAF6C,
    0xA40F7BC2, 0x2B83E779, 0xF027BCA6, 0x8810C4B0, 0x1329AC4C, 0x40C38881, 0xA4CCEF79,
    0xE4CFD58D, 0x61A8281C, 0x24E7C431, 0xDDE11623, 0xA9F5FA75, 0x1F9E2258, 0xBBDC76C4,
    0x8DF188AC, 0x13B8C2E7, 0x37AE762B, 0x735031A6, 0x25005882, 0xD60C298D, 0x8307357D,
    0xAE6526E4, 0x126D77BB, 0xBBEF2292, 0xF6883060, 0x85E86F8F, 0x55FC7F7C, 0x5F4B294A,
    0x2C661746, 0x5840D122, 0x0D392CC9, 0xFE1585E4, 0x98784478, 0xBE8BA744, 0xA2C4D631,
    0x6489E139, 0x9E0AF515, 0x72E2C4E6, 0x619F8F5B, 0xB2C87125, 0xC08A4A1F, 0xDFE26178,
    0x8D03001E, 0xEA4B46E8, 0x35029BD2, 0x6A9552A9, 0x537A8152, 0xA3749697, 0xB5ECF511,
    0x36800FC6, 0xC9F4F182, 0x0086CCFF, 0xBBE75FD9, 0x8FCFFC9F, 0x091C7DFF, 0x1FA7D8C8,
    0x64CC8C47, 0x5D9960BC, 0xFDFFC3F9, 0x901C579A, 0x92F14B01, 0x7F749749, 0xDE4BA2DB,
    0x33B64D12, 0x7FE8005B, 0xE41A9801, 0xE4D13B64, 0x8084C52D, 0x344F63AD, 0xD5131021,
    0x53052751, 0x7F543565, 0xE10212C1, 0x17E56C48, 0x1C13251E, 0x800081B8, 0x1015685A,
    0x00000000

  EW_BITMAPS_TABLE( ApplicationOval )
    EW_BITMAP( ApplicationOval, Default )
EW_END_OF_BITMAP_RES( ApplicationOval )

/* Table with links to derived variants of the bitmap resource : 'Application::Oval' */
EW_RES_WITHOUT_VARIANTS( ApplicationOval )

/* Initializer for the class 'Application::Clock' */
void ApplicationClock__Init( ApplicationClock _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->Timer, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TimeText, &_this->_XObject, 0 );
  CoreTime__Init( &_this->Time, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationClock );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005A );
  CoreTimer_OnSetPeriod( &_this->Timer, 500 );
  CoreTimer_OnSetBegin( &_this->Timer, 0 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreRectView__OnSetBounds( &_this->TimeText, _Const005A );
  ViewsText_OnSetAutoSize( &_this->TimeText, 0 );
  ViewsText_OnSetWrapText( &_this->TimeText, 1 );
  ViewsText_OnSetString( &_this->TimeText, EwLoadString( &_Const005B ));
  EwRetainString( &_this->TimeProperty, EwLoadString( &_Const005B ));
  CoreGroup__Add( _this, ((CoreView)&_this->TimeText ), 0 );
  _this->Timer.OnTrigger = EwNewSlot( _this, ApplicationClock_Slot );
  ViewsText_OnSetFont( &_this->TimeText, EwLoadResource( &FlatFontM, ResourcesFont 
  ));
}

/* Re-Initializer for the class 'Application::Clock' */
void ApplicationClock__ReInit( ApplicationClock _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->Timer );
  ViewsText__ReInit( &_this->TimeText );
  CoreTime__ReInit( &_this->Time );
}

/* Finalizer method for the class 'Application::Clock' */
void ApplicationClock__Done( ApplicationClock _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationClock );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->Timer );
  ViewsText__Done( &_this->TimeText );
  CoreTime__Done( &_this->Time );

  /* Release all used strings */
  EwReleaseString( &_this->TimeProperty );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Clock' */
void ApplicationClock__Mark( ApplicationClock _this )
{
  EwMarkObject( &_this->Timer );
  EwMarkObject( &_this->TimeText );
  EwMarkObject( &_this->Time );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationClock_UpdateLayout( ApplicationClock _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationClock_UpdateViewState( ApplicationClock _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application::Clock.Slot()' */
void ApplicationClock_Slot( ApplicationClock _this, XObject sender )
{
  CoreTime currentT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  currentT = CoreTime_OnGetCurrentTime( &_this->Time );
  ApplicationClock_OnSetTimeProperty( _this, EwConcatString( EwConcatString( EwConcatString( 
  EwConcatString( EwConcatString( EwConcatString( EwConcatStringChar( EwConcatStringChar( 
  EwConcatString( EwConcatString( EwConcatString( EwNewStringInt( currentT->Day, 
  0, 10 ), EwLoadString( &_Const005C )), EwNewStringInt( currentT->Month, 0, 10 
  )), EwLoadString( &_Const005C )), EwGetStringChar( EwNewStringInt( currentT->Year, 
  0, 10 ), 2 )), EwGetStringChar( EwNewStringInt( currentT->Year, 0, 10 ), 3 )), 
  EwLoadString( &_Const005D )), EwNewStringInt( currentT->Hour, 0, 10 )), EwLoadString( 
  &_Const005E )), EwNewStringInt( currentT->Minute, 0, 10 )), EwLoadString( &_Const005E 
  )), EwNewStringInt( currentT->Second, 0, 10 )));
}

/* 'C' function for method : 'Application::Clock.OnSetTimeProperty()' */
void ApplicationClock_OnSetTimeProperty( ApplicationClock _this, XString value )
{
  if ( !EwCompString( _this->TimeProperty, value ))
    return;

  ViewsText_OnSetString( &_this->TimeText, _this->TimeProperty );
  EwRetainString( &_this->TimeProperty, value );
}

/* Variants derived from the class : 'Application::Clock' */
EW_DEFINE_CLASS_VARIANTS( ApplicationClock )
EW_END_OF_CLASS_VARIANTS( ApplicationClock )

/* Virtual Method Table (VMT) for the class : 'Application::Clock' */
EW_DEFINE_CLASS( ApplicationClock, CoreGroup, "Application::Clock" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationClock_UpdateLayout,
  ApplicationClock_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationClock )

/* Initializer for the class 'Application::SampleController' */
void ApplicationSampleController__Init( ApplicationSampleController _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsText__Init( &_this->NameText, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->BtnStart, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->BtnStop, &_this->_XObject, 0 );
  FlatHorzBar__Init( &_this->HorzBar, &_this->_XObject, 0 );
  FlatIndicator__Init( &_this->Indicator, &_this->_XObject, 0 );
  ApplicationTextEditor__Init( &_this->TextEditor, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->NewWellObserver, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationSampleController );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const005F );
  _this->NameProperty = 0x0000;
  CoreRectView__OnSetBounds( &_this->Border, _Const0060 );
  ViewsBorder_OnSetWidth( &_this->Border, 3 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0061 );
  CoreRectView__OnSetBounds( &_this->NameText, _Const0062 );
  ViewsText_OnSetString( &_this->NameText, EwLoadString( &_Const003E ));
  ViewsText_OnSetColor( &_this->NameText, _Const0061 );
  CoreRectView__OnSetBounds( &_this->BtnStart, _Const0063 );
  FlatActionButton_OnSetCaption( &_this->BtnStart, EwLoadString( &_Const0064 ));
  CoreRectView__OnSetBounds( &_this->BtnStop, _Const0065 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BtnStop, 0 );
  FlatActionButton_OnSetCaption( &_this->BtnStop, EwLoadString( &_Const0066 ));
  CoreRectView__OnSetBounds( &_this->HorzBar, _Const0067 );
  FlatHorzBar_OnSetCurrentValue( &_this->HorzBar, 0 );
  CoreRectView__OnSetBounds( &_this->Indicator, _Const0068 );
  CoreRectView__OnSetBounds( &_this->TextEditor, _Const0069 );
  ApplicationTextEditor_OnSetWrapText( &_this->TextEditor, 0 );
  ApplicationTextEditor_OnSetString( &_this->TextEditor, EwLoadString( &_Const006A 
  ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const006B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const006C );
  ViewsLine_OnSetWidth( &_this->Line, 2 );
  ViewsLine_OnSetColor( &_this->Line, _Const0061 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NameText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BtnStart ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BtnStop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorzBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Indicator ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextEditor ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  ViewsText_OnSetFont( &_this->NameText, EwLoadResource( &FlatFontM, ResourcesFont 
  ));
  _this->BtnStart.OnAction = EwNewSlot( _this, ApplicationSampleController_onStart 
  );
  _this->BtnStop.OnAction = EwNewSlot( _this, ApplicationSampleController_onStop 
  );
  _this->NewWellObserver.OnEvent = EwNewSlot( _this, ApplicationSampleController_onNewWell 
  );
  CorePropertyObserver_OnSetOutlet( &_this->NewWellObserver, EwNewRef( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetNewWell, DeviceDeviceClass_OnSetNewWell 
  ));
}

/* Re-Initializer for the class 'Application::SampleController' */
void ApplicationSampleController__ReInit( ApplicationSampleController _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->NameText );
  FlatActionButton__ReInit( &_this->BtnStart );
  FlatActionButton__ReInit( &_this->BtnStop );
  FlatHorzBar__ReInit( &_this->HorzBar );
  FlatIndicator__ReInit( &_this->Indicator );
  ApplicationTextEditor__ReInit( &_this->TextEditor );
  ViewsLine__ReInit( &_this->Line );
  CorePropertyObserver__ReInit( &_this->NewWellObserver );
}

/* Finalizer method for the class 'Application::SampleController' */
void ApplicationSampleController__Done( ApplicationSampleController _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationSampleController );

  /* Finalize all embedded objects */
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->NameText );
  FlatActionButton__Done( &_this->BtnStart );
  FlatActionButton__Done( &_this->BtnStop );
  FlatHorzBar__Done( &_this->HorzBar );
  FlatIndicator__Done( &_this->Indicator );
  ApplicationTextEditor__Done( &_this->TextEditor );
  ViewsLine__Done( &_this->Line );
  CorePropertyObserver__Done( &_this->NewWellObserver );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::SampleController' */
void ApplicationSampleController__Mark( ApplicationSampleController _this )
{
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->NameText );
  EwMarkObject( &_this->BtnStart );
  EwMarkObject( &_this->BtnStop );
  EwMarkObject( &_this->HorzBar );
  EwMarkObject( &_this->Indicator );
  EwMarkObject( &_this->TextEditor );
  EwMarkObject( &_this->Line );
  EwMarkObject( &_this->NewWellObserver );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationSampleController_UpdateLayout( ApplicationSampleController _this, 
  XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationSampleController_UpdateViewState( ApplicationSampleController _this, 
  XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application::SampleController.OnSetNameProperty()' */
void ApplicationSampleController_OnSetNameProperty( ApplicationSampleController _this, 
  XChar value )
{
  if ( _this->NameProperty == value )
    return;

  _this->NameProperty = value;
  ViewsText_OnSetString( &_this->NameText, EwNewStringChar( _this->NameProperty, 
  1 ));
}

/* 'C' function for method : 'Application::SampleController.onStart()' */
void ApplicationSampleController_onStart( ApplicationSampleController _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwStringParseInt32( ApplicationTextEditor_OnGetString( &_this->TextEditor 
      ), 0, 10 ) > 0 )
  {
    FlatHorzBar_OnSetMaxValue( &_this->HorzBar, EwStringParseInt32( ApplicationTextEditor_OnGetString( 
    &_this->TextEditor ), 0, 10 ));
    FlatHorzBar_OnSetCurrentValue( &_this->HorzBar, EwStringParseInt32( ApplicationTextEditor_OnGetString( 
    &_this->TextEditor ), 0, 10 ));
    ApplicationSampleController_OnSetEnabledProperty( _this, 1 );
    DeviceDeviceClass_StartSampling( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
    ), EwStringParseInt32( ApplicationTextEditor_OnGetString( &_this->TextEditor 
    ), 1, 10 ), EwStringParseInt32( EwNewStringChar( _this->NameProperty, 1 ), 0, 
    10 ) - 1 );
  }
}

/* 'C' function for method : 'Application::SampleController.OnSetEnabledProperty()' */
void ApplicationSampleController_OnSetEnabledProperty( ApplicationSampleController _this, 
  XBool value )
{
  if ( _this->EnabledProperty == value )
    return;

  _this->EnabledProperty = value;

  if ( _this->EnabledProperty )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BtnStart, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BtnStop, 1 );
  }
  else
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BtnStart, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BtnStop, 0 );
  }

  FlatIndicator_OnSetActive( &_this->Indicator, _this->EnabledProperty );
}

/* 'C' function for method : 'Application::SampleController.onStop()' */
void ApplicationSampleController_onStop( ApplicationSampleController _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationSampleController_OnSetEnabledProperty( _this, 0 );
  DeviceDeviceClass_StopSampling( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
  ), EwStringParseInt32( EwNewStringChar( _this->NameProperty, 1 ), 0, 10 ) - 1 
  );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationSampleController_onNewWell( ApplicationSampleController _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->EnabledProperty )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BtnStart, 1 );
  }
}

/* 'C' function for method : 'Application::SampleController.OnSetRemainingTime()' */
void ApplicationSampleController_OnSetRemainingTime( ApplicationSampleController _this, 
  XInt32 value )
{
  if ( _this->RemainingTime == value )
    return;

  _this->RemainingTime = value;
  FlatHorzBar_OnSetCurrentValue( &_this->HorzBar, _this->RemainingTime );
}

/* Variants derived from the class : 'Application::SampleController' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSampleController )
EW_END_OF_CLASS_VARIANTS( ApplicationSampleController )

/* Virtual Method Table (VMT) for the class : 'Application::SampleController' */
EW_DEFINE_CLASS( ApplicationSampleController, CoreGroup, "Application::SampleController" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationSampleController_UpdateLayout,
  ApplicationSampleController_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSampleController )

/* Bitmap resource : 'Application::Logo' */
EW_DEFINE_BITMAP_RES( ApplicationLogo )
  EW_BITMAP_FRAMES( ApplicationLogo, Default, EW_DRIVER_VARIANT_RGBA8888, 646, 643, 0 )
    EW_BITMAP_FRAME( 182, 229, 273, 334, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( ApplicationLogo, Default )                   /* ratio 3.15 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x188BC5A2,
    0xC8DC6A33, 0x8FC7A3B1, 0x1C8A4320, 0xC9A4B249, 0xAA532893, 0xA5B2C95C, 0x633097CB,
    0xB3499CCA, 0x389BCDA6, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0xD1A8B44A, 0x2A9348A3,
    0xA9B4CA5D, 0xA350A7D3, 0xB54A9D4A, 0x58ABD5AA, 0xCADD6AB3, 0xAFD7ABB5, 0x1D8AC360,
    0xD9ACB64B, 0xAAD368B3, 0xADB6CB5D, 0xE370B7DB, 0xB74B9DCA, 0x78BBDDAE, 0xCBDDEAF3,
    0xBFDFAFB7, 0x1E0B0380, 0xE1B0B84C, 0x2B1388C3, 0xB1B8CC5E, 0x2390C7E3, 0xB94C9E4B,
    0x98CBE5B2, 0xCCDE6B33, 0xCFE7B3B9, 0x1E8B43A0, 0xE9B4BA4D, 0xAB53A8D3, 0xB5BACD5E,
    0x63B0D7EB, 0xBB4D9ECB, 0xB8DBEDB6, 0xCDDEEB73, 0xDFEFB7BB, 0x1F0B83C0, 0xF1B8BC4E,
    0x2B93C8E3, 0xB9BCCE5F, 0xA3D0E7F3, 0xBD4E9F4B, 0xD8EBF5BA, 0xCEDF6BB3, 0xEFF7BBBD,
    0x1F8BC3E0, 0xF9BCBE4F, 0xABD3E8F3, 0xBDBECF5F, 0xE3F0F7FB, 0xBF4F9FCB, 0xF8FBFDBE,
    0xCFDFEBF3, 0xFFFFBFBF, 0xE0280600, 0x68160480, 0x260881E0, 0x0C82E0A8, 0x83E0E836,
    0xE1284610, 0x68561484, 0x661885E1, 0x1C86E1A8, 0x87E1E876, 0xE2288620, 0x68962488,
    0xA62889E2, 0x2C8AE2A8, 0x8BE2E8B6, 0xE328C630, 0x68D6348C, 0xE6388DE3, 0x3C8EE3A8,
    0x8FE3E8F6, 0xE4290640, 0x69164490, 0x264891E4, 0x4C92E4A9, 0x93E4E936, 0xE5294650,
    0x69565494, 0x665895E5, 0x5C96E5A9, 0x97E5E976, 0xE6298660, 0x69966498, 0xA66899E6,
    0x6C9AE6A9, 0x9BE6E9B6, 0xE729C670, 0x69D6749C, 0xE6789DE7, 0x7C9EE7A9, 0x9FE7E9F6,
    0xE82A0680, 0x4A1684A0, 0x3D031566, 0x02A2E893, 0x0C503321, 0xE92A4686, 0xCA5694A4,
    0xE503151C, 0x9B3FD033, 0xA7102A76, 0x90339502, 0x6A96960C, 0xA6A8A9EA, 0x0311DA0A,
    0x0029E3E1, 0x6AFAC2A0, 0x3356B1AC, 0xE6AA0090, 0xBCAEEBAA, 0x04974AF6, 0xEB332D03,
    0x0B129FB0, 0x41033F80, 0xCCB2EBE2, 0xB3ECEB36, 0x2C620550, 0x1B1AD3AD, 0x403E40CF,
    0xDCB6EDAB, 0x492DEB76, 0x4E940C17, 0x2B96C5B5, 0x9AD4B9AB, 0x0840CCDB, 0xBBEEEB7C,
    0xEEEBC6F0, 0x6B9EE420, 0xD6F7BA6F, 0xFCBCA98B, 0xBFEFEBF6, 0x10307291, 0x6BE2F53A,
    0x0EC1C170, 0x0CC00074, 0xC3F0EC37, 0x30815E6B, 0x4BE713BA, 0x405C40B1, 0x1CC6F1AC,
    0xC0A4EC77, 0xF1536902, 0x6C5B17C1, 0x0CF4AC72, 0x2CC7B204, 0xCBF2ECB7, 0xF232122F,
    0x6C9325CC, 0x11032F6F, 0x3CCEF300, 0x8433ECF7, 0x0EA40AA4, 0x6D1327CD, 0x2102B233,
    0x4CD2F3F1, 0x7CF4ED37, 0x73840B3A, 0x4D5746CD, 0x0AC240B5, 0x5CD3C1A4, 0xD7F5ED77,
    0x756109D6, 0x6D9357D1, 0x8060BE36, 0x6CDAF6AD, 0x00DB9DB7, 0xB632F103, 0xCDCF74CD,
    0xB8180028, 0x7CDEF7AD, 0xD899CDF7, 0x7763F502, 0x5E1375D9, 0x277EBD2F, 0x8CE2F8AE,
    0xE0CC060B, 0x385E4367, 0x940AE300, 0x6798E342, 0x62E6F9AE, 0x3EC00BED, 0x786E8792,
    0x140CDED9, 0xA7A8E72E, 0x40EAFAAE, 0xE8B03045, 0xFB1E8F91, 0xC1EEB1EC, 0xE7B8EDFA,
    0xAE4A3BAE, 0xEFF93EC0, 0xCE740FBE, 0x6EEC1540, 0x27C8F1FC, 0x02B0107F, 0xECBC138D,
    0xB15F43C0, 0x6F57CAED, 0xF79CF5FD, 0xDBED3CF1, 0x3AC00F47, 0xFD80E103, 0xDF97E4F8,
    0x09030EB5, 0xDCFAFD2E, 0xE4FDEFB3, 0x80940CB9, 0x6FD7F4F9, 0x74B1C6FF, 0x44FBBFAF,
    0xFFFF71C3, 0xB7200C00, 0xFDBE90DA, 0xEF80EFB5, 0x06381A23, 0x3A0100C2, 0x9C1081F0,
    0x1204EB94, 0x9026030E, 0xA03C187F, 0xC1C82229, 0x4F307A0E, 0x08A0B071, 0x00417833,
    0x342063DC, 0x570AA0F8, 0x3D30C2C8, 0x24152060, 0x1006EFA1, 0xC0695800, 0xA11C0801,
    0xC2D154BD, 0x87F0FA1E, 0x0E835251, 0x0F83E7DF, 0x3D0EEAC0, 0xD90CA1C8, 0x84812AE7,
    0x8C508801, 0xD47314A2, 0x710DE102, 0x02308864, 0x05F172AC, 0x0320C958, 0x09630C4A,
    0x150007D5, 0x688CF14C, 0xDA88634C, 0x5C579025, 0x70227A11, 0x81563FDD, 0x63095805,
    0xC49AB00C, 0x00C56012, 0x87518803, 0x0BC818CA, 0x42C848D5, 0x6641921A, 0x04ED2378,
    0x347FC350, 0x00FF6942, 0x81FF1E06, 0x83FE2E8B, 0x15806518, 0xC7F05E17, 0x05D01E25,
    0x28A50C87, 0x059F9947, 0x8A1AE40C, 0x38169DFC, 0x885F8FF9, 0xE4968B61, 0x6174AC22,
    0xEAC24AC9, 0xA12B7905, 0x8D06892E, 0x9491F881, 0x30A60CC0, 0x4F4893C9, 0x2766B2EE,
    0x58AC00A0, 0xED580591, 0x90FF6D22, 0x69633465, 0xEAC24949, 0xA4E84510, 0x8797BD36,
    0x9BF37A61, 0xF30E8CE0, 0x634A8000, 0xD7918E4A, 0x823FE6CC, 0xBA694931, 0xB4B39A93,
    0xD9A02F24, 0x731D7082, 0xC7B2F59B, 0xCE18CC40, 0x9FF3FA7E, 0x2A4501BC, 0x6745F60B,
    0xB09DF342, 0x1534E84C, 0xFE578BEA, 0x804E12E3, 0x76160395, 0x4BD68ACF, 0x1A890251,
    0xD1CA3740, 0x73C68E8E, 0x48A7329A, 0x1B86B561, 0x0A0C91D8, 0x5742E845, 0xA061D2AA,
    0x849B1FF4, 0x391A0055, 0x0D21B2D0, 0xA8F05600, 0xD3CA774E, 0x20606CC8, 0xD9E9A8D6,
    0x58016058, 0xFF6322CD, 0xE141C5D0, 0xAAA652C9, 0x78BD9A54, 0x50503FE2, 0x148E8B3C,
    0x55B8CC5F, 0xD5CAB74F, 0x1105F6AE, 0x02DBA542, 0x45AB000A, 0x0E922AB0, 0xD753AA7D,
    0x4A79529A, 0x80501395, 0x1A280355, 0x54DD6356, 0xABCD5E11, 0x169AF75E, 0x97A40AB2,
    0x159C9557, 0x62AB0058, 0x6DAD54BC, 0x15536C4D, 0x49584ECB, 0xC5568CC1, 0x31DEC967,
    0xF5F01E10, 0x6CCD98B2, 0xD750F055, 0xAAA0A59A, 0x2CC2F0B7, 0xC458AA97, 0xD2B4F62E,
    0x475485E4, 0x25580531, 0x8D916740, 0x251CABED, 0xF669F990, 0x2DCDB8B6, 0x9030504F,
    0x64F6747A, 0xAC02087F, 0xB65A89AC, 0xC6B4B716, 0xD4AC2575, 0x3AC90360, 0xD08766D7,
    0x4BA774AD, 0x356496DD, 0xACFCC6B0, 0xDC896942, 0xBBF71EEE, 0x3C6A54D2, 0xD95DA561,
    0xED001762, 0xAB4FC818, 0xBAF6DECB, 0x287F2297, 0xDA2B79E0, 0x370C2007, 0xAD35C6AD,
    0xDC6BF37E, 0x140AC2A8, 0x01558052, 0xE7DE6570, 0xEF11240E, 0x1782B04D, 0x0C10800C,
    0x9DF3B284, 0x106A199B, 0x23307F80, 0x85C2B00D, 0x5FCBC168, 0xB157EEEF, 0x1B87FDCA,
    0xF3E06072, 0x80204CA6, 0x578AB063, 0xFC47598C, 0x857360D6, 0x50EA3895, 0xA1FC7AE1,
    0xB0E4B6C2, 0xE3AC3B87, 0x56133E95, 0x0870D8B6, 0x6362F8E4, 0x2C90430D, 0x3B92B24E,
    0xB88183BA, 0x9A9FC8A3, 0x510AAC29, 0x03FF0A84, 0x442E5611, 0x8721BD85, 0xC779070A,
    0x87F1EE60, 0x26D2F9D7, 0x68C0B6F0, 0x962C881E, 0x0736E6CC, 0x3000B6D3, 0x15EF9406,
    0xA3FDAD83, 0xC7FE5A1F, 0x0FFCF23F, 0x1F585442, 0x3030A882, 0x30E1AA1C, 0xC6D0F98F,
    0x683FEF15, 0x081BD481, 0xD523CD2C, 0xEB4440C7, 0x7A5B4AE6, 0xB398858A, 0xE568E8C1,
    0xCFD95844, 0x9EF5067A, 0x3B8E7C2B, 0x62BB9854, 0xBDA231E6, 0x3C4D621B, 0x847E8F81,
    0x279D73B4, 0xFA5E7190, 0xE076B8D6, 0xE9AC1E0F, 0x03A0DD4D, 0xA047BAB0, 0x62E9FD43,
    0x86CF5B13, 0xBA3770A8, 0x745B0FFC, 0x8EAAD0C1, 0xF18577B6, 0x4F883752, 0x43A605D6,
    0xEDCDB7AE, 0x204AE1F2, 0xA7F5E8BE, 0x7FB7000A, 0x560E2368, 0xFBB1843E, 0x83516EBC,
    0xA8811F3A, 0x2C334370, 0x7B4354ED, 0x2D0C96BB, 0x81E072AC, 0x817BFB12, 0xB7623102,
    0xDCF04E07, 0xE21F98A5, 0x9A259586, 0x1F2C6560, 0x770FDD9B, 0x8CF3BAF7, 0x78E03C0E,
    0xB7B6ABC3, 0xE219A5C6, 0xC0980B85, 0x2C158F09, 0x92F24E0A, 0x03020E63, 0x81C84609,
    0xD07FE0E0, 0xE67ADE23, 0xDE23C4B3, 0x23FB636E, 0x0340CACF, 0xF1BD9F90, 0xE39C677A,
    0x0802050E, 0x32605DFC, 0x266721F2, 0xBFD2BA4F, 0x279087A6, 0x90FFAC80, 0x5E1A1B46,
    0x1D5B9A73, 0xB3CF58E2, 0x6150F83B, 0xE7D252FF, 0x3FF7BF60, 0xB8D6F17C, 0x0A0263FE,
    0x10EC3A20, 0x2C09902E, 0xDF70EDFD, 0x72058919, 0x709308C2, 0x87FCAC0B, 0x733EAFA7,
    0xEFFDF7AC, 0x3FF64E56, 0x2F0791D2, 0x61E7FCF3, 0xFF6378D7, 0xA82488E1, 0x4464A47D,
    0x4F27DC70, 0x104D86F9, 0x3908C500, 0x0FF5DA04, 0xDD21B068, 0xE87BF755, 0x7EF56F01,
    0x041A9A80, 0x7BBE87FC, 0xAB8CF62E, 0x0D90B1D6, 0x274040F9, 0xFE541990, 0x56FFB8F6,
    0xCDBEED08, 0x11795B85, 0xDF3E0FA3, 0x7F710F85, 0x8918DA80, 0x13C63D54, 0xBEEF788F,
    0x68AE1FFE, 0x30243FE6, 0x0E436C3F, 0x6BF1031B, 0xFDCFB7EE, 0x001C0954, 0x2EBDE3A5,
    0x7B2B0CCD, 0xC3D47B0C, 0xD5E8BF4F, 0x973CF7DF, 0x38B7C2BA, 0xEFE7F33C, 0xF4BC60DD,
    0xBC78300B, 0x88DA6F73, 0xFFFFFBEE, 0x210AD294, 0xD40D0177, 0x67A79F79, 0x0A7EB70E,
    0x480B7A48, 0x7C67337C, 0xB07C8615, 0x47AD7F12, 0x63F5DF7F, 0x750AD0FF, 0xA6430FF4,
    0x6275917F, 0x0064D000, 0x88248238, 0x5F206727, 0x7134681E, 0xC67A3E80, 0x82F80E08,
    0xE88307EC, 0x507E0F37, 0x68578B61, 0xA68397AC, 0x708A78B5, 0x7D64E856, 0xEC0D149E,
    0x58448252, 0x02626884, 0x210DF103, 0x000D0197, 0x06A0CA2B, 0x528317A0, 0xD85380D8,
    0x0E678277, 0xF26CD6A6, 0xF85C8157, 0x0586215D, 0xCE840455, 0x584605A5, 0x25F86686,
    0x9F7B20A8, 0xF49008C2, 0x8557C00F, 0x7280C832, 0x57377C28, 0x8136E761, 0xCD85D7CB,
    0xB4F35A77, 0x02681B4C, 0xF786276E, 0xE1030F04, 0x88786760, 0xFC24D888, 0x24FA0004,
    0x0483467E, 0xFC2B0025, 0x08738090, 0x85489687, 0xFC679898, 0x46150830, 0x8796196D,
    0xD281683A, 0x46534774, 0x88E53204, 0x0272349E, 0xD88930B1, 0x2408AE8A, 0x058030A3,
    0x10700D48, 0x89589885, 0xBA8718B7, 0x36156C88, 0x89F0750E, 0x898A287A, 0x90304D06,
    0x2F686A4B, 0xCA8AF4CD, 0xB2338CB8, 0x00472108, 0x67088604, 0x98BB86E5, 0x8B88978B,
    0x157818D8, 0x006B0D06, 0x85B0B52B, 0xB08C18A1, 0x80A67CF2, 0x0080FF28, 0xF38C75B0,
    0xC6C01030, 0x8EF8EE8C, 0x023E8222, 0x88A88EB1, 0x46002F40, 0xD98D5808, 0x18FA8D78,
    0x0F76797A, 0xC9811080, 0x587B8387, 0x6F35C690, 0xF607C0FF, 0x50070FF5, 0x62E8C76E,
    0x129118F0, 0x04BF2159, 0x82951800, 0xB04343EE, 0x404B0912, 0x91F8FC75, 0xFB9218D6,
    0xC0EF7E88, 0x8E275F75, 0x985A78E1, 0x704D2B04, 0x4DA91802, 0xD9000775, 0x59349134,
    0x91020893, 0x784BA92F, 0xD7BF03E0, 0x9239208F, 0x79832940, 0xF6E80DC6, 0x9288DF0F,
    0xCF50A906, 0xF60109F7, 0x75000A0F, 0x005B48C7, 0x59363C50, 0x1F795695, 0xD7103023,
    0x33EF8F52, 0x0E867603, 0x3F8DA07A, 0x492293E9, 0x68089596, 0x270C8615, 0x29487CA8,
    0x4935C38C, 0x82596076, 0x70B83908, 0x97797695, 0x210911EF, 0x75B00077, 0x65605F0B,
    0x8296608A, 0x89849639, 0x0ED78275, 0x6E6A707B, 0x05E19299, 0x81C65F4D, 0x19973728,
    0x71026924, 0x99797882, 0x511DD998, 0x28201030, 0x06D3B499, 0x810FF6D7, 0x49419859,
    0x8989839A, 0xCC0DC782, 0xB98C9476, 0x86C90898, 0x398E82B0, 0x30E43639, 0x9994CA10,
    0xCC9B99B8, 0x17748A61, 0x6B100A72, 0x620740E0, 0x59A69659, 0x9C79C49C, 0xC30FB6A0,
    0xB7C90C76, 0x9AD9497A, 0x2D78B2B0, 0x149E9B39, 0x6DF1025F, 0xDA9D99BA, 0xD7281BA9,
    0x0FF8C728, 0x1E0530A2, 0x59A79C89, 0x9C69E49A, 0x610EC782, 0xF8180FF9, 0x4969EE9C,
    0x2C75E6A8, 0x24DA9D47, 0x9F79DB3E, 0xDA1B29F8, 0xB34695C3, 0x0FF84804, 0x3189C0F7,
    0x6A049E57, 0x8B89E69C, 0xD80FF6EA, 0xD85A3FE0, 0x62192896, 0x0204D098, 0xC9FC90E6,
    0x1030D93E, 0x1A9F9438, 0x51A1A1BA, 0x3C310254, 0x313B4A15, 0xC0DB0FF6, 0xA090FF6C,
    0x07A299E7, 0x3A2AA05A, 0x0F661571, 0x5E0FF901, 0xF98B9047, 0x03D6219C, 0xF799E446,
    0x80007924, 0xA3FA1C9D, 0xB6192A40, 0x20A09DF0, 0x77B67A9E, 0x2CA06A2D, 0x9920A2BA,
    0x61598867, 0xEF639818, 0xE75E85D9, 0x0FF99B09, 0xDF805019, 0x19961039, 0xA5FA5EA4,
    0x02499186, 0xF9F49941, 0x54502A3B, 0x300F60FF, 0xDA497E87, 0xA6EA4CA6, 0xD8962A4B,
    0x08DE06F0, 0x839A538E, 0x6591C78B, 0x23BD363A, 0xA607DA10, 0x74A81A80, 0x21026FD1,
    0x7509BE0E, 0x6F8B6492, 0xAA71A8BA, 0x810984A4, 0x0D8DD79D, 0xE9299D0A, 0xA7B86075,
    0x82478419, 0xDA9CA9BA, 0xA213F916, 0x350673EF, 0xD77A2B00, 0xA8EA70A8, 0x79A6DAA7,
    0x26F28346, 0xA0EA3455, 0x1987D71A, 0x101F7D28, 0x0E68C799, 0x9D5CD103, 0xCABCABBA,
    0x38144215, 0x15583721, 0x2A280FD6, 0xA8CAA673, 0x6DAC8AA8, 0x60E4782A, 0xAB078607,
    0x8D5C49CF, 0x30FF78E0, 0xAA072000, 0x192B6315, 0xDADCABD5, 0x84D14CAD, 0xD884A102,
    0x084C384A, 0x06E0D32B, 0xEAAC7A8A, 0x4AEBAC9A, 0x61589B85, 0xD087852E, 0x475E816A,
    0xA3A53F03, 0xDE093363, 0x3AFCAFBA, 0xAE35D114, 0xA478D3B4, 0xAAA986FA, 0xAEDB06AC,
    0xAB70FB07, 0x3491835A, 0xA94AAF49, 0xA7818719, 0xB0FF5390, 0x407A9879, 0xBC1030F2,
    0xDB1CAFD9, 0x2D2130B1, 0x233BFB00, 0xF0FF2C00, 0xA6CB0C0E, 0x08B05B09, 0x2920B2BB,
    0x6DA0E178, 0x16B1096C, 0xD0726218, 0x6E40FF64, 0xCE3DEB17, 0xDB1E8430, 0x120B3EB3,
    0x4D1025BC, 0x6305B394, 0x9E30670C, 0x2CB49B29, 0x9AA8B2AB, 0x4420CE67, 0xCFA77A93,
    0x70FF92B9, 0x419AF8A9, 0x5AB3F05B, 0xA114B5BB, 0x72109F51, 0xC207D83F, 0x20FC0FF5,
    0xB67B4C78, 0x6AAECB4A, 0x5615759B, 0xAF371792, 0xAF81885D, 0x40FF8640, 0x8C7B2402,
    0xAC00088D, 0xDB7CB5C2, 0x8C9106B7, 0x44384B44, 0x9A479590, 0xB69B4B65, 0x83B87B68,
    0xF0FF8759, 0x6380730D, 0x8B98BA35, 0x73620807, 0x359461B5, 0x7E797000, 0x6B1CB9BB,
    0xAB80009F, 0x172D3B21, 0xD0FF4A60, 0x8BCB8F0D, 0xAAB88B6B, 0x2AA8B8AB, 0x73B61778,
    0xA871AB70, 0xF0366A86, 0x102A5B68, 0xBAB9C082, 0x7915ADDB, 0x327B815D, 0x1D91BAD6,
    0xCBA9B859, 0xBC5B89BA, 0x15900B6A, 0x09CD0C56, 0x6F5B528A, 0x769ACAB2, 0x0393BBFB,
    0x3791023E, 0x81BD9BBB, 0x4BA1578A, 0x72D03F38, 0xABBC6657, 0x5BC7BC8B, 0x9E96A2BE,
    0xCFB0F9EB, 0xA78B762B, 0xB962D907, 0xDA0BA425, 0x6A3FBF3B, 0x95B1025F, 0x132B3BD4,
    0xE0E32B05, 0xBE6BA8AC, 0xE4C01BE2, 0xA782ACAB, 0xB518B50D, 0x8A762B91, 0x9A388386,
    0x7B4365BF, 0xF4618000, 0xD999C13B, 0x79910240, 0x06327BDD, 0x109B6E50, 0xC02B4805,
    0x20C03C00, 0xFBCAAC8C, 0xA527CF0F, 0x0871AC09, 0x05AEA569, 0x336C1995, 0x14822464,
    0x6936C33C, 0x0699DF08, 0x2382D5CD, 0xDC22C3BC, 0x615AAAC3, 0xB10760E5, 0xE50EA36B,
    0xBB766704, 0x022EB000, 0xDC34B9A1, 0x5118ADC4, 0x2FB19102, 0x047D2B3C, 0x9C39AA2B,
    0x5AC21BE3, 0x2C5CC59C, 0xBFEACC83, 0x0AB32814, 0x14D04F2C, 0xC0E02204, 0x3DB203B3,
    0x5C6CC4EA, 0x0008F284, 0x35C535BE, 0x8AA45CC3, 0xC3EC5DA4, 0x3CC5BC77, 0xF6157A6C,
    0xBEBB31BA, 0x9D50EC2A, 0x9012A570, 0x344BF076, 0x8AC6D429, 0xF0B3800C, 0x9FF0489D,
    0x036370EF, 0xAC3CC78A, 0xB6BC94C7, 0x920F4679, 0xBC299EDC, 0xA7A5C487, 0x688D00FF,
    0x04E5336C, 0xC8B4A600, 0x80771CA8, 0xBCA3521B, 0x6B100B29, 0xE19450D7, 0x5C96C97B,
    0xCB7C79CB, 0xD56158FE, 0x3A7506E0, 0x621789C4, 0x876FD03B, 0x0AFF3ECC, 0xCA943500,
    0x6E6DDCC8, 0x6A874147, 0xC1F05D54, 0xD1CB8CB4, 0xFBE3C95C, 0xB4F0FFAE, 0x2AC62BB0,
    0xC093552C, 0xC0FCAD04, 0xE2CC928F, 0x0A1E696C, 0xC7264700, 0xA005A327, 0x69A367A4,
    0xCEFCD4CB, 0x15C98CD3, 0x0C26AAC6, 0xCBEC284D, 0x7875E5DE, 0x6CDF8A77, 0x670CA532,
    0xEFD01CE3, 0x4000CC75, 0x0149DF0A, 0xE979EC86, 0xCCEECF1A, 0xD0DCD2D0, 0x337820FF,
    0x09AC6156, 0x6A8719C8, 0x352B07F6, 0x78C7AF70, 0xD0245D53, 0x2B5EDD20, 0x09DF2990,
    0xD0E93D51, 0x0FD10CF0, 0x0AC3D2BD, 0xACF8DC6A, 0xAB7AECDA, 0x00FF2985, 0xCE8AB602,
    0x00BA02F8, 0xDD217730, 0x46C597D3, 0x669DFC49, 0x86150340, 0xB28A020F, 0x28D2CD29,
    0x9BE5D4BD, 0xB0C0F267, 0x31CF7908, 0x783C63CD, 0xCC3BC156, 0x028423B3, 0xDD3E3701,
    0x4DD55CD5, 0x452B3D38, 0x88920240, 0xD4AB66A2, 0x6AD49D2A, 0xE782C3ED, 0xD53CBDB8,
    0x317CF762, 0xFC488F80, 0xD5E8ABB5, 0x734FFD78, 0x40159DF0, 0x06B0CABA, 0x4CD69D0B,
    0x0D84D68D, 0x0D6A90CF, 0x9DC7FCBC, 0x54D0BD0C, 0x5745728E, 0x01325D61, 0x1D94D796,
    0x8F3D644C, 0x430829DF, 0x382EAA40, 0xD82D6BD8, 0x93D85DA0, 0xE4EB968C, 0x762D8BB0,
    0x2C070621, 0x8CFD6038, 0x10264F2F, 0xB2D95A84, 0x7D04467D, 0x01D9DF0C, 0xE70FF42F,
    0xFD119EB0, 0xDA1DA2D9, 0x4EC20DBE, 0x6C619EBA, 0xB54789D1, 0xC6DAD583, 0xDDB38CE2,
    0xCDE451DC, 0xB0D91AC0, 0x30FF81D2, 0xCD006F0D, 0xDAD9EDC0, 0x0DD9DD9D, 0xA740D7A9,
    0x17CF8C08, 0x0B734D08, 0xB770222B, 0x522B1DD2, 0xE6AF000C, 0x41DDEEDC, 0xDFAE1584,
    0xACCF0B49, 0xDBFB0467, 0xDBDC1DF8, 0x8679DBFD, 0xAF17300F, 0xA7BCE494, 0xA78B5DFD,
    0xC1B2B0D9, 0xAF2E6DCA, 0xFCCB000D, 0x3F4E0EDE, 0x310003A7, 0x62B0E094, 0xA28AC36D,
    0xFADFBDF9, 0x8E19DDCD, 0x9EB0EB7E, 0x19DE26CE, 0xE04BE007, 0x3DED5892, 0x2AE0FA9F,
    0xA51A3D5E, 0x29BDE9AF, 0x2F0FFBFB, 0x5E1DD81B, 0xE36E1BE3, 0x5C679D0C, 0xDD70B6F6,
    0x0B281863, 0x14D36548, 0x9C102B1E, 0xE47E2B2D, 0x2FC423BA, 0x908C2E8E, 0xE38DD804,
    0x52E37E1C, 0xB969E39E, 0xE039CE96, 0x84621663, 0x98E78A60, 0x000E4B8E, 0x0D1030C4,
    0xDE64E48E, 0x1027B638, 0x27E5F304, 0x39A24EAA, 0xE1AE51E5, 0x6CE6FE70, 0xA6360FFB,
    0xE226F498, 0xFF89E63C, 0xFE438900, 0xE65E292A, 0xAC37BE80, 0xF0B50008, 0x0FF5059D,
    0x71B86D46, 0xEE8CE50E, 0x679E1DE6, 0x8AD7B0E0, 0xA58AE78D, 0x5480B568, 0x02E7DDB8,
    0x4A5DCAC1, 0xE9FE81D0, 0x43ABF34F, 0x3881023E, 0xBFF7160E, 0x8EE8BE8D, 0x9CB4EABE,
    0x0FFC7C67, 0x3DAF296A, 0xA78B663E, 0x2F6E9ADA, 0xA07F9537, 0x633EEBBE, 0x9DF3DFBF,
    0x2705009A, 0x4EA9E72D, 0xEC6EACEC, 0xF9679757, 0x7E006C30, 0x52BE94E5, 0x498386A8,
    0x7C489FF0, 0xEBCA1991, 0x9731AED8, 0x7E0B1023, 0xCC12D3E2, 0x310F12B0, 0x5EAAD48A,
    0xEE7EC8EE, 0xA4BE7EC5, 0x2DC68596, 0x5520BB76, 0x152B0DF4, 0xDC48C860, 0xEF7ED9A5,
    0x026702FD, 0x0AB5E6A8, 0x9260EC2B, 0xE9EC7A27, 0xCF04F02E, 0x0D1782D0, 0x0264006C,
    0x2550ECFE, 0x47B09255, 0xD50110FF, 0x30DD8C77, 0xEF8D9710, 0x942DFF18, 0xFE08E436,
    0x69DB130F, 0x21EE8F05, 0x9DDBF03F, 0x07D0F167, 0x0CE01E76, 0x3B545C6F, 0xEDE7B606,
    0x190A53B2, 0x02D0F33F, 0x8F4000DD, 0xFFCA2DAD, 0x00550A50, 0xF3FF2398, 0x72F24EE6,
    0x70E9679E, 0xF2BC9CEA, 0x1CAF558A, 0xA537E5FD, 0xF34D5CC6, 0xDF296F50, 0x372199D7,
    0x809AA4D6, 0x40F41AC6, 0x6F5AF22F, 0xB8EA09EE, 0xED548D14, 0x662163DE, 0x2F8EB756,
    0x6AF5147B, 0xF08F293F, 0x9D174F9D, 0x5BE4F065, 0x3F74F42F, 0x0FBC3CF7, 0x3A0CCA02,
    0x6EB3E937, 0x059AB25C, 0xC783FCEB, 0x5F6B0978, 0x312282F8, 0x43C71102, 0xDF204CCE,
    0xF8FF5CF5, 0x23F8EF75, 0x90EF6799, 0x927F2A98, 0x96E95F7D, 0x74F56214, 0xCC5103F6,
    0x73FA1F86, 0xD0009542, 0x053721ED, 0xFB0FFD23, 0x0F59B660, 0xF92F76F9, 0x8CE6FFAF,
    0xCF090D2B, 0x5A6F63F7, 0xB06007CF, 0x4D9000F2, 0xABAE0BE1, 0x68FC1FA2, 0xF0BF4E32,
    0x7E5D1B9D, 0xCAFB0EEA, 0x1FCBFAEF, 0xEAE80AF9, 0x21F7B738, 0x45DFF99E, 0xDC90FF8A,
    0x953B3F30, 0x24600003, 0x261FDEFC, 0x12E6A66B, 0x30BD2B0F, 0xFCDF7206, 0xEAFCEFB1,
    0x6F94E1BF, 0xE7776492, 0xB252AFD4, 0xF3120AAA, 0x8810250F, 0xDF748D75, 0xF255FFBF,
    0x9DFE9B44, 0x4AAA5100, 0x16FF7F80, 0x0847FC11, 0x0C82C2A1, 0xD8842E13, 0x8943E230,
    0x745E2915, 0x46A27198, 0x6E311C8B, 0xE431D904, 0x49259147, 0x7298F49E, 0x2C934AA4,
    0xD984AE51, 0x994BE632, 0x74DE6935, 0x4EA67399, 0x110D0E9B, 0x60878754, 0xFE002EAD,
    0x1462FAE5, 0x47A4D2A9, 0xCA752E9B, 0xAA546A54, 0x6D3EAD50, 0x518C4BFA, 0x1E8C5452,
    0xC0146020, 0xC5637FD8, 0x165B3592, 0x6DB3DAED, 0x1B4DBAD5, 0xBA5BED97, 0x31280172,
    0x5EEF579B, 0xFEFD7DBE, 0xF0581C05, 0x0D85C260, 0x589C461F, 0x8DC662F1, 0x1C863F1D,
    0xCA64F259, 0xC65F2D95, 0x66F3599C, 0x7F3D9DCE, 0xF45A1D06, 0x4DA5D268, 0x5A9D469F,
    0xADD66AF5, 0x1D86BF5D, 0x0C65365B, 0xADD9C166, 0x6EF7173B, 0xFAE1BDDD, 0x8645F7FE,
    0x10837C51, 0xBC99DA16, 0xCC9C72A7, 0x1E5F3679, 0xE7F4FA1D, 0x975F9DD5, 0x763B3D6E,
    0x77B5DCEA, 0x218FD7FF, 0x6D4636B5, 0x357A9979, 0xEDF5D63D, 0xEAA7B2AB, 0x363FEB6B,
    0x10128C37, 0xEE7F5BF0, 0x03FBBCFD, 0xB31D6BB7, 0x40AD9820, 0x30440F03, 0x64170541,
    0x1F0741B0, 0x09423084, 0x42B0A427, 0x30C42F0B, 0xE4370D43, 0xCC0DB650, 0xFE3FC662,
    0x44B11446, 0x813AE700, 0x31F8A302, 0xB6E420AE, 0x193C1183, 0x3BD1A3BF, 0x11AC631B,
    0xDC671BC7, 0x751E4731, 0x17C65204, 0xA083F9ED, 0x0A30C25D, 0x73DEF417, 0x9F263D4F,
    0x6249D274, 0x88EA30CA, 0x92C3FE12, 0x34B313C4, 0x3A510011, 0x314C3304, 0x4CB324C7,
    0x3344CF33, 0x64D7354D, 0xDF374DB3, 0x0ECE3384, 0x4B52E94B, 0x93B4B72E, 0x301A0CAE,
    0x1034190A, 0x4147A43A, 0xD0B1F483, 0xD4447F41, 0x550F4250, 0x1F465134, 0x6DC5F20D,
    0x96C820E2, 0x2F84A0A2, 0x6D374CCA, 0xC05DA9B2, 0x2C95AA30, 0xC080FA8C, 0x1544EB3C,
    0x31F8FF4F, 0x5F3909AB, 0x59563585, 0x56B5A567, 0x35C56F5B, 0xE5775D57, 0x410ED7B5,
    0x549F6B1D, 0xD4F624EF, 0x027932B9, 0x75204621, 0x9B675174, 0x6951B685, 0xD9F69D99,
    0x96A5A36A, 0x81B517BB, 0x965BA083, 0x7153B4D4, 0x984F7531, 0x639A8C31, 0x35876287,
    0xE8B65D76, 0x5F06AB31, 0x5EB7A5E7, 0x37C5EF7B, 0xE5F77D5F, 0xFF7F5FB7, 0xB303F345,
    0x60B761B6, 0x210CF155, 0x29E4A302, 0xAD6CC5D2, 0x885B187D, 0xE2B89627, 0x188E2F6B,
    0xF2598A63, 0xA862A187, 0x71DBE7FC, 0x64B725C3, 0xF50174A8, 0x9A8CA21F, 0x5F770341,
    0xB366376E, 0x66B8015A, 0x39C66F9B, 0xE6779D67, 0x7F9F67B9, 0x4C34DA06, 0x6899860C,
    0xC0783ABA, 0x00DA6828, 0x37A76334, 0xA8E2DA7E, 0x6A1A9635, 0xDAC6ABAB, 0xE9E717A1,
    0x47942083, 0xB0E4D4E6, 0xC905E49D, 0xC2E1687F, 0x965C1928, 0xB7A2E0F9, 0x2B2CC7BC,
    0x6EBBA682, 0x3BC6EFBB, 0xE6F7BD6F, 0x2DBF6FBB, 0x7F2CC3F3, 0x6DDC268C, 0x032184BA,
    0x66A64521, 0x1FAA6AFC, 0xC8EB3C6F, 0xF27C7721, 0x27FA7E89, 0x5A8C361A, 0x3FB06C59,
    0x7397F27F, 0x0984A1FF, 0xE02814A3, 0x6EDBD56D, 0x24B31B8B, 0xD9763BF8, 0x76BDA767,
    0x3DC76FDB, 0xC355DD77, 0x8DD5F0A3, 0xCC45774E, 0x78BCAF25, 0x1CA78FE2, 0x4F8DCB79,
    0x8691F9BE, 0x29A08404, 0x6C770493, 0x192741EB, 0x90D0A371, 0x7DEF7597, 0xB3184FE7,
    0x7CBDD82C, 0x3F47CFF3, 0x67D7F57D, 0x5D397DBF, 0xC3404B1E, 0x049A37C1, 0x4741FFD8,
    0x5F99A68F, 0xFFFE795E, 0x9D005FF7, 0x2201C007, 0xE8F1730A, 0xE7AEC85A, 0xEC920639,
    0x85814653, 0x01428C16, 0x7E6EFC05, 0x278FD417, 0x0E41B7DC, 0x1F83D076, 0x45086104,
    0x54BDC238, 0xF4187E82, 0x602A0A1E, 0x61D06E14, 0x5FEC027F, 0x43186501, 0x86B0121A,
    0x8BDABC30, 0x06C2E1C2, 0x3F64902E, 0x8C7C8A6C, 0x182408C2, 0xB00701A5, 0x95DB1260,
    0x8A8CB30F, 0x62844F84, 0x4538A514, 0x8AD1562A, 0x58CFCA66, 0x2542711C, 0x8A2889D6,
    0x6D0CE1BB, 0x961C4638, 0x0C668C51, 0xD730C463, 0xA798350C, 0x61F3D87A, 0x31F28D1C,
    0x060178A3, 0xD121445D, 0xD49661A4, 0x7F8FD15D, 0x05206404, 0x16424839, 0xE0762FD2,
    0x170CF7E2, 0x05180080, 0xE1784611, 0x46992519, 0x92B24E32, 0x25E34494, 0x408F9481,
    0x462B4410, 0xE10F5911, 0xC05D2E38, 0x51B505E7, 0x165F1E24, 0xD2B64307, 0x6584AF95,
    0xCB39652C, 0x2C6BC99D, 0x2E6448E7, 0x0E0372E7, 0xC31FC518, 0x8526517B, 0x6261C969,
    0x34C79892, 0x445F2626, 0x44103B0E, 0x2514A349, 0x3A488503, 0x88E3FDD3, 0xEB254CAA,
    0x6E4B455C, 0xDF9BD376, 0xC5386704, 0x8E0AA0C9, 0xC4BA1C25, 0x62C05A66, 0x01CC6E94,
    0xA643C321, 0xCF298B26, 0x9ED3CE78, 0x71E7C4F5, 0x348CD208, 0x4052E798, 0xA9402684,
    0x707FBD32, 0xCCE905E1, 0x61A8DBA3, 0xD38C1096, 0x68850FA1, 0xD13A2544, 0x2CC01A89,
    0x36674096, 0x6A8924EB, 0xF45023FE, 0x4548264C, 0x9290CF7A, 0xDC03A474, 0x618E8B47,
    0x31BE5006, 0x5925029A, 0x36528D29, 0x8560A8A3, 0xEAA84D1A, 0x2C9637C4, 0x3FA7D452,
    0x85506A05, 0x9DF4D43A, 0x2D38A72B, 0x028C7E16, 0xE5182589, 0x693B8B1F, 0x5519F349,
    0xAAD49AAA, 0x8BD8AD53, 0x968791D4, 0x0C8E5406, 0x30D985EC, 0x5CA304E1, 0x45080180,
    0x72CC3F6B, 0xD5B6A204, 0x6B856FAD, 0x2F6AE55C, 0x1D25981E, 0x15A8CD19, 0x83D4E058,
    0x7FAB1554, 0xFD606A95, 0x2AABD82A, 0x7A2F1FC7, 0xFABA1AC6, 0x740AAFD2, 0x8A306418,
    0x5680801F, 0x1BA9DAA4, 0x5CC16966, 0xCE59BB35, 0x9FB3D676, 0xCC09105D, 0x1EBC0ED2,
    0x50203715, 0xA1CE3FD8, 0x93C082BF, 0x6C1D80B0, 0x5B2B0B6C, 0x22F6CED8, 0x2747BA2F,
    0x948BC1FF, 0x5EB1933D, 0xFF4C8A9D, 0x2CA35611, 0x2D9404C1, 0x0176002D, 0xD736E65A,
    0x6E85CFB9, 0x00830B74, 0xB922A4B3, 0x020B4D95, 0x520FF2C2, 0x8920A40C, 0x69786D78,
    0xD6DB5E2B, 0x7D25BCD6, 0xFB583AD1, 0xD7B6DFC0, 0xAEE5C449, 0x81C1FE57, 0xB4D761A4,
    0x59847B6E, 0xFE5D22C2, 0xFFBFD7F6, 0xAF38B005, 0x1E8CDD70, 0xE9059202, 0x7BC9796B,
    0x5836F1DE, 0x2AC60EC1, 0x06F1AEE6, 0xB1B3FDCE, 0x63D71E17, 0x1F87B28D, 0x8D004518,
    0xD9722FB4, 0x970086E2, 0x4627C4D8, 0x483D8A71, 0x83CCB304, 0x4A35F7C0, 0x14604611,
    0x9F41F878, 0x8E705E10, 0x07E3BC71, 0xE28078F7, 0x14340821, 0x014B0FFB, 0x01F0BDD7,
    0x2086E8C6, 0x95A31102, 0xA2416616, 0x653CA58A, 0xCAD9572A, 0x59805B39, 0x2562F18C,
    0xD16172F2, 0x7D47C82B, 0xF331E3AC, 0x4665C198, 0x445F0173, 0xD70F1B0F, 0x2985BE6C,
    0xD3464B86, 0x0AA29C7F, 0x6A411146, 0xC5621CB9, 0x7FCFD95E, 0x05A07406, 0x8E46A6DD,
    0x4E7B1605, 0x56D22CA4, 0x99A6A810, 0xF48667CC, 0x666D25A3, 0x99841235, 0x91B0B2DE,
    0x601EECE3, 0x46AC67CC, 0x45887429, 0x8EBB976D, 0x46835D45, 0xBD55AA75, 0xE6CB566A,
    0x1C1963CE, 0x173D478C, 0x28C0A428, 0x306608FB, 0x5E694D23, 0xBBD7BA3B, 0x58C4B5F6,
    0x870D1044, 0x3647D32C, 0x40CB34F2, 0x1ACF2683, 0x8B1DA400, 0x6D3D5A0A, 0xDADB576A,
    0x578C3ED7, 0x593712C6, 0x2809F75F, 0x043D4A30, 0x0749CEF1, 0x2EE7D81B, 0x7D7FBA37,
    0xD02117A8, 0x85C1F393, 0x325D379C, 0x0B62CAF6, 0xF9015946, 0xB36FBD9C, 0x092CC2B0,
    0x05C076C0, 0x5382703E, 0x216601D9, 0xFA8FA207, 0x7B840C82, 0x774DADDC, 0x713DD7C4,
    0xE2BC4B73, 0x0EDCC126, 0x7969A9FD, 0x923E7923, 0x943FEA68, 0xB36EEFCA, 0x47053D05,
    0xBE55CA79, 0xC04EB972, 0xF850BD2C, 0xF00022EA, 0x0C22E87F, 0xC5844108, 0x9E717DD5,
    0x3AE7DCEF, 0x0961CEC7, 0x1E505892, 0x0F47DE7B, 0x61FF27DB, 0x63FEBA87, 0xB921F900,
    0x9661A32A, 0xEADCB32C, 0xD67AC757, 0x92A74967, 0x5213FB37, 0x29D01650, 0x8BB1F3FE,
    0x7F66E7BD, 0xE0F83BD1, 0x9D22972D, 0xAE1146E3, 0x81D071D2, 0xC9F3A366, 0xD6AEA163,
    0xBE77BEF5, 0x58839DF7, 0x623E0B30, 0x12154D9E, 0xD0FFB747, 0x7EC9D9B5, 0x9E37B2F6,
    0xFA1717F1, 0xBD45263F, 0xB77B23B7, 0xE0056366, 0xEA0101FF, 0x45D9DD46, 0x45E87BF1,
    0xE7D27A3F, 0xD16336AD, 0x568DE0C6, 0xE3FF2C81, 0xB30A7F18, 0xF8EF65E2, 0xF67ED7C5,
    0x33117F3C, 0xA36449FA, 0xC1C8DC77, 0x32161D18, 0x327479EB, 0x2D642C71, 0xBF95F27D,
    0xCAFBE67C, 0x864963A2, 0x813851EA, 0xF61EBA0A, 0xED2F00FF, 0xED7B6F6F, 0x3BF1FF77,
    0xE8411E87, 0xFBB6B218, 0x3B5F9A3E, 0xE074A5DB, 0x3D77BA81, 0x7E6D3CFA, 0x7F3FE5FC,
    0x0E499BFA, 0x2F5D5FD2, 0xEF4600C4, 0xDBFBFF73, 0x23FEC007, 0x076917AF, 0xF33382D6,
    0xA0AA3B73, 0x914ADF33, 0xB5224BF6, 0xAAA30B1A, 0xC0A409BF, 0x02C0B40A, 0xAC0726D9,
    0x9EE833AC, 0x012D707E, 0xCB3118A4, 0x882BD8B9, 0x00BC4411, 0x4C103FFC, 0xB9C2ACC1,
    0x72412C16, 0x5917A793, 0xA50BDD86, 0xF841B404, 0x60453A50, 0x1D407FAB, 0x771DF40D,
    0xBB868B30, 0xC22421C0, 0xCA423422, 0xD8B1BF60, 0x37DBAEA3, 0x7F93E00D, 0x83B58760,
    0x946C1538, 0x9606340F, 0xB03507FA, 0x82A07F8F, 0x538A3015, 0xD07F9B98, 0x87FB8787,
    0xFF415C0F, 0xAC144343, 0x87708242, 0x4E08203D, 0xB8A30280, 0x0A301E83, 0xA302784D,
    0x703A0700, 0x3C4B312A, 0x7C1179E3, 0x2C05B300, 0x379BCABF, 0x5B027A82, 0x33F73E23,
    0xC23BD38B, 0x47C47446, 0xD8004484, 0x21441F29, 0x670A32FA, 0x3C121A60, 0xC11943C3,
    0x7F94A06C, 0x30198320, 0xA8B0058A, 0xA330F911, 0x91EE8330, 0x432B3687, 0x2A457435,
    0xD28FBDBC, 0x01EC4F86, 0x8493C981, 0x31D28A31, 0xC184318A, 0x66A65A00, 0x9C1BBCB2,
    0x850AF80A, 0x078A3029, 0x4BFC3CE8, 0x8B305B25, 0x67C48B42, 0x1468C684, 0x0B303D3D,
    0x8CC26156, 0x402F05AA, 0x434B0488, 0x541CC18A, 0x407FB018, 0x82F1D5AD, 0x320E2018,
    0x844DC3EC, 0x3DC475C5, 0x04878082, 0x581001FA, 0x01B0349D, 0xC387B0A3, 0xC1E4C333,
    0x31206B1C, 0x423DE995, 0x83A52AFC, 0x87F8BC04, 0x652ED804, 0x1961161C, 0xC692BA8B,
    0x87C87486, 0x4039B81C, 0x83721448, 0x7E08201C, 0x9C57C7C8, 0xB7B28F8E, 0x511D49D3,
    0xD3160423, 0xC7546EC4, 0x8F492492, 0x3044A8F8, 0x9EE26C02, 0x13916C5D, 0xC88243F4,
    0xC2BB8787, 0xCB4612C5, 0xE8A33E03, 0xA24C4A42, 0x970B306A, 0x14A0C883, 0x32A4A1CA,
    0x730B1B5B, 0xB162C898, 0x8718A31F, 0x8D24883B, 0x0B358E7C, 0x01E07F9C, 0x09A8CC5B,
    0x406539A0, 0xCA843D83, 0xDAC764AE, 0xB8739CC2, 0x0140A303, 0x53B51115, 0x085507FC,
    0xC1307FC7, 0x741CC202, 0x03DE4A70, 0x2E132348, 0x211B305F, 0x5444B260, 0xCA204225,
    0xBFCBF4BE, 0xE3BBAE94, 0x0129EF49, 0x6C87FB97, 0x34170390, 0x28F91DC9, 0xED07F9ED,
    0xF3E1366A, 0xCAF1AD25, 0x92CAFCC5, 0x3051411A, 0x24607FC6, 0xA32E32CA, 0xF31BC998,
    0x07FB201F, 0x0449B236, 0x34BB3F34, 0x82904F0A, 0xA4BEAA09, 0x02369D64, 0xCDA4D9CC,
    0x452A04DA, 0x01764D80, 0x4CAC6DC7, 0x44C1191F, 0x5B3DC1D8, 0x06748F80, 0xCBCA7835,
    0x9CCB4E44, 0x08218EA7, 0xCF369029, 0x9BD680BB, 0xC8CAA745, 0x7A88221C, 0x3AF61868,
    0xA68CB9C0, 0x35990061, 0x74DCC2D8, 0x0B1A739B, 0xF3CDB4A3, 0x1CF4CF44, 0x0B3001A4,
    0x62CF1043, 0xF0210401, 0xC93B3125, 0x8328F988, 0x983E4C1A, 0xCE4C17AC, 0x4C4FECFA,
    0x706F9CC2, 0xBD607FA7, 0x10001B66, 0x614B85A3, 0xAF49FECB, 0xDE9AF03C, 0x4CBA4D42,
    0xB4585999, 0xBD38380D, 0x3055310C, 0xCF54F60B, 0x0FD0F50E, 0xB9B4A105, 0x8A3511C6,
    0x7B00B816, 0xF474BC3C, 0x1179684F, 0x20B8787E, 0x4D0C2868, 0xB198220B, 0xDEC740F0,
    0xBCFFD1C4, 0xBAFC119A, 0xA73904C1, 0x25064B6A, 0x30A8F208, 0xF8404CEE, 0xFCD68502,
    0xD0B80D07, 0xA4976CF7, 0x9528D100, 0x9DBD29D2, 0xDB8B1B19, 0x8B7DD120, 0x505C4C86,
    0x3F94451D, 0x6818B304, 0x0B251938, 0x86C7B531, 0x5CE54981, 0xAC2535D1, 0x3B82FA8F,
    0xEB0DD322, 0x279CFE30, 0x36867CD2, 0x95233F22, 0x87FC9CB3, 0x27482047, 0x307112ED,
    0xD2A4730B, 0x43D43542, 0xFC6719E5, 0x28CD2C92, 0x7F08228E, 0xFD1CCFA0, 0x986CEBD2,
    0xC1A9B814, 0x28A34B2B, 0x53645EC0, 0x32D4ED2F, 0x7429376A, 0xD38D1381, 0x1C83787F,
    0xC291CAE0, 0xCB88731C, 0x9BB4585A, 0x80A6D584, 0xA8382DAF, 0x259DF552, 0x429E8004,
    0xD5E55DD4, 0xDC15F55E, 0x43595464, 0x025848CB, 0x88D353FE, 0x24EC1179, 0xCC1D4B08,
    0x6F0A313D, 0x3C29CC48, 0xD4954F56, 0xCD28F96B, 0x48088A31, 0x0B7560C6, 0x93554C2D,
    0x706ACD22, 0x53D3B603, 0x50ADE268, 0x1BEA3CD1, 0x3589A24C, 0x5F22D800, 0x9578D785,
    0x01D13857, 0x400778B3, 0x083E8E05, 0x56A4DE02, 0x302DC18A, 0x1D318183, 0x0A34E1BC,
    0x69CE3CAD, 0x2D4FD845, 0x054C11A0, 0xC1CB43CD, 0xF81C036B, 0xB61AD856, 0x1AD3E07F,
    0x4AF6D08C, 0x5888A332, 0x75D038A3, 0x307820C5, 0xD79C3A0B, 0x93D93592, 0x042110B5,
    0xD7C07600, 0x5E81A8FD, 0x707587FA, 0xD8556943, 0x7D9179A8, 0x1CAAB878, 0x87FA2CCC,
    0x6AD203CC, 0x957EDA05, 0x03FA8F91, 0xB255B4F9, 0x1C3A03B0, 0xC772F449, 0xEDBA5204,
    0x2B39460C, 0xBE182CB6, 0x6593B596, 0xD59437F8, 0x5AE5ADDA, 0xB1B800D7, 0xC5AB0520,
    0x123B918D, 0x3259AD63, 0x0026917A, 0x0A35A3B7, 0x89822843, 0x8D84DA0D, 0xCE60ED5B,
    0x1702D07F, 0x28A35900, 0xD3A5B784, 0x6F1CC333, 0x8CB94890, 0xD73B235A, 0x7F951D9E,
    0x137D0150, 0xD600DF5B, 0xC7DC75AE, 0x08CE5C85, 0x8B75C584, 0x4F87FA75, 0x3CC50298,
    0x28FA615B, 0xB6366032, 0x4D380E0D, 0xDD25CDD3, 0xA911DDB9, 0x032F0A34, 0xC3884DDD,
    0x17AC25BE, 0x4B77A4E1, 0xC9BD8C92, 0x30853269, 0x1DD04C84, 0x8B307896, 0xDFDC8824,
    0x35E0DE05, 0x0B1CF90C, 0xCAD6E420, 0x5AA74F02, 0xA33DA116, 0x21841C11, 0xB07FDBC8,
    0x1AE59801, 0xE65D2CD1, 0x238C5D35, 0x0A343C88, 0x0459D9A4, 0x7520D055, 0x5C0117B0,
    0xF6D72A37, 0x8D53BA52, 0x5E31A25E, 0xE14A0000, 0x7DF8DF85, 0x0B1C95DC, 0xF05E3DDE,
    0x4D98D331, 0xDECDD1A0, 0xEEC119E3, 0x320A5E8A, 0x30A06C0A, 0xEBDFED9A, 0xF89B5B95,
    0x003A8228, 0x06552CF6, 0x83DD4528, 0x917B1E5B, 0x7F16E86C, 0x1379DF3C, 0x9B5AE12E,
    0x5720C5F5, 0x15F94668, 0xD5EE11E1, 0xCA52BAB3, 0x70028BA5, 0x02E058E0, 0x04BEC884,
    0x1A8FA7B6, 0xC8F804BF, 0x9ECCEBC1, 0x852EBCD5, 0x61E60461, 0x2551E0EE, 0x30104655,
    0x03A87115, 0x7C349D4E, 0xC2822DD0, 0xA05E0CD8, 0xA34CD269, 0x43A80028, 0x4080B361,
    0x1230E800, 0x8E2CE2C6, 0xDFB9CDD2, 0xA361A2A3, 0x3DB35868, 0x1CC1C8E0, 0xEF07FDEE,
    0xA8385D05, 0xDEC5A5D7, 0x1761DE36, 0xADD01E0C, 0x534370C5, 0xCC332515, 0x1D722F51,
    0xCD53CB5C, 0x2083F07F, 0xEC838AF8, 0x8609D562, 0x43E2D101, 0x8CBEE446, 0x629B1682,
    0x7302F8B2, 0x8E31B044, 0x12208241, 0xD06398A3, 0x75655FCD, 0x61EE3718, 0xBA917DA1,
    0x012B8245, 0x8E18315D, 0x0AC15E4D, 0xF8A1837E, 0xB79E3DC7, 0xD1023362, 0x7A0C5DD2,
    0xE5A64485, 0xE4448E5A, 0xF36E0003, 0x82492CE0, 0x7987FAE3, 0xE5FE3300, 0x9CC21BE4,
    0xDCDE8B65, 0xED83C19D, 0x64F637E4, 0x7FB77082, 0x75E8CC28, 0x5D75DF04, 0x24C3FBC7,
    0x66259906, 0x2F82AFE5, 0x080A343B, 0x3225E5DE, 0xE5B1600B, 0xF8E73672, 0x6C251D83,
    0xBCE0A364, 0xCD035C4B, 0x1A7B6495, 0x658C5D41, 0x6A0468A3, 0xD665E1D6, 0x9CC5B8E7,
    0x1EC4C869, 0x9E15552C, 0xE7C9B329, 0xDECB7BDB, 0x0BCAE6D9, 0x87FAC806, 0x75E35838,
    0x046B0B7E, 0xE73B6600, 0xBEE8B68A, 0x4E8804BB, 0x57E5620B, 0x05B34666, 0x56801906,
    0x915C43C6, 0x61E7DC97, 0x7BECCE4E, 0x08202D05, 0x4BE34465, 0xC4156033, 0xD22D711C,
    0xA6BF3E84, 0x0CBC2508, 0xAEB161E7, 0x9FE9F68B, 0xD9243946, 0x02E68836, 0x1BCEB818,
    0xC2DB6945, 0x8824369C, 0x215D054C, 0xA03ACA66, 0x35CCD14E, 0x536AB6AA, 0xBEAC6AAE,
    0x6ACD34EA, 0xE1CD16AE, 0x0C5EEB01, 0xEB1D696B, 0xB16B2456, 0x533145EE, 0x6B5A17EB,
    0x8F6B6C4D, 0xD6B8EB62, 0x6BA41344, 0x3A6BACC5, 0xCE1D6BBD, 0xEBB6BDEB, 0xB7D3A6BE,
    0x86B96C06, 0x217EB76B, 0xE8B032A8, 0x9813825D, 0xDD84CACC, 0x6D3F1B87, 0x3573558E,
    0x8A35049B, 0x76E7AD02, 0x90004851, 0xECE6A040, 0xF83416CE, 0x1B170001, 0x82BA6CE4,
    0x9F07CBE1, 0xFB606788, 0x5E8A3B28, 0x25995681, 0xF07FE829, 0x87E91687, 0x1758A916,
    0x259C0825, 0xADD07D08, 0x4007FDD8, 0xFEE00824, 0x33007B87, 0x8254A122, 0x6EE43360,
    0x07FDEAB3, 0x78A04879, 0x90784290, 0x8823B542, 0x758A3402, 0xD87FAAE0, 0x0740A32A,
    0xA3556684, 0xFA440728, 0xEA907187, 0x3D07107F, 0x2E3307FC, 0x06E07FDF, 0xE987FA56,
    0x9E02CC3C, 0xE9A0A330, 0xA367F07F, 0xB87FD6C0, 0xCD30A353, 0x7FE0907F, 0xFCAD8658,
    0x8A313F07, 0xA3033863, 0x5B62A820, 0xD8D8A368, 0x3A26987F, 0x685BBF43, 0x0A346C8A,
    0x8E8A31B4, 0x0E9587FC, 0x055DC395, 0x308543CD, 0x90AE5DBC, 0x07FE27AF, 0x4ECCD850,
    0x607FE458, 0xB4F8A35D, 0x5704A87F, 0xA84987F9, 0x8A3481A6, 0x458A3669, 0x6A47C1D8,
    0x490DBE5B, 0xE80410A3, 0x34F887FD, 0x53957D0A, 0x1F03C8A3, 0x35A48A30, 0x3A683A8A,
    0x7F975039, 0x36358390, 0x53F5E8D1, 0x04617AA7, 0x10749CC6, 0x5DAE9B0A, 0x820489B3,
    0xDE9DC644, 0x0B1ACB92, 0x33ECF479, 0x5B137347, 0x0618B1A1, 0x7FE01688, 0x1D998748,
    0xBFF68F6C, 0xCBB3BDFF, 0xF02ADFCE, 0x69207FC2, 0x265B5F3E, 0x507FEC50, 0xE50E5F02,
    0x1A51AB18, 0xFE9D0A35, 0xC7902007, 0x5B01F07F, 0xFBF601DC, 0xBBA01C87, 0x1B5D507F,
    0xA07F90F8, 0x8191B601, 0x54018531, 0x60A3551A, 0x5C4D5201, 0xB30148A3, 0x34C3013C,
    0xCA5CC301, 0xA333C87F, 0x287FEA80, 0x80F0A315, 0x0B80E2FA, 0xCC2780DD, 0x07FAB380,
    0xE8F5E00C, 0x7BD6ECAC, 0x87FD7573, 0xCEE76399, 0x707FF30B, 0x76522400, 0x7FE70766,
    0xE5827678, 0xE2FC8FC1, 0xDCAEDCC7, 0x30A3606D, 0x628E0700, 0x91BA8628, 0x407FD8FB,
    0x350B50CB, 0x44ED1E8D, 0x54E2F6AA, 0xE7ECCAE6, 0x41B220F2, 0x2205F2E4, 0x652830A8,
    0x68000773, 0x4BE78B30, 0x77E77DF3, 0x7B05CAE6, 0xE85987FF, 0xEA4E7802, 0x221CC39D,
    0x175F0826, 0x6CBF85F3, 0x73F87780, 0xA92CF887, 0x6E274C81, 0xADD495EB, 0xA4ED3369,
    0xAE13F35D, 0x86196DC2, 0xEAAE12EF, 0xF92791F7, 0xB1AC9AB7, 0xF68807D0, 0xEAECD05C,
    0xD2414E93, 0x8F904E74, 0xF99F86F8, 0x9BF99787, 0x672513CF, 0xB1BF3A63, 0xCEC60071,
    0x53CB6C89, 0x79C71C3A, 0xB307A8FF, 0x5792CF30, 0xA70FA5FA, 0x670B190F, 0x3472E880,
    0xF8B40F0A, 0x11B8B782, 0xA79B716C, 0xF9AFA2F9, 0x70FAE7AE, 0x9AF65DCE, 0x88E79773,
    0xD3B2158A, 0xA1D06264, 0x2BD82AB3, 0xD67AF4CE, 0x97A60669, 0x2587B9FB, 0x7C0B1985,
    0xC13AFB7F, 0x86E42780, 0x9E6D8D01, 0xE28FC157, 0x80B0A347, 0xC3FAD3D6, 0xFFC4FBCF,
    0xACAFADFA, 0x7687FF50, 0xB6A983D8, 0x58AE4DFA, 0xA0DA853E, 0x5194E0D7, 0x7C6729BA,
    0x4062A8FF, 0x17D0FBA0, 0x29EA29FD, 0x3CFC57D0, 0x57660061, 0xFC066AF7, 0x7FC5E569,
    0x45B58270, 0xFD9FC5FC, 0x807D3FCE, 0x6E09E877, 0xC020977D, 0x78BF4599, 0xA2067B4B,
    0x763F1433, 0x7B8B1FDA, 0x1A3B8B1D, 0xFE67E5FD, 0xDB8E1A0D, 0x75CF13C7, 0xCCAED4E1,
    0xDB715C11, 0x2162FE37, 0xCB40B277, 0x10002770, 0xFF6EB91B, 0x76DFF107, 0xF2E0776D,
    0x57F407FF, 0x7F67F3FF, 0xF1FF776F, 0x1FF13A87, 0xF6FFF9B9, 0xF88FBFFA, 0x5FF7FFC7,
    0xE070AFFF, 0x6976ADDC, 0x06060807, 0x706BFC00, 0x8383E080, 0x202022FF, 0x41012128,
    0x56080A0A, 0xC2CFF898, 0x18178202, 0x6FF8E468, 0x048C4123, 0x484C5827, 0x82014130,
    0x04100203, 0xCB9FF2E0, 0xC2632F96, 0x2653699C, 0x69399ACE, 0xF3A9BCF2, 0x03034D27,
    0x431B0608, 0x00A1DFF0, 0x5211FEFF, 0xD369D4CA, 0x4A9F51A5, 0x2AB56A85, 0xA75AAA56,
    0xD5BABD72, 0x61ACD76B, 0x6B058ABF, 0xA8BF6B16, 0xBC10C8C1, 0xAE6085E5, 0xFEE5702F,
    0x6EF73B8B, 0xF376BA5D, 0x57EBDDE2, 0xC2BC602F, 0xC2B3FED8, 0x9ECFA762, 0x4D031788,
    0xE2B198EC, 0xC4373172, 0x32F96CAC, 0x379ACCE6, 0xF9ECEE73, 0xA2D0E833, 0x6D2E9347,
    0xD4EA34FA, 0x6EB357AA, 0xEC35FAED, 0xD367B2D8, 0x36FB6DAE, 0x77BADCEE, 0xFBEDEEF3,
    0xC2E0F037, 0x6E2F1387, 0x89F1B8FC, 0x6E29AF2E, 0xF3B1F90C, 0xBFA7CDE8, 0xE08100FC,
    0x934E39B6, 0xF64EED96, 0x67F0D8FB, 0xEF178FC1, 0xF3F93CDD, 0x6FABD7E5, 0x7A3DFE9F,
    0xD9C94A43, 0xC1C1CA51, 0xA1D2FCF3, 0x1CDFD753, 0x61040101, 0x140A51E0, 0x07036410,
    0x02210904, 0x40A04D41, 0x102D1610, 0x040C8624, 0x410371B1, 0x5040F075, 0x5410401F,
    0x2D041148, 0x92410482, 0x2610412C, 0x49D4104E, 0x32850414, 0x54A64105, 0x572A9041,
    0x164AD410, 0x05A2C104, 0x4170B341, 0xFD6F2D50, 0xBA5D0B73, 0x2ED04180, 0x8BD41061,
    0x22F4FF92, 0x3A5092C6, 0x5193E529, 0x950BE412, 0x9049264D, 0xF91E5C91, 0x11742E0F,
    0x422D9049, 0x99A64996, 0xD7C98E42, 0xB3FE5D3F, 0x624D93A5, 0xC4611449, 0x31D04194,
    0x0C941067, 0x9331041A, 0xACCF4106, 0x6C345041, 0x1B4D4410, 0x86F3594A, 0xFA30D852,
    0x2870364F, 0x4A1C4DA5, 0x3FE95371, 0x2961C8DC, 0x752A94A6, 0x1285A3CD, 0x3D198C54,
    0x258FF8FE, 0x4603FE2A, 0xD459230C, 0xF1FE7EDF, 0x1F0F1D07, 0x204F8410, 0x1EC2154E,
    0xF7A2BC7C, 0xBAC1AFAB, 0xBB566C07, 0x1F4EF3FE, 0x24D2F94A, 0xD5FE422E, 0x3E6C6057,
    0xD3B46D2B, 0x97CBC5EE, 0x4FF8D8A9, 0xFAC81108, 0xC2E1AC6D, 0x312698AA, 0xBA1C84A5,
    0x2EBBAAE9, 0xFBBAEDBB, 0xCAF1BC2E, 0xF5BD2F3B, 0xBE2F7BDA, 0x2FBBEAF9, 0x8676FDBF,
    0x82B3B8C8, 0xDD7EB01B, 0x3FE8FA1E, 0xEBDB0889, 0xCB130BB0, 0x4B0FC430, 0x0DC530EC,
    0x771DFC5B, 0xB030E470, 0xDC76E2C0, 0xFD03029C, 0xFF8606B3, 0x375045AC, 0x4EA41072,
    0x93CD4A1E, 0x00F83FEC, 0x833F54A2, 0x3FEC6578, 0x1DC52DF2, 0xE2214E52, 0xFD4BD033,
    0xFFD0742C, 0xD1746D0C, 0x1DBD2B47, 0xDD373BD3, 0x4351D3B3, 0x55CF353D, 0xD4B56D3F,
    0x35BD134B, 0x2D7B57D5, 0x835DD635, 0x3AD4F5FD, 0xD994ECE7, 0x364DA369, 0x1D435ACF,
    0x34104126, 0x75C731E4, 0x13C9A3FF, 0xF13D1D47, 0x5C477CC5, 0x7B7DDFF1, 0x73379DC5,
    0xB405D5B4, 0xB8AB5389, 0x7E3AD5B5, 0xC0A294A5, 0x76800FF8, 0xE6374C13, 0x2FE8858A,
    0xFE7B9DE7, 0x8BA1E839, 0xA5E93A3E, 0xEA3A7E9B, 0x3ABEABA9, 0x34C402BB, 0x7FB1E5C8,
    0x7C633B3C, 0xE0B0A53A, 0xBBBE07B9, 0xEE03BDDF, 0xEFC0EEBB, 0x6A331DCE, 0xE5902528,
    0x12FE67B4, 0xA8C8FFF2, 0x2F6AD3F7, 0xBFF53385, 0xF5FC1F5B, 0x3C2F67BC, 0x9F7BDBF7,
    0xFCF6CE95, 0x150A54A1, 0x4FFE7F24, 0x8E53FF06, 0xDD99471D, 0x6BF1F63D, 0xFEDF3F2F,
    0x9A27FB18, 0x38BE3F8C, 0x0FEB8DFF, 0xA6484139, 0x0F2DD712, 0xCC5BB27D, 0x1102622F,
    0x81B031D6, 0x04207C0E, 0x09C12823, 0x1682B052, 0x1B0620BC, 0x1DE52338, 0xD39880B0,
    0xD2080FC3, 0x6FC19E0F, 0x212C267E, 0x4277BF0A, 0x58CC3E15, 0x528410FA, 0x0F20F09E,
    0x4783B076, 0xFC410120, 0xA59C1531, 0xFC2C7E90, 0xB8830FA1, 0xF0F62142, 0x1523433D,
    0x12901441, 0x3A10721A, 0xFB81D070, 0x29C43880, 0xC684B116, 0x941F8792, 0x80A30C02,
    0xEBFE7F69, 0x88C3179F, 0xE9DC6197, 0x8128481F, 0x46989B01, 0x83220000, 0x1C237C6E,
    0x39C728E3, 0x768EB1D2, 0xF31E23BC, 0xB8C39A58, 0x54351BC4, 0x72731323, 0x83FD0302,
    0x1B3B301D, 0x4558A511, 0x91323245, 0xD0CAD48E, 0x95058154, 0x969024B0, 0x66138E6C,
    0x5246B358, 0x7C8B9391, 0x093B27E4, 0x85299BCA, 0xC2A1511F, 0x48092E61, 0x6440349A,
    0xD49528C7, 0x4F4B2942, 0xCF675272, 0xC0FE4350, 0xF25D3FF8, 0x224C8BF2, 0xF45A2788,
    0xF010020F, 0xA02C6B8F, 0x0432623B, 0x99B3323D, 0x34267CCE, 0x69CD29A3, 0x6E9AB352,
    0x904B9D74, 0xDA554C61, 0x200D032D, 0xF0EA37C8, 0xB28E59B4, 0x273CA29C, 0x2C68A739,
    0x2941F078, 0x31C0C830, 0xF51349B7, 0xE68A27D1, 0x693E274C, 0xA27D4F79, 0xB0A76833,
    0x12844102, 0x2142404F, 0x47D90405, 0xD0A9F73E, 0x1EA5627E, 0x2FC7FBE3, 0x5DACD4A4,
    0x62A2B17E, 0x09445FE4, 0x0C1C06D2, 0x92B1A3B4, 0x62384B8C, 0xB49291CD, 0x293D26A4,
    0xD2AA534A, 0x10934295, 0x3C87F131, 0x49480957, 0x8A29C130, 0x194267E0, 0xF29CD3AA,
    0x9B432BD4, 0xBA3C1304, 0x6410964D, 0x5AE22712, 0xD49A174F, 0xA9B4E29D, 0x384EE1DE,
    0x1314A0E8, 0xE8A63210, 0xE301002B, 0x72A5B452, 0xD310A9D5, 0x0AA43819, 0xD45D6726,
    0xE8BD14A2, 0x0B54BE2E, 0x05E3FDC4, 0x4CAA1018, 0x960A75BF, 0x76AEB5D2, 0xF35E2BBD,
    0xF2BDD7AA, 0x751C3535, 0xCAAC3B49, 0x84AD70CD, 0x82488E20, 0x55DABD4D, 0xB1B62AA5,
    0x3B9633BA, 0x1614A0F6, 0x76AE005C, 0x0804811B, 0x31B59F42, 0xF54CB3B6, 0x8B3F62EC,
    0xF0C07C48, 0xACB4A81F, 0x82709B07, 0xB5B68683, 0xB198858E, 0x7FA7D194, 0x66AD82D8,
    0x2F5965ED, 0xC5268BCA, 0xF0FF4782, 0xAB056A26, 0x64C47C18, 0x2E3D7D06, 0xDCAB9372,
    0xB9B732E5, 0x8197F5CE, 0xE10E925C, 0x3D7315C6, 0x78D495B0, 0x82D75AF8, 0xDDDEBB76,
    0x1208DE1A, 0x17524A80, 0x81B0697D, 0xDDDBB508, 0xBB968AF5, 0x3F9EBDED, 0x2087F674,
    0x95795704, 0xD8F4138B, 0x92FDDEEB, 0xFAB96632, 0xE9603187, 0x1812B396, 0x8604BBB7,
    0xDF40FA94, 0xB074087F, 0x2F158DE5, 0xE7ADE262, 0x16C2B852, 0x338630BE, 0x62E5E1AC,
    0x789F0013, 0xB27D8830, 0x43859100, 0xDF794B9C, 0xDFABDF77, 0xC4F7F314, 0x1EC7794A,
    0xCA035208, 0x09BAB838, 0x763FD008, 0xF3155F94, 0x663DC5B8, 0xC2954FB1, 0x43FE498A,
    0x9705F589, 0x50705414, 0xC80F4D9B, 0x7BF27E2B, 0x3D0EB674, 0x06A26528, 0x6F6DF2BE,
    0xD47FB27B, 0xC635C8EA, 0x2C362949, 0xB99331E6, 0x333E66CC, 0xA247599A, 0x319886EA,
    0x8ED54E0D, 0x27672C7D, 0x43B3D8FF, 0x081484FB, 0xB2F20022, 0x23E5BAB9, 0x428F5448,
    0x19CF3A42, 0xCEFE85CA, 0xA861A4D0, 0x01E0787F, 0x2B5CBE5E, 0x38A76209, 0x86D2BA13,
    0x9793252E, 0x16DC96D5, 0x9BFBCB38, 0x11283FD3, 0xAF347FD4, 0x09D65FCD, 0xA3625D71,
    0xD5BAB334, 0xAC357EAE, 0xD3EB2D63, 0xE825D37C, 0xCBA9B530, 0x30A38340, 0xFE75D2C2,
    0x6BDDA1F5, 0xECCC7A2C, 0xC100401F, 0x649795A3, 0xBFE3DC82, 0xB02F50FF, 0x3A6C1D7D,
    0x2D1D2773, 0x3A0E47FB, 0xB9706C90, 0x6E2EA381, 0x1DC3A5F2, 0x8B198BED, 0x34E25C7D,
    0xC5FDD196, 0x0D061061, 0xAE353DE8, 0x988D626F, 0xF6D675BC, 0xF3BE37BE, 0xB37DEFAD,
    0x592E20F4, 0xEA3DBC45, 0x43FF6403, 0xF704ED1D, 0x6D3E13B8, 0x68768771, 0xC89E3983,
    0x4241EE02, 0xD2D04110, 0x5FC338BE, 0x12842C6B, 0x82150C24, 0x89099FB7, 0x53D83C0E,
    0xB93718E1, 0x28B3B87B, 0xDD56D920, 0x9BB02F2E, 0x10EC6C06, 0x1FCBFB6C, 0x73CE37E6,
    0xF39DF3AE, 0xABA7E7BC, 0xDE000035, 0x98DF2F67, 0xD840D520, 0x70BE4EDE, 0x9D3D3394,
    0xB7837B3A, 0xE6C1DE25, 0x4AA9099D, 0x1FC67ABF, 0xA84BB439, 0x8735988A, 0x31FFD795,
    0x3A502A0A, 0x3AC74DEB, 0xE4C1F455, 0xAC85B700, 0x95F97E9D, 0x57904B77, 0x7301F6F8,
    0xF5D0FA93, 0xF91E1311, 0xFF7EEFBC, 0x2F03E03B, 0x011CDB78, 0x42FD1EEF, 0xF66EACAB,
    0xED1E33A5, 0x5459D37E, 0xCC825295, 0x247D1C82, 0xC6A5FCA0, 0x2FCDF8E9, 0x2B43579E,
    0x5220438A, 0x41464B79, 0x15D5FEC9, 0xF9DECFE7, 0x0EE39F6F, 0xDBEDA94A, 0xBC6E9F63,
    0x2411DA80, 0xBEDC87FA, 0xB8E6571E, 0xFF834124, 0x2F83F03D, 0xFBF3E1FC, 0x85B12E3A,
    0x04AB07E1, 0x1E241013, 0xEA767D0F, 0xD57ABF1B, 0x79CEF14F, 0x759EC7FE, 0xA0249FAF,
    0x78F31FF1, 0x2FA78A3E, 0x8C3FEA7D, 0xCFA8E33B, 0x0160563F, 0x030B87ED, 0xA207FCDF,
    0xE8FE2E2C, 0x4C1F9A5B, 0x86A0C686, 0xF3D9F6E4, 0x2AA3D3DF, 0xDCD01023, 0x249C05E8,
    0x1E019F10, 0xA0260220, 0x27972E02, 0x15609F24, 0x03FD0E01, 0xF85B383D, 0xCDFD1F91,
    0x8FCE061F, 0x84452929, 0xF0E5DFB0, 0x0D490841, 0xD70D20EE, 0x26098DB8, 0x60960A0D,
    0x0B20920A, 0xBE0AA09E, 0xA0AE0B60, 0x0C20C60B, 0xCA0DA0CE, 0x60D60E20, 0x3ECEE0D1,
    0xC0175930, 0x47420780, 0xDE4DDD61, 0x66059E28, 0x9641F8E0, 0xCB56D164, 0xF1FF9EC9,
    0xDA85DC9F, 0x104449A8, 0xC43F4DD6, 0xA02C1404, 0x17216E16, 0xCA17A176, 0xC4C416D1,
    0x2020383D, 0x20411DD9, 0xCEDC1A03, 0x1B211E05, 0x71115F8E, 0xCE1837C7, 0x04C0943F,
    0x18746154, 0x81E83FD9, 0xA884100F, 0x1C244411, 0x21FA1FD5, 0x20A20E20, 0x043FE216,
    0x621221E2, 0x22221A22, 0x3A22A236, 0xA23E2322, 0x25224624, 0x4225A22E, 0x624E25E2,
    0x26225626, 0x7A26A276, 0x42522562, 0xC9500413, 0x361D978C, 0x83FE0747, 0x121EA1DA,
    0xD9A161AE, 0x434C529F, 0x139DB41B, 0xB213DDC2, 0xC210411B, 0xD0E00D32, 0x7D368739,
    0xA3063021, 0x31230E30, 0xB9CD0BE6, 0x21903E44, 0x53888CFA, 0x3E2B822C, 0xA3462B63,
    0x3FC52911, 0xF050D405, 0xA2F629E2, 0x37236232, 0xA9F2636E, 0x81C4364F, 0x3421B5FC,
    0xE8562392, 0x11905290, 0x2D9FF62D, 0xD02E945E, 0xC4115A45, 0x2983FDB2, 0x5D5C6376,
    0x41F44BA1, 0x3F23EE31, 0xFE3FA3F6, 0x88046BE3, 0x3783084B, 0x14489202, 0x9F4212D2,
    0x3961BA34, 0x187BA432, 0xCB183F4B, 0x3D8C6C1B, 0x5645A366, 0x64164624, 0x35C01DCD,
    0x6C1682BA, 0x24864355, 0xC1D3AD94, 0x9E13C9B9, 0x09B9DC24, 0x550410B6, 0x04C1245D,
    0x00BC4B96, 0x4D24CE40, 0xEE4DA4D6, 0xA3689EA3, 0xEE44E64E, 0x6818C939, 0xA48A42DE,
    0xF0A50E39, 0x293B0CE8, 0xE4BA0045, 0x52E4664E, 0x2A53246A, 0xC1D84E65, 0x5092C486,
    0xEA50E43A, 0xDEBE2C8C, 0x2D64A1FE, 0xF094981E, 0x1F608781, 0x73A5419F, 0x544C4390,
    0xA5A64DD6, 0x5B25AE5A, 0xB9B69CF2, 0x65383C84, 0x3348F907, 0x065DA556, 0x056A5E25,
    0x411A2877, 0x3DA38074, 0x65CA6025, 0x59260E53, 0x1082DF26, 0xE3E83C04, 0x5DE511B7,
    0xBDB82632, 0x23BC528C, 0x3B0DC041, 0x492F2576, 0xC4111766, 0xC0A61520, 0x084C425C,
    0xA6865B64, 0x69268E68, 0x025A1856, 0x26083300, 0x411C78B8, 0xE4F543E8, 0x66C655A5,
    0xD0CC3E63, 0x5D832354, 0x26066AA3, 0x6726EA61, 0x107DE592, 0x8D4DA2CA, 0x3966C26C,
    0xE4344B1A, 0x26595ADF, 0x2FD95E57, 0xCC2943FD, 0x006C3FC8, 0x2066F07E, 0x5E6957D1,
    0xA7667627, 0x21D4A676, 0xE0E5E6E4, 0xC3FDB680, 0xB40D983E, 0x9E63A70D, 0x928679A7,
    0x108200CE, 0x7A7526F4, 0x67C26EE7, 0x8DC4A1CD, 0xA60B1910, 0x9DA26CE7, 0x529438B1,
    0x2958DE80, 0xD2EE3B67, 0x1D841060, 0xB900C0F4, 0x82EC62A7, 0x83276D02, 0x3E83A836,
    0x9C550628, 0x7C54C04B, 0xAA47A2F6, 0x28667121, 0x63E7E67A, 0x943E4529, 0x68220FD6,
    0x08A4F62F, 0xC83FCB78, 0x83FD3C00, 0x0CA00810, 0x48164411, 0x9E24AAC8, 0x412291AE,
    0xC841244C, 0x04100EC1, 0x81654C1D, 0x181DC412, 0xA8FC3FE8, 0x8F69028F, 0xD29143FE,
    0x43FE8E41, 0x3FD1401C, 0xA8411B74, 0x818DBBC1, 0x1743FD71, 0xAD69A4C8, 0x119C4100,
    0x669B6441, 0x6641D212, 0x28567BDF, 0x7B420841, 0xE286A552, 0xD67299E7, 0x64C1D438,
    0x5680656E, 0xE80D2F26, 0x08C1103F, 0xF062E888, 0xA9E68401, 0x9F29EE9E, 0xC82E8E82,
    0x63D47467, 0x3EE4501B, 0x6E872794, 0x6A269A68, 0xCB052994, 0xD807A96C, 0x50116129,
    0xD9273A8B, 0x11FE03FD, 0x01DC3984, 0x6B4CBC41, 0x223A17FE, 0x8D88F49C, 0xA90D86A8,
    0x90D90DB2, 0xD26C55E7, 0x1FC3DC3F, 0xE83B0410, 0x0A444101, 0x5B02D041, 0x924501B9,
    0x0E5EA404, 0x3FE96015, 0x211B43D8, 0xAA229A1C, 0x529E3EB0, 0x2D2E4A08, 0x56EAB227,
    0x410B6893, 0x01FBC068, 0x24C07F6A, 0x9F571800, 0x5EB5AB56, 0xC6FAB62B, 0x4B84B850,
    0xBA3E04B9, 0x16540B67, 0xA2AA19C2, 0x1EB9AB06, 0xDCA854EA, 0x1D04101B, 0xEC4FAAE6,
    0x22C0412A, 0xAA0CF0D7, 0xBE1AEB8E, 0xABE642A6, 0xEE0D1CD9, 0x280385EC, 0x8C76B404,
    0x39D8D00D, 0x0E5001E0, 0xA716BA2B, 0xB143DC52, 0x2595A7F9, 0x8E2A802B, 0x1EC1E27F,
    0xB95603FE, 0x42DC002B, 0xB644644C, 0x7EC7AC76, 0x0686C82C, 0x60E98914, 0x2034CFA9,
    0x6B95A0CC, 0xCB2CAAC2, 0x20529242, 0x2B383FD1, 0xC0C3FEC6, 0x2D166A6D, 0x923EB9E6,
    0xAC03B4CE, 0x5C0803FE, 0x8B829847, 0xA24348FA, 0x22CE6118, 0x058ECB6C, 0x6D076958,
    0xC2C469B9, 0xE9C8B4E9, 0xC05C100F, 0x841B87E6, 0xAD66D62C, 0x1F2B5AD6, 0x5437C001,
    0x4E48746D, 0xCAED265D, 0x96D9AD22, 0x1DD0D0D0, 0xCCC41841, 0x464501C6, 0xAD9E2B24,
    0xB30EE114, 0x9131530E, 0x6BFD36EC, 0xD967DD2E, 0xEACE6D1E, 0xAC397FC3, 0x9BED42D3,
    0xFE3C45EE, 0x88088E03, 0x62AD8047, 0x384C4374, 0xAE46D6DA, 0x5AAE4EE4, 0x302C2682,
    0x80AC4FAE, 0xDC5B12B8, 0x7EDF6DFA, 0x8772CB6E, 0x3FE16426, 0x82A42470, 0x41242369,
    0xDCAB91C9, 0x8CCE8C5E, 0x2B84529C, 0x35C016A4, 0x9A28C25A, 0xAEE6EB69, 0x52AEBAE7,
    0xC2D30380, 0xED3EE11E, 0x3FD46517, 0xD20841EC, 0x15CEC62E, 0xF32F2EE5, 0x9630AF36,
    0x1756DE0A, 0x3443FD51, 0x8270AD14, 0xEF62EEAE, 0x772BE6EE, 0x85EDC234, 0xC412E61D,
    0x7657857D, 0xE4B1AF61, 0xC1819303, 0x58AF85C7, 0x222EE98E, 0xAF6EBE52, 0x3EECAEFC,
    0xB5821694, 0xEE16F0A9, 0x41116CFE, 0xD2D06CD4, 0xC4BA18CD, 0x012F3924, 0x0301B017,
    0xC001BF9E, 0x4D2FB036, 0xFDE14220, 0x6CA43F83, 0x052D92F6, 0x293AB04F, 0x0528FD85,
    0x88ECCE08, 0x5C280411, 0x3056DF1F, 0x204CE8CE, 0xBF032994, 0xA6B5BB84, 0xEB051C20,
    0x6F056FCE, 0x83A4B1AF, 0xF067FEC1, 0x1D17F0D6, 0x43FEDAAE, 0x366C6045, 0x1D7444C4,
    0xB1071030, 0x265AC310, 0x122E709C, 0xB0BD6241, 0x12B12EF6, 0xFE2ADB83, 0xB0728EC3,
    0x38C8B0C8, 0x3CCEAF6E, 0x2DDAEA82, 0xA6E8BEA4, 0x5B131F82, 0x877F0BB0, 0x529A28B1,
    0xDAC41CC8, 0x596CFEF0, 0x11A94C19, 0x6C3244EB, 0xB1C710EC, 0x73B1CF1C, 0xD84B8879,
    0x80CEFB03, 0x3B441006, 0x8605521C, 0x717F2031, 0x87DB7F20, 0xFF0A452A, 0xF074E5EF,
    0x38D9E03F, 0x71DA30B6, 0x0E531507, 0x6AAFB18E, 0x1C3BC411, 0x320EFC1C, 0x55F20B18,
    0x711690BC, 0xB19E6511, 0xCC4B4728, 0xCD3BC909, 0x091C4C6C, 0x2B32AF1D, 0x194A72B7,
    0x53244B94, 0xF20DDAF4, 0x983103FE, 0x726F1241, 0x2F32EB13, 0xD4529D3B, 0xEFA9B143,
    0x8A61E2CC, 0x0DEA6EAC, 0x04158E8D, 0x07B2CEC0, 0xBAA62D4D, 0xB26AEE1E, 0xCEAF6334,
    0xFED5C354, 0x71A27243, 0xF105E2FE, 0x22DB2222, 0x4350C0B2, 0x2B840C4C, 0x9F39B397,
    0x0B951E33, 0x12D36F33, 0x73345F30, 0x734F2EF2, 0xCE857B3C, 0x2143C3D0, 0xD7DECCDE,
    0x31812823, 0x1C771F4F, 0x26FC4127, 0x0EC63338, 0x7C3FEA3C, 0xEF5D5883, 0x2F742F3C,
    0x5CB18AF3, 0xD448B2B2, 0xD3F28EE0, 0xEC20E9CA, 0x44C71B62, 0x4733A0FB, 0x4347B477,
    0xC4BB3F10, 0x0E6FB03C, 0x603AF418, 0xB43323B2, 0x4AB4373C, 0x3F3D478F, 0xE1001794,
    0xD84B8740, 0x4EBC5C51, 0x9C6B1FC5, 0x52AAF852, 0x374CE968, 0xC8240DC7, 0xC1D5843F,
    0x7F51B4AE, 0x8378CEB1, 0x13490CCA, 0x6353B36A, 0xB4F89BA6, 0x4BB1E311, 0x5F47D6AC,
    0x35675635, 0x001F18BF, 0xE2FB0340, 0xF2E49621, 0x5934B751, 0xE8EEF4B3, 0xECDC3C4C,
    0x1B695816, 0x92916F4F, 0xDC256716, 0x8E42B0D0, 0x8210C3FC, 0xC762782D, 0x59B42B52,
    0x575F758F, 0xC32EA7CC, 0x451D556C, 0x105EF53B, 0xB2A1D72F, 0x56A6A44B, 0x3F63B637,
    0x424CBB36, 0x1081FF1B, 0x975FED8C, 0xF6675FB5, 0x160CE8C2, 0xFF3E0529, 0x419CC774,
    0x5C71740D, 0xFF065527, 0xF5B01703, 0xB1CC773A, 0x541D1381, 0xB65F3C31, 0xB18DFB6C,
    0x4F19594C, 0x2D3EFEB4, 0x3CC5EE66, 0x7EF86F4E, 0xB6401FAB, 0x71370F70, 0xDCDE46DB,
    0xC03AFB31, 0x0CC398DC, 0x6B6C6FC7, 0x373F6636, 0x3FEE7167, 0xEB6828CC, 0x43AE3CC7,
    0x28704A42, 0xE9B16F9D, 0x2A034180, 0x3FD6AC13, 0x473BEEC0, 0x36CF7A37, 0x32F69C7B,
    0x6DFE8A00, 0xC91761B3, 0x66E73497, 0xBC73B75E, 0x631C4C43, 0x7F37EF71, 0xFC6737F7,
    0x6FB033B0, 0x1702C0F3, 0xA774B514, 0xB7AB7437, 0x300CE877, 0x8C19852B, 0xCAC37DB6,
    0x895F7411, 0x4123F6C1, 0xF5499324, 0x6A44E76A, 0x732631F3, 0xB82B81F7, 0x5290B788,
    0xE7196ABC, 0x4E2B7C76, 0x1E2F9214, 0xF823B11A, 0xB8C78C37, 0x1B421B7F, 0x85AF113F,
    0x38E78278, 0xC2F3D38E, 0x468D97FE, 0x35047438, 0x35C34C41, 0x7139F087, 0xDFB31607,
    0x90901000, 0xEE052AF6, 0x79438238, 0xB1F7B47A, 0x4F6178A2, 0xC3FEFDCB, 0x9DB92F67,
    0xFC0032CA, 0xB9878C95, 0xEFB47398, 0xB03AC001, 0xB1EC0C6F, 0x739695F7, 0x8F9BB947,
    0xC7A394B8, 0x915696F9, 0xB71B6982, 0xA3A83FEB, 0xB18F66D1, 0xFD8C43B0, 0x597B7803,
    0x0433164F, 0x1F9C708F, 0x74E39BFA, 0x0D195389, 0x9395B95F, 0xAF0097F2, 0x4E3902DE,
    0xD44BB99C, 0xBA6798DB, 0x2FB10FA6, 0x5804AFB0, 0xE4FC2F44, 0xA23A279E, 0x17A939C3,
    0x8545294B, 0xC5E2EC20, 0x644FFA52, 0x30E44780, 0xC434A60B, 0x122C8770, 0xEB880B84,
    0x9A80C983, 0x97ACEF13, 0x3A9F8EBA, 0x7BCFE0C3, 0x47B1B8A7, 0x9AEC19E1, 0x28462BAB,
    0x3FA6E67C, 0xEE47B43B, 0x3EC4BA2C, 0x388B2FB0, 0x7B09AF45, 0xB73A9BB0, 0x326BD117,
    0xEE99EDC2, 0xA444BFB2, 0xDC25C3FD, 0x7AD2FC2E, 0x388A4DF9, 0xD90DC3FE, 0xD00A1E0D,
    0xA8DC90FA, 0xDFB03B77, 0x8CC8777B, 0xA3CB30B2, 0x985EF7C3, 0x77D45D24, 0x8484BB46,
    0x1FC1BB46, 0x88329F7C, 0xFB03984B, 0x2C3FD702, 0x3B6B818A, 0xC4BBDBBE, 0x2452AA83,
    0x72283FF6, 0x875D871B, 0x96FA0410, 0x4770F676, 0x586F1767, 0x4C4E443E, 0x779012FA,
    0xC4EBEA14, 0x03CBBB6F, 0x0A38CE8E, 0xBF7BF9CB, 0x2DA689B3, 0xF5DDF5F2, 0xA7501786,
    0x218744BB, 0xBD07D03C, 0x002B6E68, 0x8F1B42E4, 0x7CBF659D, 0xD33C53C5, 0x48D3515B,
    0xFC985292, 0x6B04E7B8, 0x7C3B83FE, 0x0CE10AB8, 0x1B034077, 0x0B5D5908, 0x39B1294A,
    0xD2BD2F88, 0x3CF7FD37, 0x49E83271, 0xCD3A3BB1, 0xC893495F, 0xEF829301, 0xB7CC13CE,
    0xDFD099E6, 0x64DFDE3D, 0xFB2B7908, 0x2052913E, 0xBCB6E754, 0x94BD93E0, 0xB02CC773,
    0x762880D5, 0x585F7696, 0xB514DD95, 0xFBA8D3CD, 0xE13D9BE0, 0x5CCE87BB, 0x3534990A,
    0x2E3B1BDB, 0x4E9D69CE, 0x44C43ABD, 0xE93DE61D, 0x1217FE97, 0x7DCEC6BD, 0xC79E5CC7,
    0x574E79B3, 0x7EC7E53E, 0xD0CF0BD9, 0x603FEFF0, 0xA89FE296, 0x2E03379A, 0x4FECFBD5,
    0x9B8BEFFE, 0x446C30B1, 0x6FCD664F, 0x9A805EFE, 0xAC3E2AF7, 0x3FF3BE9A, 0xA9B2023F,
    0xF4C7EBEA, 0x8FBA0256, 0x3ECBF060, 0x77BF6FF0, 0xE4334D0C, 0xBEE55B9F, 0xAFE3AC75,
    0x9FF67EC3, 0x8CE9AFBF, 0xE641C036, 0xBBB1BDB7, 0xE1842C49, 0xC608203F, 0xF0003552,
    0xBFE7F41D, 0x855CF3FE, 0xB039C4B8, 0x5950402F, 0x3F5FE001, 0xFDFE0144, 0x21508423,
    0x1F0985C3, 0x90E88436, 0x128B44E2, 0x58D44631, 0x8DC72331, 0x04763F17, 0x48E491E9,
    0x86512293, 0x25325954, 0x5F2795CB, 0x92E984B6, 0x329B4CE6, 0x59D4C671, 0x9DCF2733,
    0x04F67F37, 0xCDE893EA, 0xC5B4FF83, 0x03E3C821, 0xFF4F0041, 0x550A753D, 0x57AA546A,
    0xAAB566A7, 0xAC576AB5, 0x257AC15B, 0xC1010118, 0xFE085250, 0x50B0C43B, 0x836FA151,
    0x772B75C6, 0x73B85D68, 0x7BA5DAF1, 0xBE5E6F57, 0xF606F77F, 0x43E0B82B, 0xDE086864,
    0xD73042F2, 0xFF8EC617, 0x393C7E35, 0x95C96432, 0x6CD65F29, 0xCEE67399, 0x0AF1FF98,
    0x17167043, 0x701A1982, 0xEC362AFD, 0x61AAD76A, 0x4E2ACEB7, 0xB7A9046A, 0xBDD6E771,
    0xDF6F779B, 0x170781BF, 0x71789C3E, 0x2791C7E3, 0x799CBE57, 0xA1CFE773, 0x9D3E9747,
    0xD7EB757A, 0xBED767B1, 0xEF777B9D, 0x1787C1DF, 0xF73C9E3F, 0xB1694FB2, 0x765AFF56,
    0x59B1F5FB, 0x70C35333, 0x80FB5F6D, 0x4FBFE707, 0xFD7EFF18, 0x4FE401FD, 0xF406FFC0,
    0x0900C0CF, 0xA3AED04C, 0xA103C1CC, 0x8F805026, 0x9BDCF7BD, 0x0ED8C2D0, 0x43A08020,
    0x9F88208A, 0x10510C88, 0x1C0B03C1, 0x5112C4D1, 0x12453114, 0xC5916C55, 0xEB69FF17,
    0x40F2749F, 0x70CF3148, 0x1CB36D04, 0xB3F1D477, 0xEC84811E, 0x12083117, 0x0C820864,
    0x25C24018, 0xC292642B, 0x4F28E4F7, 0xACA929CA, 0xB12BCAD2, 0x2DCB52CC, 0xCBD2ECB9,
    0x530CC12F, 0x2CC931CC, 0x2EC5AA53, 0x27CD526C, 0x100AACD3, 0xA7EA0821, 0xA45D13BE,
    0xED15C613, 0x3DCF13CC, 0xCEF3E4EB, 0x53FD013E, 0x73EA9C50, 0xB6840F87, 0x36C9C170,
    0xD1D45D19, 0x81D0E47F, 0x61027B20, 0xFD41C428, 0x4D5033D4, 0xD334DD31, 0xF50D3D4F,
    0x4A1E7F45, 0x16C48CE6, 0x1FC791F3, 0x55D55D59, 0x66056155, 0x6876820C, 0x6F46CD6A,
    0x6F2C547D, 0xD7D3336A, 0x560D815F, 0x2D8961D8, 0x9163D8D6, 0x65D9564D, 0xAA405597,
    0x15D4D858, 0x81FF68D7, 0xE0820321, 0x5152C3F9, 0xD416ED39, 0x96F5C14E, 0x0DC56FDB,
    0x3773DC97, 0x845294BD, 0xA081E0EA, 0x578DA600, 0x50B547DA, 0xF6761FF4, 0x744E6B48,
    0xDFD71DCD, 0x572E017E, 0x66077E60, 0x1C74C649, 0x569707FC, 0x55F20D61, 0xF8661B87,
    0xFC885F32, 0xC62712E7, 0x8DD72B2A, 0x2B18EDA9, 0x8012A440, 0x2E4991D9, 0x5193E4D9,
    0x95E5594E, 0x65D96E59, 0x78F0D92B, 0xEBD98E5E, 0xC88201E0, 0x7FAD5849, 0xE0980E0B,
    0xDA06799F, 0x1E89A0E7, 0x2E9468DA, 0x44A1E7ED, 0xC328208C, 0xF9A66599, 0x20482351,
    0xD23A9C08, 0xADE7AA3A, 0x68BAE685, 0x5AEE8FAF, 0x45488AEC, 0x08321868, 0x885525C2,
    0xEDD896D9, 0xC62E1987, 0x78B8820C, 0xA5796A01, 0x9786526E, 0xEFDBEEF9, 0x5C0F01BF,
    0x2F09C1F0, 0xA4066FFC, 0xC5EA26DA, 0x10CAAEF1, 0xE4521823, 0x9EC3B1EB, 0x31CAF2DC,
    0xCA735B07, 0xDB783737, 0xEB413E7F, 0x6634081F, 0xC1D3EEFC, 0x820381B2, 0xEB2371A8,
    0x9CCF3BCB, 0xA761D9F3, 0x648E765D, 0x840E06CC, 0xEE02E96C, 0xBE0623DF, 0x197A826D,
    0xC626E2CD, 0xD375004A, 0x1AEA96F3, 0x5C3352A9, 0xAFA9E9FA, 0xB1EBFADE, 0x96FB5ECF,
    0x7BDE6149, 0xF9B8395C, 0x60F6769F, 0x6FF3F6AB, 0xF5F63F4F, 0x7D1F676D, 0xF192EDF7,
    0xF16AA39F, 0x1C0E1FFD, 0xFDF1BE58, 0x02813A09, 0x86518882, 0x7DAFA9D7, 0x019F7C05,
    0xBF407809, 0x801F08C8, 0xC02F0840, 0xBDB5B690, 0x1C15782D, 0x133F059E, 0x83FDB40C,
    0xDFD04811, 0xB316A507, 0x84908DED, 0x09E13425, 0x15429851, 0x520A9092, 0x40F7C7B1,
    0x14432148, 0x4C0A7221, 0x97E10DE0, 0xD0EA0443, 0xDCCC3C86, 0x10430E51, 0x86205C16,
    0x06DBCBFC, 0x5A0FF7F2, 0x3D7E6FD8, 0x9D13E1DC, 0x721C4518, 0xA8E2464E, 0x26D44203,
    0x905E0A3C, 0x2084148B, 0xA1109E41, 0x74D119E6, 0xE20A90DD, 0x35469856, 0x6D8D91AE,
    0xE11BE374, 0x01E89D48, 0xB46479E0, 0x10806C63, 0xC3BC8202, 0xE1F39F0F, 0x4538A11F,
    0x90720229, 0xFC93CC81, 0xA3A75910, 0xFF4A2368, 0x8A0781D8, 0x45354918, 0x38FF7940,
    0x65F41585, 0x926E413E, 0xE4349C90, 0x0FE54527, 0x54E31D19, 0x0611B8FF, 0x544A98B5,
    0x04344682, 0x92164569, 0x36184927, 0xB4718049, 0x99712DE5, 0x92EE5D4B, 0xD2232E97,
    0xA4C8C71D, 0x20801806, 0x2248641A, 0x4F4C990A, 0xCD93B32A, 0x1332E504, 0xECFABF22,
    0x81081043, 0xB22EA1C7, 0xA7D5112F, 0x8820771C, 0x4B38C413, 0x014AE271, 0x25882005,
    0x4B909790, 0xCF9988C5, 0xE13B6674, 0xFE764D09, 0x34DE1D03, 0xD95504E5, 0x50527CC5,
    0x02E90483, 0x4C09640C, 0x2A4394B1, 0x41E5E829, 0x85509A11, 0x0DA1942E, 0xB31CCE75,
    0x1280CE31, 0x483E0F24, 0xF9E222CB, 0x93BA794E, 0x68ED19A3, 0xCD59A6C0, 0x0AA2947F,
    0x08C21904, 0x0B02A208, 0x04204410, 0xD65A58A1, 0xD512CEB9, 0xFC7D1E27, 0x306A19C7,
    0x2C6E60D1, 0x04210449, 0x2204E211, 0xA3750E8F, 0xD828D544, 0x53108694, 0x4D9F6AA1,
    0x76C4255D, 0xB07FC111, 0x99040B02, 0x2A76B380, 0xCF755CD1, 0xEAF55DA1, 0x561AC157,
    0x96B096B1, 0x0FA59D3A, 0x79104040, 0x469A2A54, 0xDF51E8FD, 0xCEB7571A, 0xB4DC2135,
    0x05DEBD67, 0x8031352F, 0x01DA9098, 0x49950C41, 0x1F2A5D18, 0x1003ED22, 0xBD003208,
    0x5FB1956A, 0xE8411781, 0x147FAEE0, 0x2D728FD6, 0x4AE165EA, 0x6A5DADD7, 0x47F94A1B,
    0xCFAA9CEF, 0x32116EA7, 0x1A98A8C1, 0xC5D8906C, 0x00B5940A, 0xE05487A0, 0xCED95634,
    0xB5B5B696, 0x84C36DED, 0xAE28A7D2, 0x4AFD59B5, 0x10948E20, 0xB2D6628C, 0x66AE2599,
    0x865C9B8B, 0x6D1A651C, 0x560E0820, 0x8A935BE7, 0xA0DE2080, 0x24447D03, 0x24225123,
    0x48204A12, 0xDBDACD39, 0xB521A4AA, 0xC807A8FF, 0xF55C89D4, 0xC6BD971E, 0xEE8C8BFD,
    0xF87FC0E1, 0x0B0B78C2, 0x9BEF692D, 0xC41121A3, 0x648DE15A, 0x2CE2A435, 0xC0980EDC,
    0x81F03605, 0xC79BCC11, 0x8D146002, 0x1605A495, 0xE8729040, 0x75EBA64C, 0x8BDB72AF,
    0xEEC30BE1, 0x88237228, 0xDD27FE09, 0x03A0E4F6, 0x1DC71904, 0x691FFB2A, 0x5692E422,
    0x4583AAC5, 0x6144A14C, 0xCDD80FAB, 0x9C3585B0, 0x4A5ECD63, 0x05B10477, 0xDF9B473E,
    0x8BEAC320, 0x3FE92D23, 0xFF00701A, 0x1129F8C6, 0xA193F04C, 0x4F29651C, 0x7D559719,
    0xAC603F8A, 0x61785AD5, 0xF2F638B9, 0xE1BCC18D, 0x28EB9330, 0xCD87FDFB, 0x2D155C96,
    0xFA1FEDD8, 0xF3268418, 0xFEFB1474, 0x61A90363, 0x02A19A72, 0x43FE8305, 0xEBAA351D,
    0x681CC597, 0xBE19871D, 0xDA5E2DF2, 0xD1643BF0, 0x15485A2E, 0x080E437B, 0xE2D58022,
    0x90D35E79, 0x9CA9844A, 0x9A6F4D69, 0x5BEE9DD3, 0x4C0CB233, 0xCDB4E433, 0xA0B41BF2,
    0x556A7D01, 0x72239AA7, 0xEC06AA96, 0x14D8EA1C, 0x14F74940, 0x3C3AB76C, 0xA0A07FB7,
    0xF3BE9402, 0x0250903F, 0xCFF8A309, 0xB1B56663, 0xDCD47D91, 0x40C7C1C1, 0x9F90B466,
    0x485D0FFD, 0x0EBB95B5, 0x3CEFACB1, 0x9B6F4F37, 0xF6F6DDDB, 0x0264B9B7, 0xDB03BCA9,
    0x412ABBCC, 0x62C571C2, 0xABD93AA3, 0xD9B1F76E, 0xE8A3938D, 0xB9080C22, 0xCD7F8440,
    0x94C351BC, 0x86A9475B, 0x0331FEEB, 0xAB5AF80D, 0x37D5B03D, 0x77E5D0E6, 0xEEDE3C2F,
    0x11A163FE, 0x25856872, 0xA715DA3A, 0xE208ACA0, 0x9C102087, 0x8A90F97F, 0x721DC16E,
    0xE49C8F91, 0x278E3F25, 0x3AC46DCA, 0x0C86A0F4, 0xE1CBF877, 0xCECC730D, 0x401778DB,
    0xF88DBE5C, 0xA3FEB483, 0x33267081, 0x108E1042, 0xE53CEC20, 0x06C1AC92, 0x01949208,
    0x4DE63C36, 0x789D7977, 0xDACFBBBC, 0xA6D0E2CF, 0x01746438, 0xB4A6A899, 0x289F38D7,
    0x1E72A431, 0xEC9D8F93, 0x94FB3765, 0x7914F423, 0xE76F3D14, 0xD438C7FE, 0x3F0A8FFD,
    0xAF4CEE9D, 0x7A8FCCBB, 0x86A36A94, 0x02128FE3, 0xD6CB2775, 0x3EAD6E79, 0x381848E8,
    0x18E22EFB, 0xCD1FEB5C, 0x21DE3A5D, 0x8FBB74EF, 0xADF3E7A8, 0x6EAFB3AF, 0xFC625575,
    0x9380811F, 0x152F41D7, 0xF49D9C2D, 0xE9FD37A5, 0xA7BCAA1B, 0xCCED82AC, 0x5A0EC3A3,
    0xDFC8F93E, 0xD7B3F25D, 0x8F3851DC, 0xED47C4C4, 0x5F56FCD1, 0x4D81DE7D, 0xBC5E86BC,
    0xD7415150, 0xC786B19F, 0xB4F99ED7, 0x64463E77, 0x48348CB4, 0xCE8AF350, 0x4DA6683C,
    0x5EEF8319, 0x0A90D05E, 0x7E1F5131, 0xFC9F8FF1, 0xF17D1C25, 0x0C02E841, 0x72CFD848,
    0xDFECBE6F, 0xFFF97B6F, 0xFC02C3A7, 0xC02007C7, 0x95F147FD, 0xF5D0C620, 0x3EA870CE,
    0xFE5B41E8, 0x40660CA1, 0x052A76FF, 0xD819EC42, 0xEFE0E140, 0x020FE6F9, 0xC852E279,
    0x87780EC1, 0xEAAFAEEA, 0x24472FAC, 0x2208A48E, 0x5A3010C9, 0xA629ECB0, 0xF04CFCA0,
    0x05305104, 0x9EFF2657, 0x0F5A19E2, 0x208D6857, 0x620B8164, 0xF01F022F, 0x07306D06,
    0x08D72445, 0x8FF20402, 0x0F8924F8, 0xFC1FEB10, 0xE8FEEE61, 0xAD81F052, 0x41080F7A,
    0x22087FCF, 0x01C0D219, 0xA9025075, 0xA2110710, 0x614A5EF2, 0x34FAAF30, 0x618282F0,
    0x0F61FE56, 0x1B04207E, 0xC29ED405, 0x0D30549C, 0xD90D70D5, 0xE11A4C10, 0x0D066705,
    0x241FEBCA, 0xD0A70AA7, 0xFE30ED0A, 0xE428E278, 0xC0442083, 0xAB509836, 0x0806E0D4,
    0xCF041EE2, 0x52E906D4, 0x081061F6, 0xEB240EC2, 0x981102B1, 0x08024048, 0x60D419A2,
    0x1330F2F9, 0x2F06F0F1, 0xE0E21B85, 0x0330B902, 0xB2209145, 0x4FEEA98E, 0x6A50E07C,
    0x302A41FA, 0xF15D0DA9, 0x16316115, 0x00F543AF, 0x91521960, 0x1FF0405A, 0x6C0E41B6,
    0xF0EF136C, 0x0AB0F517, 0xDC1AC28F, 0xA0522100, 0x57116EEB, 0x1092A024, 0x61FE69A1,
    0xBDAC5311, 0x8421E692, 0x2D26D230, 0x01475112, 0xD61A0209, 0xD1830A40, 0xB2D1BF17,
    0xE8211092, 0xF142D10B, 0xCCC82B1C, 0xFE2060AA, 0xD1931201, 0x16419851, 0xE91E71E5,
    0xC37F1EB1, 0xC44FD034, 0xD205A0AE, 0x51C10EA2, 0x20118113, 0x763EAF25, 0x605E2091,
    0xA771B0FD, 0x4AFFAF16, 0xEF070009, 0xA92464D4, 0x821061FE, 0xF0C8D24B, 0x02604E51,
    0xD66631B6, 0xF1FF202D, 0x52EC3523, 0xD0EA6E94, 0xAD130BB1, 0xEB61FF14, 0x280461FE,
    0x674D2131, 0x11200104, 0x692671EC, 0x505126B2, 0x1DE1A2EC, 0xAE152637, 0xF2051BC0,
    0x1C324127, 0xCC3EAB35, 0xE2989EC1, 0x0744D522, 0xAC1FE920, 0x313727CB, 0x0FE46522,
    0xAF1DAE36, 0x05A92751, 0x1B921006, 0x3D21C91A, 0x32852BB2, 0xAD881873, 0x4B24CCCC,
    0x0E24D132, 0x1FE63013, 0xE525CBC0, 0x829EDC85, 0x2E326CBA, 0x472E72E5, 0x71F2A4AE,
    0x10ACF496, 0x80ADACDF, 0xF2FB2BD2, 0x52E99B2B, 0xFEC6A1DC, 0x72D8F101, 0x208F8E66,
    0x6D29D176, 0x043E4650, 0x1ACE3421, 0x6A5A9291, 0x89EC6705, 0x2FD3012B, 0x2E7D5283,
    0x12381A65, 0x343036B4, 0xBE5612C9, 0xE0982090, 0x42F32604, 0x592E811E, 0x135D35B3,
    0x29E644CA, 0xD92AC19C, 0xEC9401C3, 0xE121B81F, 0x346B4212, 0xF33337B3, 0xBE068F37,
    0x000BCAD8, 0x66F330EA, 0x2128B32D, 0x2F2FE990, 0xF1A04642, 0x5240E21F, 0x8296738C,
    0xD3088F6D, 0x337398FD, 0x6490D3B5, 0xECFC1D64, 0x3C334694, 0x3EE24FAF, 0x02080A21,
    0x3A69CC01, 0xA41E051B, 0xF35F2E02, 0x3E33E13D, 0xAE5F2ABB, 0x8363368C, 0x3962D2BC,
    0xF73813B7, 0x49DD3B33, 0x0F4464BB, 0x673D50C6, 0x643C4206, 0x3F921F2F, 0x10BCE52F,
    0x20540A42, 0x0CC51F35, 0xF4208068, 0xD412A441, 0x37D3F93F, 0xF246440F, 0x734AAD81,
    0x4432CAE2, 0x910C0563, 0x54086AA0, 0x3E53566A, 0x59457455, 0xED848DF4, 0x3EC1E229,
    0x90EF83DB, 0x0BD31782, 0x3FB47143, 0x8E90D475, 0x809E1302, 0x44F06220, 0x94DF66A3,
    0x31108FD3, 0x0EA7E53B, 0x20929247, 0xCF3C6374, 0x47742EF7, 0x0F4A7433, 0xE1A452E4,
    0x3450B733, 0x094B5147, 0xC13CDAA2, 0x0101FF3C, 0xDF464D6A, 0x429F4623, 0x4D345A8F,
    0xAF4D74D5, 0xB49B15A7, 0x0A01362A, 0xA4B86218, 0xB4354734, 0x3EA7D74E, 0xFE34C168,
    0x34DF36C1, 0x208E6C4D, 0xFF04A140, 0x80F41D61, 0x4E741021, 0x186B44E6, 0x46B501D5,
    0x52117B51, 0x1D524DD7, 0xD52D5292, 0x37753151, 0xFC52F01D, 0xE1D12F61, 0x1121FF50,
    0x3469C08E, 0x26F14844, 0x50814348, 0xA94ED331, 0x43F94F14, 0x7CA1DC46, 0xC55674B8,
    0x343E3293, 0x54CDC409, 0xD812251D, 0xF57D57B4, 0x1306FB57, 0x1E2BF4C8, 0x27746340,
    0x55B55D1A, 0xFF5974EF, 0xADFE3EA3, 0x58707F07, 0x09126841, 0xF35009A2, 0x0700D81F,
    0x09228208, 0x80981282, 0x85A14420, 0x0895E1FE, 0x5148CB62, 0x9FB0B2AA, 0x006CE1FE,
    0x4188FEC8, 0x1FEC3CD7, 0xE0FFAFFC, 0xB5DED755, 0x5D82095D, 0x7AF381FF, 0x632E62A1,
    0xAA820889, 0x26745504, 0xE2080961, 0x0D61FF49, 0x961FF108, 0x00435720, 0xC455A510,
    0x02DF002A, 0x95931308, 0xBDF63155, 0x4D12C210, 0x756956B1, 0x13A78D3C, 0xC60094C0,
    0xE7F92EF4, 0x47E29E85, 0x59657581, 0x258565B6, 0xED6000ED, 0x0666764C, 0xF59506B1,
    0x59963366, 0xB130426F, 0x2F000829, 0x00346562, 0x44006AF4, 0xF4821FE6, 0x010D6A00,
    0x0969554A, 0xD54A0122, 0x54B69B69, 0x132D72D7, 0xF6A13D20, 0x6996AE1F, 0x7B54B4C3,
    0x568B68CA, 0x6665DEB1, 0x0E6F3575, 0x128A2092, 0x62F6754A, 0x602F76D5, 0xD2515655,
    0xD136E163, 0x200E0CCC, 0xC5A36C6D, 0x8880010C, 0xF96F765C, 0x44AF6FB6, 0x2A168013,
    0xB4208986, 0xF6D317B2, 0x6D767170, 0x1E1FE73D, 0x2D48A6F3, 0x7234FF70, 0x676C56ED,
    0x71D80A69, 0x7152F85D, 0x43713673, 0xD5E64642, 0x44563ED6, 0xEB25482F, 0x4FF02087,
    0x3102C572, 0x597576FC, 0x03AF75B7, 0x7201E766, 0x8E0715B1, 0x776D7389, 0x23177173,
    0x249D03EA, 0x97517273, 0x77F78172, 0x8010AC97, 0x576F23AA, 0x22379173, 0x48E82464,
    0x579D7432, 0x106CCD03, 0xFA01778A, 0x62A5764A, 0x7B375C11, 0x917B77B5, 0x77837003,
    0x370FF863, 0x933B146D, 0x371178F7, 0x19228F77, 0x2A1FE310, 0xD7BEC5E0, 0x7E37DF7A,
    0x4938D785, 0xACCC2087, 0x7CF77289, 0x4519F7CB, 0x3392F38A, 0x6197456E, 0x8518F43E,
    0xA2A41DD7, 0x8137B86A, 0x0D7B7815, 0x41EE29EA, 0x4260CB76, 0xCD7F348B, 0xF3B382B7,
    0x2107C852, 0x7CC4A074, 0x77E183B7, 0x4D583F7E, 0xFA2092B0, 0xF7F5590C, 0x18B2BF84,
    0xB77FEFEC, 0xF3438014, 0x0E70C017, 0x5F83CAFE, 0x664218C3, 0x87387181, 0x6412165B,
    0xC2932D77, 0x7F782D70, 0xA1335885, 0x60D82112, 0x89384361, 0x418697E5, 0xCA706F18,
    0x88379443, 0x2F135851, 0xD3417985, 0x6198B185, 0xCF74B250, 0x3897150C, 0x29F1565A,
    0xC9874790, 0x14558CB8, 0x1A4000D3, 0xF30E5764, 0x98DD8A53, 0x28F13582, 0xFEAAA156,
    0x989B6901, 0x1FF6C049, 0xFD2D76BA, 0xA0261FF4, 0x34EC2092, 0x087F0E6E, 0x820961E2,
    0x09C1FF5A, 0x84A541FF, 0xA1FEA568, 0x2161FF6C, 0xFEE06E03, 0xE208E8E1, 0x070BA206,
    0x9F935838, 0x9837838B, 0x1FF93E20, 0x39945938, 0x392F9318, 0x92792CBA, 0x21924209,
    0x991C0599, 0xC401FF80, 0x7D25B90E, 0x203A2090, 0x90346889, 0xFA92B8FD, 0xD6BB2D78,
    0x6F389922, 0x2D8E76BA, 0xF8878A76, 0x1E2464FD, 0x9EFB3308, 0x999D85B7, 0x122E2432,
    0x4B8EB60C, 0x418783F5, 0x8CD0D02A, 0x6B9B79B5, 0x372497F2, 0x8E1880F9, 0x3D9C598F,
    0x8EE052F2, 0x76596020, 0x921FF707, 0x53A0D840, 0x5461153A, 0x094E21FF, 0xF8E81542,
    0x83618494, 0xA02117D4, 0xE1FF01A1, 0x2100DE1A, 0xC021113C, 0xA1FEBAE1, 0x61021102,
    0x401D8210, 0x22115635, 0x1E69B01E, 0x081EAA6C, 0x30081ED0, 0xAD90AEBE, 0xF421143A,
    0x9A3AAD81, 0x1F6AD9A3, 0x49A3DA42, 0x3A36211A, 0xBE50AEF0, 0x2C1FFA30, 0xC1EA211A,
    0x9ADA24A6, 0x0BA1C9B0, 0x0F0D5415, 0x02C1CA21, 0x05A0A1FF, 0x39FF13FA, 0x9FA1FFA0,
    0x100D0A95, 0x18B95D42, 0x1FE93015, 0x672D2132, 0x96142088, 0x480E7420, 0x5749B64B,
    0xE1CF91C0, 0x98D08D32, 0x3ADE1AB5, 0x27780DB3, 0x8038B34B, 0x8B0C098B, 0x5982A500,
    0x9B98C62C, 0xDBAD7AD5, 0x4152C170, 0xE9006776, 0x7CAD61FE, 0xF9C78DEE, 0x225023AE,
    0x240620C1, 0x288805B7, 0x9A862A34, 0x3551B17A, 0xB7F1B0B5, 0xA6317B52, 0x129D68FC,
    0x7B1B7329, 0xB23B1EF0, 0x1DB24CE1, 0xBB2DB27B, 0xF07B31B2, 0xC946FB14, 0x9B0D52F7,
    0x6B5B0FB0, 0x78BE45D4, 0x39082092, 0x2095B398, 0xB7AED08A, 0xA52EF9FA, 0x03046D28,
    0x5F99BAC5, 0xE1350B25, 0xAA78F547, 0x9EEC1899, 0xFAD8C042, 0xFC5B81B7, 0x5029F41E,
    0x015349B6, 0x9C976A0B, 0x19B97B59, 0xF5C828EE, 0x49B6881F, 0xB1928065, 0xB542B3C1,
    0xD09B95AE, 0x09855B92, 0x18BC03C2, 0xB3F8ED29, 0x5BB0E552, 0x8E9DAF1B, 0xBB92F61F,
    0x69AC3741, 0x9860957B, 0x8EE8F220, 0xE9B831F9, 0x0ECDBEBB, 0x3D98BEE5, 0xEFAE4068,
    0xD48F4101, 0xC01BB3BC, 0x6E52F137, 0x321191FA, 0x208D7962, 0x9998B188, 0xCEF4DE3B,
    0x49B62678, 0xB08F691F, 0xFBCB4A29, 0x210C77C2, 0xD979AC7A, 0xA33FC3BB, 0x7781FF1C,
    0x3F9801FF, 0xFBEC1198, 0xDBDC51C4, 0xEA001B86, 0x91216221, 0xC05B9327, 0xF1C03C31,
    0xB2A43EAE, 0x5F749949, 0x1BBC90C1, 0x428EEF1C, 0xBC350814, 0x6F60B623, 0xDC65C66D,
    0x1E4464C2, 0x67C3D308, 0x017647BB, 0x96C34A32, 0xD9899BBF, 0x229A29F3, 0xCB3CB1C5,
    0x9BBF0CA1, 0xCBA206B4, 0xCC3C7ACD, 0xEAA33C69, 0xD9FC1A23, 0x11B622ED, 0x8DB0C83C,
    0x621131BC, 0x3F01FEBB, 0x4D25983B, 0xBB386B0C, 0xD95CC5CD, 0xD539E210, 0xB99F3C1B,
    0x43F035BD, 0x953A40E1, 0x54520018, 0xD13D11CB, 0x9E6F6B67, 0x3BF2B5E2, 0x66D4E236,
    0x8FD27CC7, 0x5438D93C, 0x41E0A2A4, 0x0B34F83B, 0xDCF310F1, 0xA1452F06, 0x1FC0E5AB,
    0xA0DC2C1D, 0xCF17C96E, 0x11243D29, 0x08B1AAE2, 0xC99CFFAC, 0xB9998561, 0xD7848878,
    0xC4A0012D, 0x79D77D14, 0xA85AA17D, 0x196359D4, 0xB37C7709, 0x7D8DD3FA, 0x28E6BFD5,
    0xFEF4615E, 0x568A0081, 0x1FF50346, 0x8CB9C1A8, 0xF3B3D917, 0x6AA94E28, 0x0958B291,
    0xFC8AFA42, 0xCF5D2BD8, 0xB10061FF, 0x1DCDD628, 0xB6ECCD1D, 0x21B74491, 0xFD7B2657,
    0x973DE1DD, 0x2776414A, 0x5DC1CEFC, 0x877DC3D5, 0x09006464, 0xD49AEFE2, 0xDADDBE48,
    0xC3CE1735, 0xF83A6F60, 0x089AF80B, 0xE3E17DF1, 0xA19139E9, 0xC9BCFC94, 0x80957DCF,
    0xFDFC62A1, 0x80C29FAC, 0xE3D7429F, 0xDE3DE3BD, 0xB886EC84, 0x67981623, 0x9C620BA1,
    0xE51E05E1, 0x4A28E873, 0x72ABBA1B, 0xC4205189, 0xEF6D1AAE, 0x83EB1BFD, 0x0282091B,
    0xEB0117DC, 0xE19C1FF7, 0xDF3DAB12, 0x64939E6B, 0x5BC5E704, 0x341E91E2, 0xD212EE24,
    0xD7857A89, 0xC1629FC4, 0xA9EA7E3E, 0x075C70DE, 0x2942BFD8, 0x541F6209, 0x7E87EBBE,
    0x009DF66B, 0x17623947, 0x3C799E41, 0x52F713E5, 0x9F623488, 0xFED1DED8, 0x46499BED,
    0x92C7FC0A, 0x447BD65E, 0x83F914E2, 0x342A41C1, 0xFEFDEAA4, 0xD7A65FEF, 0x641B829E,
    0xFE4E8977, 0xEE1EBDEB, 0x44740E7F, 0xE03D6227, 0xE69A7307, 0x8F55BF15, 0x77D61942,
    0x8FB4652D, 0x13E83A85, 0x4871E85F, 0xBE41EC46, 0xECCE6CCC, 0xC82FE27E, 0x784522CC,
    0x4A2A41F5, 0xFF5DF010, 0xB1064DF5, 0x8E2B5EB0, 0x78A2CDB2, 0xF3DF71F2, 0xE452E7D7,
    0xA754A6C1, 0x5B40DD49, 0x81F11F39, 0xB5712253, 0xD53EDB49, 0xBBF73F89, 0x019E4646,
    0xD01E23E8, 0x9EFAFF4D, 0xF600209C, 0x785F1E1F, 0xB9F60185, 0x2589FBBF, 0x15E00136,
    0x3E0FD764, 0x5F970E8F, 0x609F3BF7, 0xB616228E, 0x1D9C2080, 0xFD98F329, 0x29F99C19,
    0xC120211F, 0x46983ABB, 0xDCD981B5, 0xBFCFFD1E, 0xC02201F9, 0x047874BF, 0xE002F2D6,
    0x092FAE5F, 0xA8643617, 0x88C3A210, 0xBC522B0F, 0xC4A33138, 0x7635168D, 0xA41188E4,
    0xC6C07FC7, 0x23B39C24, 0xFF958021, 0xE964AA56, 0x99CC25B2, 0xB4CA6B2F, 0xCD273319,
    0xB9D7379B, 0xA832E1C4, 0x8B44A1D0, 0x348A3D1A, 0x4CA5D2A9, 0x0A7D3A9B, 0xA9D4AA35,
    0xBD5AAB54, 0xD6AB358A, 0x7ABB5CAD, 0xAC360AFD, 0xCB64B1D8, 0x368B3D9A, 0x29AA5AAD,
    0x89D3F657, 0x9E5C2773, 0x65CAEB73, 0x42414149, 0xFE047671, 0x5097E433, 0xFEFFC1E0,
    0xD87C2E09, 0x88C56130, 0xEC7E2717, 0xC9E37238, 0xA6432B8C, 0x64B2D97C, 0x673798CD,
    0x7439ECFE, 0x4B9CD1E7, 0xDA7D2683, 0xA8D568B4, 0xED7EA757, 0xD9EB763A, 0xA6C36BAC,
    0x2176BB7D, 0x0906FC81, 0xAE22B2A4, 0x8777BA70, 0xA09E1DDB, 0x6A66C240, 0xE453FE12,
    0xDDE17017, 0xB6DB65B8, 0xF63B3B9E, 0x5FBBD5ED, 0xFC1DAEF7, 0xFD7FEA6A, 0x6B281232,
    0xC4E2F18B, 0xCF6FBBD7, 0xE7119133, 0xBF7FB887, 0xFDBF1E1F, 0xFBF7FCFC, 0x7EA00F17,
    0xA037F601, 0x2200F86C, 0xFD262FD0, 0x21420B83, 0x83E1047D, 0xA1448E12, 0x58461648,
    0x80BA45A1, 0x5C2D5091, 0x03C1E424, 0x1F071DEF, 0xB7162689, 0xAD7A4B8C, 0x2E8B62C5,
    0x8C6308BE, 0x6348CE32, 0x88DE368D, 0xEE3A8E63, 0x428F63C8, 0x88E27265, 0x9F0905EC,
    0x07382E16, 0x0A4A815D, 0x4D8124C8, 0x92E4F7FE, 0x25094E4E, 0x89565295, 0x465A95E5,
    0xFF7D5959, 0x4086B340, 0x6420180D, 0xB90E2599, 0x24010093, 0x090DC6C4, 0x4246C33D,
    0xD091E4EA, 0xF7498B81, 0xFA79978F, 0x7E9F0885, 0xA067A616, 0x680A097E, 0x86168674,
    0x9687A267, 0xE45FA887, 0xA468EA3D, 0x0FFA49D3, 0x5A5E93A4, 0x6696A529, 0x9EA6E98A,
    0xA368AA2E, 0x2A4A32A2, 0x59EE849E, 0xF4FFAA68, 0xABAB1859, 0xAC6A89FE, 0xD873F9D2,
    0x73FE083D, 0x1D091DCE, 0x55424683, 0x912660B0, 0x5099A2C2, 0x24241B0D, 0x91CE1F4F,
    0xCD972567, 0xB3A59B3E, 0x25BB42D1, 0x496ED2B5, 0xFDCD339D, 0x19838B73, 0xB821784E,
    0x6DFB8618, 0x1442E4B9, 0xF07482CC, 0x67B12C10, 0x0D5C2BB6, 0x6F4BCE3E, 0x8BDEF6BD,
    0xEEFABE6F, 0xFEBF6FCB, 0x04D6BBFE, 0x2C33812E, 0x7C1EEFBC, 0x2ED6AC10, 0xD5C36D3C,
    0xC46D7C3A, 0xB14C3F0C, 0x1C4F10C4, 0x1928AB31, 0x1DC1F05C, 0x3FDCA02F, 0x10904823,
    0x34241F0F, 0x94FF7045, 0x77424341, 0x221090F4, 0x4963FDF3, 0x32810913, 0x60AA4245,
    0x1F2CD091, 0x184BC3FE, 0x46430D09, 0xF19CC842, 0x51091AE6, 0xD94246D3, 0x375091C0,
    0x0E042472, 0x538D091D, 0xF4E54087, 0x021DEB85, 0x9CD02411, 0x87A3AD02, 0xFD94EC40,
    0x087B3B4F, 0xFFDACEE4, 0x3BF6E3BC, 0xCF04087C, 0x2DD4FFDC, 0xE47D3C50, 0xF13FF7BD,
    0xDF37FDD8, 0x376DDF82, 0x0DDB6FDE, 0xAB6EDB37, 0xEBDA366D, 0xE43611E4, 0x5053A0FF,
    0x8D735AD7, 0xCCDF40B5, 0x091C7511, 0x4246F361, 0x8FFD34D3, 0xFD2346B6, 0xFF45308F,
    0xB14261B3, 0x15CA9CFC, 0x45227D09, 0x91309442, 0x24452150, 0x64426EB4, 0x141090CC,
    0x4394242A, 0x00810907, 0x0C074241, 0x1DBBB1C0, 0x00804893, 0xE0E2D909, 0x8C6315AB,
    0x5FDAC5FD, 0xDCC5BDBF, 0x399D292F, 0x4B53FF5E, 0x2F9EE317, 0xA2E6FA6E, 0xADFA7EBF,
    0xF98B43FF, 0x40E070FF, 0x4C7BF6F3, 0xEF002493, 0xFEFF7FCF, 0x00C00FFF, 0x0480700A,
    0x8C57A02C, 0x3C7C92B7, 0xB40C79CF, 0xE6969AC9, 0x2F754186, 0x9EF3DF7B, 0xC1782905,
    0x82B06A09, 0x9420EC18, 0x0EBE37C2, 0xF77F0888, 0x1B09605B, 0xFE078FF8, 0xFBD20063,
    0xF7980187, 0x8424E48F, 0x07FA6401, 0x90901004, 0x02E424BC, 0x0688480B, 0x1110901A,
    0xC903E426, 0x220847FB, 0x08121090, 0x58261FEC, 0x902A0A62, 0x20581510, 0x40B82C21,
    0xC5605A42, 0x0300BC7F, 0x17018109, 0x0C8311FF, 0x1A064424, 0xFF196318, 0xA6338331,
    0x446B2131, 0x68DF1AA3, 0x518238C6, 0x62F0FF8C, 0xC578B642, 0x8A60B22C, 0x140150FF,
    0x0A0281FF, 0x4989A424, 0x8711E25C, 0xF9FA4458, 0xB0FF8810, 0x31FF0F40, 0x10D8BD01,
    0x61A0FF87, 0x80401242, 0x2130BC84, 0x09135803, 0x5042693F, 0x5963B0A2, 0xFC3FD238,
    0x660DACC1, 0xF4AA8390, 0xB95F2B20, 0x27512E4A, 0x173BAC71, 0x3EA96CFB, 0x976FB65C,
    0x42574920, 0x8483A0E2, 0xC49430A8, 0x5C3D1624, 0x2A034082, 0x6CCC9973, 0x099F33A6,
    0x334A68CD, 0x89707880, 0x42798A3F, 0x04A1209B, 0x2A47C909, 0x58CAE961, 0xAD9C7386,
    0xCD38272C, 0x26744E29, 0x889D5586, 0xF9453642, 0x73C26C4E, 0xE7ACF29E, 0x4F19EF28,
    0x9F53D27C, 0xFDE7CCF6, 0x6D8FF874, 0xE45161C4, 0xD341A73C, 0x2282D079, 0x28C4A114,
    0x741A4243, 0x52E688CB, 0x28A4BCA2, 0xA1C17844, 0x7642A07F, 0x264040FF, 0x77CFE9F7,
    0x249A67A9, 0x4F49A92D, 0xAA94D28A, 0x3CCBA574, 0xD1804B80, 0xA4F2904F, 0xC5F43000,
    0xCEA61418, 0xA754269C, 0x4FA8550B, 0x5853FA79, 0x821F4752, 0x5013C810, 0x2A98D210,
    0x4D4C9F95, 0xBA65536A, 0x154AA754, 0x2A8D4FAA, 0x04A11E4F, 0xA82AB8E7, 0x57AA053D,
    0xAED60A77, 0xDF3A4652, 0x6C4083A0, 0x4E8ABF21, 0x6D6AAD74, 0x21812E2B, 0x60799286,
    0x055CFDAA, 0xD78AEF4B, 0xAF75EABC, 0x5FABED7C, 0x95D73295, 0x84AAB31C, 0x8E0D084D,
    0x713C4A75, 0x155FB175, 0x1B1963AB, 0x163EC856, 0xDD025E4A, 0xD740190E, 0xB33552C2,
    0x67ACDD9C, 0xCD5A0AAD, 0x44B3B686, 0xFF37023A, 0x2C408FA1, 0x6D92B1AB, 0x1B5F6B2D,
    0x4748CDD9, 0x07FB591C, 0x5B8A2D5A, 0xB772EAB6, 0x426B8512, 0xCFAEC0EA, 0xF526968A,
    0xFF520970, 0x2AE4DC8A, 0x6DCCB977, 0xA46773AE, 0x53BEE1B4, 0x04497E77, 0xDB1B276C,
    0xBB7762EC, 0x776ED5AE, 0x4E1024BB, 0xD28533B8, 0xCB692E15, 0xAAF35A3B, 0x45ECBD37,
    0xEA437BAF, 0xC35884C8, 0xEEB9F40D, 0xDF6BEF77, 0x3A52C2FC, 0x440812B9, 0xB75B9B75,
    0x17B79806, 0x12F51F79, 0xAE240222, 0x789EBA57, 0x0C1F83AE, 0x784B08E1, 0xDE65C9C2,
    0x5ED1824A, 0x6D310933, 0x7E15236E, 0xEE5FABBD, 0x22C3F886, 0x50777106, 0xB42B1029,
    0x5E2CBCE0, 0xEC338B70, 0x78C318E2, 0xA995EFC6, 0x0501390A, 0xC7788EAD, 0x8FB12E26,
    0xA28FCB21, 0x4217C3FE, 0x05811063, 0x2324E00C, 0x49252279, 0x26601D88, 0x160EC2E3,
    0xB0A3C300, 0xE58CAF95, 0xCB796B2C, 0x4B8242F4, 0x8EE352DE, 0x7E088211, 0x798FD249,
    0x931EE67C, 0xE668CD78, 0x17C77F2A, 0x798717A2, 0x89640ECE, 0x3D12129A, 0xA3D0C24D,
    0xC8405109, 0x070FF92C, 0x099274B8, 0x72024089, 0x3C0AC928, 0xFD9802F2, 0xBD1A0647,
    0xF22A4601, 0x22261B1F, 0xC4578F22, 0xD37A6410, 0xA774D109, 0xE40FFD39, 0x711FFA5D,
    0xFEFD5F9E, 0x3F5381B1, 0x6818213A, 0x29217C74, 0x9A1C0949, 0xF41E81D0, 0xE7E86A02,
    0x85D9F084, 0x3FF3CC30, 0x39651CEE, 0xAB48D8B7, 0x8F9B7355, 0x5F64EC6D, 0xF9BE1FAB,
    0xD212D1C7, 0x5B4B01AD, 0xB02647C9, 0x02341D81, 0x5E18D305, 0xB7B2E076, 0x70EE0DBF,
    0x50DC7B8B, 0x0FB6C469, 0x9862E806, 0x66CAA701, 0x9D91BB73, 0x3BBB78E6, 0x857AAC96,
    0xC9E8527A, 0x854C7773, 0xABC84EB7, 0x2C0FF90F, 0x73076426, 0x4E1247FD, 0x8084ABFB,
    0x59090621, 0x61FE9B83, 0x2202E087, 0xC4590908, 0xB3521211, 0xBC627884, 0x4242A8A5,
    0x9E859158, 0xBF226CFD, 0x1A3FEB88, 0xF464909A, 0x50CF1FEA, 0x27463FDA, 0x43FDD0DF,
    0x87FB501B, 0xB9C6A8D4, 0x2136D07F, 0x395AE0E4, 0x813E27C6, 0x9472A39C, 0x07D14813,
    0x4874B952, 0x5B5FE94E, 0xFE9BD3BA, 0x6E57A235, 0xFA0902E8, 0x902E7E3F, 0x6B040B9E,
    0xCD9AB354, 0xCF7336A7, 0x321AE3FD, 0xB6E97987, 0xA084F2A5, 0x9F26C87C, 0xB67E2C88,
    0x83FD9E0A, 0x47FF1E14, 0x0932133B, 0x3E43FDDC, 0xC503F109, 0x948721FF, 0xF20CE3FC,
    0x601707FA, 0x2414BC10, 0x28220864, 0x99036216, 0xE4275490, 0xA16E7886, 0xE09851BE,
    0x528D9C84, 0xBC3CEEF3, 0xE96CAF3D, 0x69ACED54, 0x97B4F6AD, 0x36B5FA6C, 0x132F1FF9,
    0x2A419D26, 0x9A1C970D, 0xBDAFB4DC, 0xFB8F6FED, 0x25C08EBD, 0x70FCB8ED, 0x660FFF24,
    0xC4F3FE73, 0xE5F1B77F, 0xD3E47C5D, 0x006D5586, 0x093FB04A, 0x4426C3EC, 0x7BCF0F0D,
    0x85A16042, 0xB2CEA15D, 0x4279E8FF, 0x8487A1DA, 0x090FC3D4, 0x2B9087D9, 0x49531E43,
    0x72B055B0, 0xBFDBFB95, 0xEA9D58FE, 0x152AA154, 0xAA3FEEA8, 0xFF1FEBFA, 0xFF3FCFF6,
    0xA37FEFF7, 0xA7F17F32, 0x7EC7EF27, 0x093D6807, 0x527A2AE8, 0x7C21D47F, 0x800F90FF,
    0x937A1090, 0x10910410, 0xA67390DE, 0x909B1173, 0x78278063, 0xAE01C039, 0xD13C6C27,
    0x0BE10949, 0xCA6EC062, 0xB7A082A7, 0x1A77C982, 0x0207F0F6, 0x950F5181, 0x7A77A87A,
    0xBA2E1835, 0x85B71100, 0x7BE6A76A, 0x2B4D72EF, 0x47B921C1, 0x84684584, 0x00848847,
    0x483F04F3, 0x1BC78722, 0x5182E58A, 0x482C7C78, 0x4B185285, 0x310F51D4, 0x382346E8,
    0x0FF7AD17, 0xF10810F6, 0xD7F180B7, 0x7C329A80, 0x55856853, 0x129F2018, 0x7F07F280,
    0x420F70FF, 0x47CF31B6, 0x04208124, 0x7986863A, 0xA87A82D8, 0x20954486, 0x380B8726,
    0x48838378, 0x7252116D, 0x8A04F109, 0x054D8747, 0x88E8490D, 0x9189088F, 0x71698928,
    0x1EC84C09, 0x7E04C092, 0xC86908B1, 0x89D87C89, 0x188A087B, 0x40D425E4, 0x6B20FF5F,
    0x9912C85C, 0x135C7DD7, 0x8A186A2B, 0xF98AE89F, 0x639925E1, 0x7AF6DA44, 0xBB045173,
    0xC6CD7C17, 0x89E8AF29, 0x2A8BE8BF, 0x50D51D28, 0x83683C8A, 0xC78C8885, 0x37AB1238,
    0x79649C66, 0xDF40D8B7, 0x33F512E0, 0x8D68D589, 0xD98D88D7, 0x022912E8, 0x6B91EF8D,
    0xAA26172C, 0x48B08B12, 0x8E38C08E, 0xAC18B8E6, 0x051C0AA2, 0x06883F6C, 0xE58AD785,
    0x38E78C18, 0x1D21F68F, 0x418A8784, 0xC0E36A74, 0x8E88508A, 0x008F58FF, 0x41D43189,
    0x8CA10236, 0x088C9882, 0xD83A1239, 0x68A33F21, 0x394248F9, 0x49138DA6, 0x91691591,
    0x2B59865B, 0x68960D51, 0x27547E13, 0x014DF7E7, 0x48F49229, 0x9258F292, 0x1077E2A9,
    0x70B16C09, 0x9278096F, 0x9F926923, 0x10FF5D68, 0x83F10277, 0xAB1093CB, 0x293192E7,
    0x93093C90, 0xF71D4194, 0x90B985A0, 0x88490751, 0xBF8C8946, 0x30536450, 0x3F688B3C,
    0x519170A8, 0x49539529, 0x2BD57C95, 0x253078DD, 0x53B57768, 0x93F93318, 0x6192F95F,
    0x46F393E9, 0x1022B41D, 0xF094E709, 0xC48C0181, 0x9635048F, 0xCA93D96F, 0x20705956,
    0x83F68326, 0x7804E098, 0xB9709608, 0x1A597197, 0x610F91D4, 0xF3AB3A98, 0x9869485F,
    0x4160490A, 0x40A41093, 0x43543305, 0xF71ED91C, 0x52F212E0, 0x99699595, 0x01998997,
    0x19900B84, 0x43500E13, 0x622A338C, 0xD9A297E9, 0x6249A597, 0xFF8141D4, 0xF4670340,
    0x02104183, 0x7C1BD109, 0x19B39A49, 0x0F31D462, 0x9010207E, 0x01739697, 0x1CE03907,
    0xB29A68FE, 0x27C79C29, 0x2710D31D, 0x477A55B6, 0x99CA9889, 0x0FF4BE5B, 0xBB2C0056,
    0x90A54F89, 0x9D69D599, 0x379D89D7, 0x612B4822, 0x12C99C0D, 0xFF62B058, 0x355B0FC0,
    0x9A39C19C, 0x5B9B49E5, 0xF7371D22, 0x91043F0F, 0xE75F57CD, 0x59E69F29, 0x9B11D49A,
    0x2003D0FF, 0x704C9100, 0x7E79B002, 0x009F49E9, 0xC1D28AEA, 0x9C93D334, 0x089CC909,
    0xF98A8C8A, 0x3390A20F, 0x105340FF, 0xE0DB1C79, 0x9D945312, 0x19A18A17, 0x0159A1AA,
    0x1369DE04, 0x290560A7, 0x49E8A028, 0xA239F3A2, 0xC625E194, 0xF4970660, 0x09083F51,
    0x27808559, 0xBA25A01A, 0x0494DF5D, 0x78910026, 0x736D0FF4, 0xA26A3386, 0xD45DFA34,
    0x99873861, 0x56BA44A0, 0x5164690C, 0xDA1E47C4, 0xA1B7141E, 0x51A50A4F, 0xF12EA52A,
    0x00FA4C09, 0x1E756494, 0xFA5BA406, 0xA3EA5DA3, 0x728EA1A5, 0xAA209907, 0xA66A3297,
    0xDF416A5C, 0x29FD04B4, 0x6AB1369D, 0x689BF75F, 0xAA5EA67A, 0x2C91D450, 0x0A9CB906,
    0xB8C7A46A, 0x0430837A, 0x588ED109, 0xE0B12419, 0xA5326412, 0x89A88A87, 0xB45C916A,
    0xA8230412, 0xD10531EC, 0x4A721CF9, 0xA95A74A9, 0x8E2AC922, 0xA9100490, 0xA316D195,
    0x5FA73A97, 0xCA6A2D6A, 0x32083FA6, 0xF172B729, 0x2AABA968, 0x1029B5AA, 0xBD102859,
    0x9A7B6450, 0x3E8AB4A7, 0xC298CA0C, 0xEA8F6F94, 0x0006601E, 0xC1A8A9FD, 0x9AC3AC2A,
    0xABC7BB84, 0x22720307, 0xCACBAA0A, 0x624AA1AA, 0x107812AC, 0x90BB6BE9, 0xACD93B51,
    0xD8AADACC, 0xAA6B1842, 0x0B449E92, 0xD9AD633F, 0xDACEAE2A, 0x2DB2D958, 0x7AAB6A9E,
    0xF4B8AB5A, 0x4798813E, 0xBE1C5A12, 0x4AC44DCA, 0xAF6AF5AF, 0x2B7E16E0, 0x9AF08411,
    0x06C0D110, 0xD7AE47F1, 0x5AE3B02A, 0x05B1D29E, 0x09ADD02F, 0x70FF3EF1, 0x80C8081E,
    0xBD86C28B, 0x3B04B018, 0xAA4189B0, 0x1B0FFAFC, 0x3AD8A657, 0x1D6B1DB1, 0xDE6D0AE6,
    0x3A45AEB2, 0x9CE56BB2, 0x6D78805E, 0x75AA4F0A, 0xB2EB2DAF, 0xB35CCB2F, 0xC0BE0007,
    0x109326A4, 0x15B1E0F7, 0xAB3BB1CB, 0x1879655D, 0x87B184DB, 0x472171F7, 0x1CC20B12,
    0x0234F102, 0x23915B41, 0x0FFA7710, 0x429E2276, 0x68BC0FE6, 0x7EA294B1, 0x098062AA,
    0x5B5B95E8, 0x95DB5D5D, 0x6077BB5E, 0x4B5FB5CB, 0x808B61B6, 0x6FB68B59, 0x9B6A80A8,
    0xB6CB67B6, 0x71B6EB6F, 0xDB72B6BB, 0xB76B73B6, 0x70B78B75, 0xCB60B77B, 0x54804D2A,
    0x89173B2A, 0xAA9F7170, 0xB14B85B3, 0xCF1D458E, 0x4B22AE70, 0xAEAB8DB2, 0x3AAD43E8,
    0xC5007723, 0x0EA12EA4, 0x303C912E, 0xCB9BB9AB, 0xA8C526B9, 0x4C0F8000, 0x38BA044A,
    0xB39B86A9, 0xAEBA7B87, 0x86425438, 0xB9570503, 0xFF49B12C, 0x16882630, 0x3236A779,
    0x6447F451, 0x603A1094, 0x9AE0FF3C, 0xFFB40109, 0x788A0500, 0x05E9E105, 0x660FF70C,
    0xE06E7850, 0x3BD0FF9B, 0x3F07A0FF, 0x98761090, 0x3BB08610, 0x9AB831CF, 0x777A778A,
    0x0FF97909, 0x0F337638, 0xF98D0A3A, 0x10271D0F, 0x020570A7, 0xC1023B11, 0x1020580A,
    0x0205A0AD, 0xFBF10AF1, 0x1E83AF0F, 0xF110205C, 0x605DBF93, 0x3E4BFC10, 0x0056705E,
    0x7C025B6C, 0x5FE05F0B, 0x07646C06, 0xCC09C0AC, 0xC0B881C0, 0x08C0DC0E, 0x2C13C10C,
    0xC0FC15C1, 0x17C11C16, 0xCC19C1AC, 0xC1BC14C1, 0x18C1DC1E, 0x0C13C20C, 0x037C0B06,
    0x3BB80821, 0xB03E0791, 0xB3CBA6B1, 0xD41F6BA8, 0xC2DC3621, 0xC36B8FB8, 0xAA3EDAE9,
    0xA03E1093, 0x1EEC299F, 0x4B12E0FC, 0x4C43B9D0, 0x404C45C4, 0xF312B324, 0x6087A4C0,
    0xBA9B6004, 0x2EC4FC2F, 0x61D4507C, 0x47B2B70F, 0x58BAFB18, 0x74C3AC7C, 0xC3EC59AC,
    0x6CC5A5E4, 0x0AAA70F2, 0xC65C52C3, 0x0238A857, 0x8B25AE81, 0x2E1C6CC3, 0x83715827,
    0xAC596BEB, 0x3D212E09, 0x79C78C46, 0x32F5C7AC, 0x0FB00052, 0x476BB990, 0x4C508E2B,
    0xC51C66C8, 0xB89B6311, 0x40240FF9, 0xC5EC5F32, 0x91C5DC8F, 0x2C8EC61C, 0x0601F0C9,
    0x86A71032, 0x9C67C85C, 0x9A01D41B, 0x6EC37607, 0x356AB8EC, 0x44B44C83, 0x2E0E9C59,
    0xCC7B43D1, 0xCAECADCA, 0x4C08A231, 0xAC837D2A, 0xC9CCB5C9, 0x4DA75C9B, 0x06A537DB,
    0xCBDC93C9, 0x95CBEC94, 0x94F2CBFC, 0xA5A9E105, 0xC9C87CB6, 0x20F9192C, 0x98576B64,
    0xA3CA1CA2, 0xF8872E1C, 0xC980620F, 0xFA1EDCC0, 0xF33612E0, 0xCDECDDCA, 0x2B15DCDF,
    0x288D0002, 0x08B12CCC, 0xB8C4E048, 0xBCC8CEAC, 0x3837E8CE, 0xC342301C, 0x4CC1CE5C,
    0xCF2CD8CF, 0xC0244CF5, 0xCCB7C991, 0x24CCFDCE, 0x2B0CB1D4, 0x4CD2C6B7, 0x117CD1D0,
    0x92109644, 0x0A10C420, 0x093C5943, 0x11CE0C76, 0xAD13D12D, 0x12B22214, 0x829900EE,
    0xA0CC1096, 0xCEDB0006, 0x20CFECCA, 0x0383CFFD, 0xCF6CF77C, 0xF8D27CF3, 0xDD26D28C,
    0x94D05231, 0x31CFCCC7, 0x41F9D22D, 0xD020CA1D, 0x05C6DC35, 0x8D08AE9D, 0xC59C3D9F,
    0x3812E0E7, 0x4D43D144, 0x108D13D4, 0x95C4012B, 0x8482026C, 0xD1FD3329, 0x8BD21D4F,
    0x537D9A81, 0xD56D2BD2, 0x29D58D2A, 0xCD2CD5AD, 0x9A1CFA1E, 0x97D32D50, 0x135B1D4A,
    0xCD0D3AC0, 0xC2117D39, 0x471120B0, 0x12BC7FCF, 0x71D45CDC, 0xACACD72D, 0x05DD282B,
    0x4EC64B29, 0x1D7BD51D, 0xA76315D6, 0x5C61B37D, 0xBD82D59D, 0xD85D57D5, 0xFBCC5B18,
    0xCD7DD7AC, 0xC321A9D8, 0x68CA0392, 0xCCD0D92D, 0x67DD0AD3, 0x95C59321, 0xCD9BD738,
    0xA86B9AD9, 0x900D9000, 0x010942C9, 0xD60665BF, 0xEDDA8D8B, 0xA37D9B6C, 0xDAED848A,
    0x83DAFD86, 0x15E5DB0D, 0xD79CD706, 0x00DB8DA7, 0x979B1D49, 0xD93D06A4, 0x10B0AD66,
    0xF0135FF1, 0xDA1C5948, 0xC9DC8D9D, 0x0C77AC4D, 0x910A8E00, 0xB042301B, 0xDDB9D4DA,
    0xD22DD4D8, 0x4F85A858, 0x86BED594, 0xA5710949, 0x1D48F6FE, 0xAC8DBB60, 0x45F45ADD,
    0x093C5CB3, 0xF9AF03F1, 0x0240450F, 0x09707109, 0x9B7F04E1, 0x9E010932, 0x09D77109,
    0xD3BECD61, 0x78578332, 0x0903606B, 0x14BFBCC1, 0x5C1BCE4C, 0x09BD185E, 0xFA1D07C1,
    0xE0C07D0F, 0xFF87707F, 0x20FFBD40, 0x295A7F08, 0xD7BD5044, 0x7109BD6B, 0xE1DBD708,
    0x7B77C109, 0x308A3337, 0x109E24B8, 0x27BD8E26, 0x0B82B83E, 0xE21333E2, 0x1A279E1F,
    0xD109E32E, 0xA7E0FF8C, 0x10E11BD3, 0xF07D109E, 0xBD207B77, 0x5EE3FBD0, 0x2E045C08,
    0x26DBCDE0, 0x098EF109, 0xF3C00651, 0x109DB50F, 0xFFB0805C, 0x59D10570, 0xB7E0FFDF,
    0x8C5A7BC0, 0x9C3DC3B7, 0x4679AADE, 0x2845902E, 0xD02247F0, 0x90F693C8, 0x1F6BA6B5,
    0xCD87DA35, 0xCB49F013, 0x7AD7CDD5, 0xA0FF966D, 0xDC0B216E, 0x20D67DBE, 0x6109AB21,
    0x0EFCF45A, 0xCA70C12E, 0xBE83E82D, 0x12B330A1, 0x6BC955C5, 0x22B72759, 0xE8EDD6B1,
    0x80A34E71, 0xFCB39829, 0xE4A68683, 0x09A2FDFD, 0x30560A61, 0x0C320E3D, 0x0976750E,
    0x08177641, 0x81535B76, 0x7EA3C395, 0xA0F43763, 0x102C55C8, 0x5187EB50, 0x2B53102B,
    0x28BB56D5, 0xB82AA803, 0x2EB986EE, 0xB79B7A86, 0x6AEBEB74, 0x4EC3EBAB, 0xEBCEC580,
    0x8729B86D, 0x264180F1, 0xEAF5A910, 0x028302B7, 0x63749B71, 0x7517E037, 0xFF6DD759,
    0x37600DE0, 0x2DBD1B5F, 0xF233DD6A, 0x9C71BE33, 0x431D8910, 0x09AC7A2D, 0xCE70B84E,
    0x193DA9EE, 0x77C34E75, 0xED06DBFE, 0x49CE3E9C, 0xEEC61ABB, 0xCEFBE844, 0xB2C9D5EF,
    0x3A070B18, 0xA0FD1020, 0xEEDEEE27, 0xA4F07E8F, 0x26CD80E1, 0xC5F78D04, 0x592A4D5E,
    0x4800EBAB, 0xF16B112A, 0x66BAAF08, 0xDF1A29D8, 0xB57F148B, 0xAFB5AEBB, 0x0E5E7E4A,
    0x65E08C91, 0x29F06EEB, 0x3EF0A25F, 0xEF2E78D0, 0xD83EFCD0, 0x600D1097, 0x0A7D5797,
    0x39F38EFD, 0x89DD953F, 0x899091D2, 0x2A666185, 0x9F43E90F, 0x1D224CF0, 0x0B83FE55,
    0x2F456C57, 0x941B87F4, 0x3D10907F, 0x1C5F3270, 0xAE1A0F0A, 0x70F58F4D, 0x9D38F2C9,
    0xB8EF2FE7, 0x5A0FFC70, 0xA8DCD87E, 0xF66F65F3, 0x00616892, 0xA9900D40, 0xDA6F3E42,
    0x70F59F44, 0x925ED60F, 0xC5FE0106, 0x0F109D2E, 0xFF18F4C8, 0x109D5389, 0x6B823461,
    0xCF57A9EE, 0x9F2F72F7, 0x2EE76E9F, 0xCEF3F8AF, 0x07820B64, 0x1E95A650, 0x112B992A,
    0xF96F67E8, 0x1D7B7F97, 0x5CDA12BA, 0x757794C9, 0x71D303E3, 0x3F86F7BF, 0x2AC195FA,
    0x04C5FE37, 0xDC8A7E27, 0xFA2FA4E8, 0x9DED8A03, 0x062D8B66, 0x0690CB68, 0xAFFA59F1,
    0x51D49E5F, 0xF8BEF1A0, 0x16FBFF5D, 0xE0FFB911, 0xF34B440A, 0x984D5CF4, 0x0FCBFCAF,
    0xA4C0906E, 0x3D384D1A, 0x5FAEFBAA, 0x2ACB87F8, 0x3F95C0A0, 0xF7DE7008, 0xFDEFD4D5,
    0xCD25E95F, 0xFBB2FB70, 0xCF095898, 0x8A39B109, 0x2FD3FD5D, 0x7A466F92, 0xF1FC1F5E,
    0xF0469CEF, 0x0B9D87DE, 0xF9FF8FCC, 0xC0C9657F, 0x4DDDF3A4, 0x84100921, 0x27FBFC02,
    0x82C1A090, 0x541E1303, 0x4361D088, 0x2E250C88, 0xA270F8A4, 0x33118AC5, 0xD188D45E,
    0x1C904763, 0xF9246E45, 0x92C9A471, 0x549E5321, 0x4B65D289, 0xAE652C98, 0xA672F9A4,
    0x73319ACD, 0x1389D4DE, 0xBD81A1E3, 0x47F800C2, 0x00510040, 0x4525FF49, 0x52E994AA,
    0x4E9B51A7, 0x69F54A85, 0x91440202, 0x0FFA219D, 0x3BB04F28, 0x59ECFAC5, 0xB3D92C36,
    0x45AAC766, 0x5BED36BB, 0x0D1134B7, 0xAAC5653C, 0x9F79AAD4, 0xF7CBC5EE, 0x1A19D12E,
    0xA3E3C288, 0xC45B10B0, 0x4E2EDB70, 0xE2B1971C, 0x471D8FC6, 0xAE190CA6, 0xECE581A1,
    0x85D5B40C, 0x9F2FAE68, 0x2D03FF43, 0xD1E934DA, 0x569F51A5, 0x6BF53ADD, 0xCF57B0D6,
    0x36DB1D76, 0x71B5D96D, 0x86460EDF, 0x7F1716A8, 0x2E25F6F5, 0xBFF0EFDC, 0x607298E3,
    0x73F9DCDA, 0x4FA5D1E8, 0xFADD5EA7, 0xB5D9EC75, 0xDDDEE76F, 0xE1F077FB, 0x5F278FC5,
    0xF479FCDE, 0x67AFD5E9, 0x7BFDDEDF, 0xCFE5F1F8, 0xD87D1FA7, 0x91C5FC71, 0xB54FCFEF,
    0x16AE8F0E, 0xCB326CA9, 0x32503408, 0xB04C0704, 0x540F05C0, 0x210641F0, 0x0A423074,
    0x9FECC249, 0x8A20DC6A, 0xD38C0502, 0xF4FE3FAF, 0xAE89E4CB, 0x41B0AAE6, 0xF14C2514,
    0x645B1544, 0xFF09C5F1, 0x1D0E1131, 0xC431B43C, 0x42929F1B, 0x19FAA205, 0x5718C5C4,
    0x2148120C, 0x48F2248B, 0x50BC1B18, 0xDB3CCE33, 0xA2DD49ED, 0xDBCA6DCC, 0x4A92ACA4,
    0x32B4B128, 0x1978A24B, 0xA24F1FEA, 0x3243F1C8, 0x89D1B4C7, 0x7354D2FA, 0x74DB364D,
    0xE3384DF3, 0x3A4E7394, 0x4EF3B4EB, 0x2E7CF33C, 0x2CFB1018, 0x0EBCC713, 0x639FEAC8,
    0xABE850D0, 0x32449321, 0x548D4651, 0x1746D1F4, 0x48523475, 0xC2E9C527, 0x4A20F275,
    0x04CC0A85, 0xBAE14FD4, 0x442BA180, 0xD4F4952D, 0x74A5514A, 0x3AE15355, 0x027C9FEC,
    0xE606C819, 0xD413FD3E, 0x9000ECFD, 0x6D5552A0, 0x835F5595, 0x6058754D, 0xB3725C0B,
    0x72BB3A7F, 0xDD9B2E59, 0xA32D59F2, 0xDBDA1665, 0x28830174, 0x2183465C, 0xF5714F03,
    0xF4534CB6, 0x725C7714, 0x5CF735CB, 0x7755D374, 0x15DB765D, 0xAEA4D3B7, 0x5BDBB6F9,
    0x00602A95, 0x43C1CEA2, 0xF58B0BA1, 0x858057F7, 0x80E057FD, 0x60782D89, 0x47DD5F62,
    0x2894A210, 0x01885E81, 0xA202411D, 0x30C3D1DA, 0x58363382, 0x3E3B8463, 0xA881A7F8,
    0x06206369, 0x5E78880C, 0xA2913F40, 0x6E3F8E44, 0x638DE5F9, 0x63B1B8F6, 0x5A569C9B,
    0x36A67167, 0xE67B9BE7, 0x7C613679, 0x110827FB, 0x68D7AE4E, 0x8A618800, 0x769B7701,
    0xA3A869FA, 0xAA6A7A96, 0xDC5AB6AB, 0xFAD65020, 0xC05C7FE8, 0xFE77A880, 0x976658C0,
    0x667986C9, 0x7B46D3B3, 0xBD19B2ED, 0x6D1A8E30, 0xA3501A45, 0xABD2FCBA, 0x3BD6DBB3,
    0xC6D5BE6F, 0x34819129, 0xC26E5121, 0x00A05651, 0x83318EA2, 0x66FBBF65, 0x1BBDF1DB,
    0x591F561F, 0x0C6601FF, 0x79F0BD6C, 0xF675CE67, 0x7FCFF37C, 0x7FF3060E, 0xEE611886,
    0xE10621AD, 0x775BD66A, 0x63D875FD, 0xDA767D97, 0xEB9003DF, 0x632709D4, 0xF7210086,
    0x81C7F25D, 0xE2783C8F, 0xC4D21787, 0x27FCC44E, 0xBF9BDC00, 0x181F8F71, 0xE9F7FE2F,
    0x55BEA785, 0x0E055E7F, 0x9AF3E775, 0xF2752898, 0xF27AF7E0, 0x7ABF37AD, 0xE7F22DF4,
    0xCE827FC7, 0x7FF8741C, 0xF9FE3CEE, 0x97CD1FE5, 0x8239192F, 0xEB91FE7B, 0xD42CA987,
    0x2403804E, 0x780D0160, 0x90260440, 0x5DC84B3E, 0x0012F103, 0x14C3FDE6, 0x89885056,
    0x0BBE57D2, 0x1878CF9E, 0x5506A0DC, 0xA06515F5, 0x300D2881, 0x07BAE159, 0x808420A2,
    0xC400F828, 0xC2F832D8, 0x8390C20E, 0x3A50B93A, 0x140FF5F6, 0xB97FA050, 0x880A427B,
    0x7A19BD92, 0x1C328850, 0x37D6E462, 0x03FDF710, 0x1FB39A17, 0x3F5742FD, 0x67113E28,
    0x26CA2142, 0x7C006706, 0x65877099, 0xBD0284EA, 0x863045F8, 0x24638C51, 0xE160BBA3,
    0x85122DC0, 0x5438721B, 0xC6F88910, 0x8DD1C618, 0x4EA22C72, 0x3D8F055E, 0x1605440C,
    0xFF16A348, 0xFDA60181, 0x90711B63, 0x390CBF5E, 0x321C823E, 0x87FC8891, 0x48C91B22,
    0x92124647, 0x25645C93, 0x4949691F, 0x97929262, 0x3B2664E4, 0x864F49B9, 0xD4A39412,
    0x693F2964, 0x92A2514A, 0x6564A794, 0x3801FF2A, 0x2B0E91CB, 0x2419447D, 0x5815D094,
    0xBB8E71C2, 0x092F63AC, 0x09F6C474, 0x244E896D, 0x198D1366, 0x06AA62C5, 0xC179447F,
    0x4688FCD7, 0x8CA251B9, 0x3566A4D3, 0x6C4D79AD, 0xB13A9366, 0x29342680, 0x84A200B0,
    0xA49C5903, 0x597D2EA3, 0xD2F2744E, 0xCAFC6F9C, 0x4B406217, 0x822009AE, 0x1F58ABC9,
    0x8B8EC206, 0xF79F03FD, 0xF53EE7CC, 0xF2804FD9, 0x1CFFA053, 0x1A0D3FA8, 0xF4268250,
    0xE84505A0, 0x50DA1542, 0xA2543288, 0x43A89D0F, 0x8A511A2D, 0x15A2F466, 0x3546E8C5,
    0x729051DA, 0xAD1FA454, 0x01FF3DA8, 0xD3C02108, 0xE2C80753, 0xC6D0D232, 0x9D33AA73,
    0x2FE9A531, 0x61C497D9, 0xC98A531E, 0x8B4EA9DC, 0x10310BF9, 0x50390DE5, 0xC2A533E9,
    0x4E20A60A, 0x6A654B9B, 0x54FA9D53, 0x74EB96A8, 0x37476149, 0x2B94A84F, 0x3577A0B4,
    0xBB3AE99D, 0x869955FA, 0x12265895, 0x8A8A1505, 0xE87409B2, 0x0098251F, 0xB1404851,
    0xADD5BC7F, 0x5C6B9570, 0xB9D77AE9, 0x7AAED5E6, 0xF15F6BAD, 0xFAC057BA, 0x157FAF95,
    0x7B09606C, 0xD626C1D8, 0x6C2D8AB0, 0x58BB1163, 0xB1963AC8, 0x646C958F, 0xC9D97B29,
    0x8CB2D666, 0x1C3FEB6D, 0xFEB38070, 0xA14499A9, 0x085C1F87, 0xD58AAE56, 0x260562AB,
    0x4C88994E, 0xB616C69F, 0x501D0DB3, 0x2408D289, 0xF6691684, 0xA205CA60, 0x06E05BFA,
    0x25C3B857, 0x754676EE, 0x81523ED5, 0x84515D05, 0xDABB516A, 0xBA1746D4, 0x85CB6DD3,
    0xA20731C0, 0x469C0058, 0xBD772DD5, 0x82EED56B, 0x1DC8BBF7, 0x2BC9786F, 0x67EAF45E,
    0x4AE8370D, 0x5EFB9EBF, 0xA697C6E7, 0x6BE615AD, 0x9E5B4A7B, 0xB2B657E6, 0x665116B1,
    0x74A205C1, 0x35E601E0, 0xF2983D13, 0x5826E2B5, 0x70660BC1, 0xC3E8C383, 0x37F846F3,
    0x734821C1, 0x0BDF0BA5, 0x1ABA97CB, 0x7CABEE7E, 0xA0271034, 0x25E5C080, 0x6C477A71,
    0x384B12E2, 0x315627C5, 0x8035718A, 0x15C3FCA3, 0x05882401, 0x0CE1BC31, 0xF49CD8E7,
    0xF57EDF7D, 0x071F5F8B, 0xFDB63559, 0xC04E1347, 0x2FFD1B62, 0x70707829, 0x64FC9D93,
    0x5DB94728, 0xF7717065, 0x1C530A80, 0x5BC6F967, 0x879770E6, 0x304A95F8, 0x262BC901,
    0x6CC79573, 0x58B732E6, 0x335E67CD, 0x011042A0, 0x0EA38CA2, 0x96B2F5ED, 0xB4E5CCEB,
    0x3FBEA30D, 0xF99F6FBE, 0x1258E7FC, 0x60431025, 0x210A8DB3, 0x5A274465, 0xF4668BD1,
    0x6681527B, 0x0CE32594, 0x9DB3C658, 0x4C695C75, 0x176CF9DF, 0xD486D912, 0x8336E90A,
    0x1E69D0BA, 0x7D49A8B5, 0x6883536A, 0xE206140B, 0x6AED35A5, 0x8EEBFB58, 0x2EC7F985,
    0x3F6425AE, 0x40D01AE3, 0x0AE905FE, 0xD4A20451, 0x03CED50D, 0xD0105306, 0x5B276468,
    0xF656CBD9, 0x9FAD5227, 0x1FF6F815, 0x3FF5A0EB, 0x6C69655E, 0xDAD63A67, 0xF4C6B6CE,
    0x2C818821, 0x0EA504C1, 0x7DC9B975, 0xFBA361EE, 0x453663D9, 0x6DC7A415, 0xDBBABF78,
    0x3910BA30, 0x5A9030EA, 0xFBC80938, 0x77BF35CE, 0x0A9C9A3D, 0x7949DD58, 0x7D98D2C7,
    0x5C278470, 0x6DF550E1, 0xEEB1C052, 0xDC6120FD, 0xBC65C904, 0x8B6F2DB7, 0x0DE35BCF,
    0xA026D132, 0x4351F030, 0x24582890, 0xD1FF2CCA, 0x03FED000, 0x07FEC702, 0x81728887,
    0x01A06640, 0x0380D944, 0x7FE03C02, 0x44020078, 0xFFCEC101, 0x00A266F1, 0x5BDF1FFD,
    0x4AD9676B, 0xC3FFA394, 0x3A5D9D04, 0x74AE9A51, 0xB3BD1BA6, 0x08BA2575, 0xABF3FCE0,
    0x3E03FD0B, 0x39CE00F7, 0xD47FF360, 0x981A289C, 0xA9031FF9, 0x95A4A25D, 0x00481028,
    0x944B3E51, 0xE4D09405, 0x3C87FF24, 0xBC6E9E41, 0x36E8453F, 0xFDC66464, 0xCFC0718E,
    0xD2C966A4, 0xFF0DBF77, 0xF6C7C46F, 0x078720EB, 0x70B04853, 0xF25E47C8, 0xD1603F93,
    0x880FE292, 0x8F08A71F, 0x37E071AF, 0x5FBFF9EE, 0x1A16F45C, 0x30EE3988, 0x1DDFAE90,
    0x87FFA957, 0x0FF68A10, 0x1FF3BC30, 0x5101E877, 0x7FDB9116, 0x75288E08, 0x002C8A21,
    0x112F0FFC, 0xFE541865, 0x02890847, 0x2510358D, 0x06C94443, 0x0728D41C, 0xBB037CA2,
    0x1D0708FF, 0xA26F6288, 0x775F3E98, 0x983A0A20, 0x821B0FFC, 0x1ED3534F, 0xC288A67F,
    0xF3E3F18E, 0x7F587AFC, 0xFE79FFFB, 0x7C3F8FF2, 0xF87EFBE0, 0xECFDE1FF, 0x9A1FFF73,
    0xA99CF389, 0x007FFD6F, 0x06EC0007, 0x422413E8, 0x786B87FA, 0x90D3E503, 0x3606887F,
    0x50670A20, 0xBE30A203, 0xE206207F, 0x9AA085F3, 0x8A23DF0D, 0xA202C055, 0xFAB30518,
    0x0A238F07, 0x57B31049, 0xE8A20232, 0x0A202003, 0x328A21B8, 0xB0A201A0, 0x07FAE582,
    0x7F987824, 0x200F01D0, 0xA3E0160A, 0x08B9F39C, 0xA07FBB68, 0x2F23CCBB, 0xD037791A,
    0x0BD1C23B, 0x3C188A3D, 0x2735D165, 0xEC27B7F4, 0x15132229, 0xE70A4BD5, 0xCC2C3CA3,
    0xC2DC2D42, 0xA48E61A6, 0xA42187D8, 0xC233CD8A, 0xCFC24424, 0x3C34432B, 0x88191943,
    0x2A81F03B, 0x1BA20AA4, 0x881BFC91, 0x3B3CEB0F, 0xB43BC35C, 0x32C43D20, 0x55C3E944,
    0xBA4F2572, 0xA1744136, 0x42882441, 0x021736B4, 0x255C3FC4, 0x3E15E43F, 0xCC4820AC,
    0x43C448C3, 0x8A43DC4A, 0x815EC49B, 0x0789CA95, 0x8197D293, 0x0BE706D0, 0x8500A226,
    0x37BD7410, 0x400587FC, 0x34907F9C, 0x25433152, 0x6433457C, 0x3C4BC2C2, 0xC3C5AC28,
    0xA1D21D13, 0x43095D83, 0x2E42B91C, 0x0C6045FC, 0x93746146, 0x250A4B8F, 0x501FB51B,
    0xC5843BA1, 0x35466434, 0xFC254674, 0x83706A0A, 0xBBC1F881, 0x4C09BB23, 0xA4625C03,
    0x5746836B, 0x744398E4, 0x84614424, 0x2D858081, 0xE0234538, 0xAD3958BC, 0x76C66C6F,
    0x390BB2CC, 0x3C23D387, 0x5B45BC5A, 0x20DE47AC, 0x0A20FF9D, 0x683901E6, 0x0C61AA48,
    0x481C8148, 0x4D0F0482, 0xE0E3C5E0, 0xC65C1583, 0x7746F477, 0xC467C87C, 0x88330F20,
    0xBB81782E, 0x311E0283, 0xC8DC86C4, 0x5491329A, 0x13BB82B8, 0x84E07FB9, 0x8844738F,
    0x3C88C874, 0x06B1B1C9, 0x28C7A46A, 0x8C97C7C4, 0x85D8D549, 0xB4B198D1, 0xD37334FB,
    0x0A607122, 0x9F482993, 0xF4A049FC, 0x49CA6949, 0x499CB994, 0xE4A44944, 0xCA5C94C8,
    0xFC113272, 0x43930819, 0x4748A548, 0x7636F8A2, 0xCCAC4954, 0x83A91332, 0xAE3BCBDA,
    0xFA1D0131, 0x4ABBD307, 0xA4CA54A6, 0x23E1B1CC, 0x2FB05B8A, 0x9947BC98, 0xD0D1C7B4,
    0x85A8D185, 0xED80ABDF, 0xF8A9CA92, 0x8A38A606, 0xBF4BECA0, 0x1BCA4BFC, 0x85BB744A,
    0xB34A382F, 0x3CACCC3C, 0x9184B2CB, 0x7007C957, 0xF4AA07FB, 0x4BB11BCA, 0x56C048A2,
    0x7CC44C4C, 0x079157A1, 0x69016293, 0xF0BCCBC3, 0x4861AC83, 0xC5CD2CCC, 0x5862B79C,
    0xCB587F9C, 0xD6CB84B6, 0xF4B93404, 0x0093DFAF, 0xA64D0420, 0x70A4B030, 0x4DDCC043,
    0x464DECDE, 0x4CD0048B, 0x27C8753A, 0xC54D3444, 0x44CCCE3C, 0x1131184E, 0x7B92705A,
    0xE83C3741, 0xCE31BC4A, 0x131B3CE4, 0x131A0561, 0xC6C4D049, 0xBE83A400, 0x0CEA4EAB,
    0x4D4A0CCF, 0xB7CB64B5, 0x0CF3CD7C, 0x8A240C32, 0xA0C37B10, 0x8CF84DF2, 0xAE14F94F,
    0x6E0A4B9D, 0xE81BCD00, 0x4D3CCB80, 0xF04FE4E5, 0xA184CFF4, 0x11D88343, 0xA24DA374,
    0x246D0660, 0xD05D004D, 0xC7CC6A18, 0xB41B024C, 0x83F8A54D, 0xFEC4A4D1, 0x9CFFD0BC,
    0x4D5CF229, 0x0F4B74F3, 0x54F4CD75, 0x0A233D0D, 0xC92F6035, 0x9A00A2D4, 0x515D154F,
    0x3E26AD16, 0x22DE0A4A, 0x81A93FCA, 0x0CA7215A, 0xC4F151BD, 0xA9851CD0, 0x943E2062,
    0x25083743, 0x21687B0A, 0x2351DC8D, 0xA91317F5, 0x80422605, 0x0ECD0141, 0x286F3B00,
    0x523D1B40, 0xEA50651D, 0x50631579, 0x510CD64D, 0x9850FD10, 0x79DDA24C, 0x516843C3,
    0x33532D32, 0x01782035, 0xCD007980, 0x4B16E017, 0xC53852AA, 0x52A52B51, 0x81C8988D,
    0xB8190308, 0x024847BB, 0x3F539C32, 0xA95795FD, 0x1A19B107, 0xA2509465, 0x343703C8,
    0xD3953FC9, 0x7B1C9538, 0xEB5ED418, 0x52E52F31, 0x0CB5E4F4, 0x2022042C, 0x513CE78A,
    0x33979150, 0x0D5054FD, 0x4FA9AAD5, 0xD0079000, 0xD81C036C, 0x545D46CF, 0x56556D3A,
    0x88AF8925, 0x8A203686, 0x51C9C00A, 0xDC20009B, 0x54650B50, 0x13089D5E, 0x33DC0461,
    0xB9E87FD4, 0x29BFF270, 0x4D55D57D, 0x15798156, 0x2507FBBE, 0x8D2ED4AD, 0x35B49856,
    0x738588A2, 0x3394ACF4, 0x551068D4, 0x6F56ED6E, 0x49121745, 0x4D007D0A, 0x8A885473,
    0x456455EB, 0x48856557, 0x42041913, 0x713FD4E3, 0xC4F36901, 0xFFD75537, 0x50621134,
    0x3BBB95CD, 0x5DC1304A, 0x4D75D575, 0x95799957, 0x0E8CE14C, 0x4D4A5695, 0xD6A32058,
    0x0F05687F, 0x01C387FC, 0x8A606C39, 0x8B56F90E, 0x658C58BD, 0x56103F13, 0x7302C055,
    0x058057B5, 0xC3558159, 0x9307810B, 0x115A81C2, 0xCAAA7756, 0x91CE2CC7, 0xF884580D,
    0x07FBED0A, 0xBB80D81A, 0x2521214B, 0x59859752, 0x02D9E591, 0x40721579, 0x58385B16,
    0x855A2D68, 0xACD892C5, 0x41C35BB5, 0xA4BCC390, 0x8D8C8268, 0x5A9DA95A, 0x1914D0F5,
    0xF8BA94F5, 0xDADD90D8, 0xCF59ED97, 0x8927524B, 0x1405ABCA, 0x4907FBBB, 0xF5052060,
    0x8AFD3F59, 0x7FAD3078, 0xBD784F68, 0x0A219291, 0xAED7FD86, 0x9DB55AE5, 0xC0A15794,
    0xBF549D2D, 0x15BFD845, 0x82B9A13E, 0xA6561419, 0x4DAA1340, 0xDC5DC55C, 0x51DAB0EC,
    0x187FDB9B, 0x5AF34A3E, 0xBBDCA5BC, 0x307EB1C5, 0xC1803388, 0x089405B8, 0x4D48B960,
    0xB4ADCB5B, 0x5814436B, 0x8479872A, 0x8A55C35B, 0x1E81A833, 0x8DD1C6E9, 0x891DCADD,
    0x11065957, 0x0DA350E2, 0xA62DA3DC, 0x1582A224, 0x65C44378, 0xDE1DE15C, 0xCEDC75E1,
    0xE8140A7D, 0xDCBD2294, 0xE65D95BC, 0x190BB3AD, 0x3A796407, 0x1E015D61, 0x9DC9C014,
    0x44389A5D, 0x464425EE, 0xCA0B449C, 0xA0B25CA5, 0x7726010B, 0x107FA3C8, 0xA7A08199,
    0x5396D87F, 0x30713A7C, 0xDE72F756, 0x9B5ED5E6, 0xDDC8C758, 0x5FDDDDB3, 0x2A2D85DD,
    0x804B87FA, 0x80287FDA, 0xE0D43318, 0x4E045E25, 0x5E358CE0, 0xB0813C5E, 0xB5E7C3AC,
    0x609DFA5F, 0x6B11325F, 0xBD260A25, 0x8A22ACBB, 0xE99CA87B, 0x5445A56C, 0xE1061125,
    0x12C45611, 0x95EF46E6, 0x87E26008, 0xCA87DCC7, 0x1081A161, 0xCCE081D4, 0xF4076881,
    0xA881BEF5, 0x86C081BE, 0x08881837, 0xC0322244, 0x08182F37, 0x7FB77052, 0xA0A225B0,
    0xC2A0A23D, 0x14BD79D2, 0x3C6B5E50, 0x2961AE5E, 0x1A0578A2, 0x8DFADBB3, 0x906E2D60,
    0x8361B157, 0x0DC05DCD, 0x85E3C4E3, 0xBB05435B, 0x322CC208, 0x635E0560, 0x0656EE36,
    0x70E3DB1E, 0x9F611EE0, 0x3AE0A62D, 0xBAE96096, 0x1B89B7B6, 0x20DB2D61, 0x182F07FD,
    0xC8A87F95, 0x41C8B625, 0x3E426436, 0x645E42E4, 0x44E46E45, 0x8E44647E, 0xE4864664,
    0x47649649, 0x1647E4B6, 0xE4302E64, 0xA2309E4D, 0xA87FE0D8, 0x828C1982, 0x715B848C,
    0xE0238A23, 0x07FC533C, 0x7F9D581F, 0xFCFD01C0, 0x53701907, 0x812BD5EB, 0x1D5A87FB,
    0xE0CA12A1, 0x386028A2, 0x58E165FE, 0x5D781B03, 0x6362CCB2, 0x788463B6, 0x881DF395,
    0xFE6315BE, 0x24286675, 0xB768A263, 0x60634B91, 0x6E0391C6, 0x66DE6D63, 0x31E37D15,
    0x4639BAB3, 0xE3C67166, 0x4C1F463B, 0x481BA7C9, 0xDD5E6BD9, 0x29676453, 0x2579351E,
    0x4EFDD40A, 0x7AE63E72, 0x79578B56, 0x666B5A07, 0x67E7EE30, 0x96690DBE, 0xC2162320,
    0x6C8E2E75, 0x4E8466E6, 0xE6F4BFE8, 0x1D838DCE, 0xB07F0818, 0x672E71B1, 0x0C68A67B,
    0xD8AD9132, 0xE82CBB90, 0x77E8E676, 0xFE7768FE, 0x40C07FD1, 0x9367BCC3, 0x78B0E8B6,
    0x4F2BE695, 0x685FEE7F, 0x2E80B5CE, 0x36162305, 0x9B685635, 0x649FE9BE, 0x19538868,
    0x9430B085, 0x0E8AE9FE, 0x1132D56A, 0x9A49284D, 0x4E7768F6, 0xEA5EA46A, 0x455B2AEE,
    0x3DD11FD8, 0x6A96A169, 0x66957895, 0xFE7E5048, 0x6976AD67, 0x56D86166, 0x080B31A0,
    0x69C69AA4, 0x606B2EB2, 0x2E6BE9D4, 0xE89E9EEA, 0xB66A06A9, 0xE081D65E, 0x03408307,
    0xA66905D7, 0xCE8EEBB6, 0x02CB126B, 0x7C07FAAD, 0x80AE8408, 0x6C1EAA5D, 0x81DDA6B7,
    0xC4090678, 0xE97EADDD, 0x119D0E96, 0x382587FD, 0x8AAEBC32, 0xCB6B3683, 0x43856CBE,
    0xEB5311EB, 0xC26B7B0A, 0xDED06B6E, 0x075881B4, 0x1C81E5F4, 0xD6A56C9C, 0x6D46D4EB,
    0x7FAD18A5, 0xFB3A5F88, 0x6C2ECF6C, 0x2C87FCAB, 0x5EC65495, 0x9666C6EC, 0x89824A24,
    0x0ECC6B1B, 0x3656E16E, 0xCE513ECD, 0x0E9F07FE, 0xEE5ED96D, 0xAFA17EC2, 0x20A24960,
    0xEE9ED5BA, 0x31EEA6BB, 0x4A4080CB, 0xE2C5DB86, 0x72EE56D9, 0x1C4E157E, 0x6AE29C88,
    0x9DEF2EDD, 0xAEDFEDE9, 0xECA8A4EE, 0xF76F6EE1, 0x36E2B276, 0xEE4EE3B5, 0xE66FAEEE,
    0x19E3EEF6, 0x007D8608, 0xC26EB396, 0x2626D621, 0x2A16408A, 0x3D87FAA2, 0x2341C858,
    0x54C8420A, 0x4270636B, 0x4840D778, 0x41507FA9, 0xA24E88A2, 0x201D8390, 0x4172F58A,
    0x7FD95DCE, 0xF0286500, 0xBCE4C821, 0xA200F81E, 0xF8C10190, 0x87FE3907, 0x7FB9765B,
    0x56A3DC80, 0xD88C9CED, 0x3EC0E87F, 0xFEFB6FC5, 0xAD2881EE, 0x1F6F2081, 0x44B76DCF,
    0xEF63906F, 0x23722EF7, 0x1EF8AE1F, 0x71CEF9DB, 0x266FBF1C, 0x98AF9097, 0x801DB404,
    0xA7EFF208, 0x5C51B980, 0x9F13FB99, 0x7EE0807F, 0xAC4B1441, 0x731DF044, 0x4E446D45,
    0x7E15EC12, 0x52207BCC, 0x790818C2, 0x3A41881C, 0x081835EC, 0x5507FCA3, 0x707FC900,
    0x07FD3E04, 0x3FF02837, 0x647EBA16, 0xB5F9FEED, 0x27D9DED8, 0xBDED7277, 0x6963E910,
    0x477206F3, 0x1A249F8F, 0xF2274143, 0x4B74AF23, 0xEF24AA67, 0xF44725AE, 0x4EF26EE6,
    0x7E8852BF, 0x71954415, 0xE65D68AA, 0xEA9AE142, 0x7302535E, 0x164E9F32, 0x9872081E,
    0x0A263347, 0x3F741670, 0xA4AAD542, 0x74FEC163, 0x0BF4F74E, 0x68A24071, 0xEDDF1FC2,
    0x220DBF46, 0xAC7E2943, 0xF4A6A672, 0x67766F4B, 0xC74CA32F, 0x75E74DBB, 0x6B74F76A,
    0x1D071C77, 0xF523D888, 0x7FD0207F, 0x2DB507F0, 0x8201B1DD, 0x4F6F5542, 0xFDDF8299,
    0xD7AE1907, 0x3BF43F5E, 0x4081DCCE, 0xF61F4650, 0xD577AF62, 0x98505FF8, 0x373F6482,
    0x7F767F66, 0x8A0477FF, 0xF69B3476, 0x83776F6B, 0xB98176AF, 0x03E07690, 0xBD6DF0A2,
    0x187FBB7E, 0x4A571B9D, 0x43881E3D, 0x807FC140, 0x81DF6E31, 0x454B1ED3, 0xE784782D,
    0xD47957F4, 0x7A35BF1E, 0x8F47F93F, 0x5F65FFAD, 0x80765CED, 0x5798797F, 0x336F8120,
    0x79CB13B4, 0xCF90563C, 0xF9D77779, 0x728AF902, 0xD78E3EF8, 0xD9B01AEB, 0x0FD7A07F,
    0x011352AE, 0x5B172D05, 0x7FDF76BD, 0xDD552358, 0xD577A979, 0xFED41D40, 0x4794F7B2,
    0x79596679, 0x42F969E5, 0x0F98F7EB, 0x9AAFB17B, 0x0DA3EF99, 0x5E183B28, 0x790F9E5E,
    0xB6FB5FB6, 0x386D1131, 0x4CF816C0, 0x270FDF73, 0x2075EC90, 0x4D3C4CCE, 0xB758E913,
    0x07BAD6CB, 0xF602BA91, 0xA9FB6EA8, 0x810BE72F, 0x7AD4977A, 0x7BF627AC, 0x579612FF,
    0x7B1FAFF6, 0xD67CAFCA, 0xE3327B29, 0xFB57924E, 0xCEFB77C3, 0x80AFFC3F, 0x88183606,
    0x726D5BA4, 0x506B0A27, 0xF5DC3BC0, 0x3C48F38C, 0x075B57DF, 0x8A252791, 0xCF7C2EDB,
    0xE6A9F83F, 0x4561F607, 0xDF7C66C5, 0x8229FACF, 0xFC97AEFC, 0xCB7B0677, 0x27E47E3F,
    0x2F17CC17, 0x43541FCD, 0x87CFFDC7, 0x1037E97E, 0x81A97113, 0x66BD3AD8, 0xEC0C103D,
    0xBEA75662, 0xF7D8587F, 0x8A23996F, 0xE9F899CB, 0xAEDA7DBF, 0x16CE809C, 0xF6FE07C7,
    0xDFAE0DBF, 0xFE36BC77, 0xFB7FAFE4, 0x57E5939F, 0xFEEFE6B1, 0xC37E8FF3, 0xF8807FEF,
    0x00508FF7, 0x160D0481, 0xE0F0981C, 0x8305443F, 0x6FF00191, 0x00890383, 0x68BBFE2E,
    0x8CC6A311, 0x0C6E3F1C, 0xC76451E9, 0xA2472092, 0xE240302C, 0xF91221A0, 0x70B42C31,
    0x0A9AC226, 0x49CC326D, 0x9D4F26F3, 0x3C327738, 0x1554B054, 0x900E0E89, 0x2932693C,
    0x9D4B9453, 0xD12A8D2A, 0xB68902C2, 0x086C48BC, 0xAECFEB74, 0xF57EB93D, 0xD92C33EA,
    0x9EC166B1, 0xAD768B15, 0xD965B6DA, 0x369B75BE, 0x76B9DD2E, 0x8B95DEE1, 0xBEDEAF77,
    0x93FEF975, 0x9E1CEFF9, 0xFEB0B882, 0xA245F5CB, 0x138BC662, 0xD90C6E3F, 0x96C9E531,
    0xAC8E6325, 0xCE6672B9, 0xEE7F2F9B, 0xE933DA0C, 0xA345A6D1, 0x72BAAD0E, 0x3B1230AF,
    0x20189145, 0xB6A7D340, 0x7DAD42A5, 0xDEC689D1, 0x0F037FBE, 0xF1387C2E, 0x238FC6E2,
    0x397CAE4F, 0x9FCEE6F3, 0x7D2E8F43, 0xD6EAF53A, 0xAECF63AF, 0xEEF73B7D, 0x0F83BFDE,
    0xF23C7E2F, 0xA375B73C, 0x435EADCF, 0xFEF68903, 0xD7FC1424, 0xF6F9DE6F, 0x9C07E3EB,
    0xFEFEBE9F, 0xE7DFFFFC, 0xEE00805F, 0x0581A037, 0x82602822, 0x20D82A04, 0x081E0F83,
    0xECFF4398, 0x193FDAE2, 0x79DEA7B4, 0xA1B6E21A, 0x40091887, 0x248E3FDB, 0x0E219591,
    0x7C97E846, 0x09B3FD42, 0x60311214, 0xCE1F7A40, 0x228DA1D8, 0x44809049, 0xD5916CB2,
    0xB9022984, 0x0A289060, 0x47912459, 0x92646842, 0xA4B90E48, 0xF89E0693, 0x1473378F,
    0xA5174B64, 0x6AE586A5, 0x25996DA7, 0xF9825A97, 0x925E98A5, 0x1299A5D9, 0x281126B5,
    0x2226C853, 0x88D61C8D, 0xD1E46F1E, 0x779DA759, 0x9EA799E2, 0xA7D9F27B, 0x1A027F9F,
    0xDE83A0A8, 0x708DDE69, 0x7B21BA22, 0x9027C1EE, 0x19364A7C, 0x3293A429, 0x9693E949,
    0xA6A95A4A, 0x299A6E97, 0x1A7A9FA7, 0x4E90A62A, 0x12180BA8, 0x9C40C05D, 0xE6FA1E89,
    0x044A3953, 0xB1091ACD, 0xF280AA28, 0x13496945, 0xC0402112, 0x1AB6AEAA, 0x201048AC,
    0x3E1723B0, 0xB26A3A76, 0x6CAA82CB, 0xFADACCB3, 0xA6D1B4AC, 0x0520CFD8, 0x44866319,
    0x66399CB8, 0x098665B7, 0x7EE1B7AE, 0xE7B92E5B, 0x188BF65A, 0xD2E20912, 0x2AFDB33F,
    0xCD21AB2C, 0xF7BDA849, 0xBEAF9BE2, 0xAFDBF2FB, 0x1C02FFBF, 0xC6869FF0, 0x197AF05B,
    0xB41F17BE, 0xB0CB52CE, 0x3C430BC3, 0x4712C3ED, 0x13C570DC, 0x93F14C5B, 0xEC72CE13,
    0x38E8133F, 0xAEC0C8AF, 0x590F477A, 0x5CF18AD5, 0x5073F582, 0x44484622, 0x93060080,
    0x11A1F23C, 0x2ACFFB14, 0x71AB2058, 0x7CAB3FC6, 0x073ED0B1, 0x4DD0F44D, 0x414823EE,
    0x2DC858BE, 0x6D42E2BA, 0x4753B8EE, 0x55D4B4FD, 0x444C269B, 0x024118FF, 0x5C92F2CD,
    0x9363C0AF, 0x67D9B65D, 0xDAB69DA3, 0x27EDB36B, 0x2D7F36C1, 0x24FFA2D2, 0x45D1E8EC,
    0xDEB77D03, 0x779DF346, 0xBE0378DF, 0x1783DFB7, 0x5A2BE138, 0xC8411448, 0x360E3335,
    0x208C4546, 0x28813E91, 0xFA9477DC, 0x1E8FFB5C, 0x6214483F, 0xFE8370DC, 0xB912C814,
    0x3F40B882, 0xE0B7FE06, 0xBABE13A9, 0x4EC3AAEB, 0xD8E59457, 0x882DD051, 0xD5FB9D61,
    0x3BDD5BBB, 0x5EFFBCD5, 0x2512D699, 0x8DE7C261, 0xF2B6D9CB, 0xBCDF33CB, 0x1F43CFF3,
    0xBDD7F4BD, 0x18E87C8D, 0xE5392451, 0xBACEC776, 0xDEB7AFF7, 0x8BDFF83D, 0xE7F87E5F,
    0x3FD5AF93, 0x10516CB0, 0x8F1FD7AC, 0x481F0F9B, 0x95200F84, 0x3D251CFF, 0x46844880,
    0x1003F10D, 0xCAA81774, 0xA5716A3F, 0x812F8DD3, 0x031F4BE6, 0x073E8815, 0xE34A2816,
    0xAC3FDDA8, 0x5DDD3BE4, 0x0C187810, 0xE837071E, 0xA3FDE1A5, 0xDEB40178, 0xBD36C452,
    0x8530A213, 0x0B215C2A, 0xEB42E85B, 0x9F71CF54, 0x24014053, 0x24318BF2, 0xDC107504,
    0xF87902E1, 0xF1021EC0, 0x606C4287, 0xA1363110, 0x22416456, 0x0CA11AC4, 0x1805F251,
    0xD051E564, 0xF63B5162, 0xB42C9120, 0x445A8980, 0x72248614, 0x6FA8C78B, 0xA2243E88,
    0xC6388B18, 0x1FCDF233, 0x1AC67907, 0x0D3B88BC, 0x728331C2, 0xE91C60EC, 0x8A102E88,
    0x3C7A7E10, 0xE85F098F, 0x32023FC7, 0x241C8290, 0xC3150521, 0x12C9BE2D, 0x2288484E,
    0x47C658D0, 0x8E923192, 0x2B19A494, 0xCA474909, 0xFC4988E7, 0xD848FBC7, 0x83FDCF44,
    0x230C9B15, 0x0E2426C3, 0x0904483B, 0x1363DB5E, 0x0F91293D, 0x6386C040, 0x2D25D9E8,
    0xE25AC949, 0xACBA96F2, 0x3182E658, 0x661C7FCB, 0xE3AC1E8E, 0xCC498530, 0x18644A63,
    0x09C25B5B, 0xDDCAD910, 0xD29A3214, 0xAB35269C, 0x1E6B4D69, 0xD3069592, 0x39181404,
    0x12DA6FC9, 0xE714B99C, 0xCE69C32E, 0x4265BA71, 0x054893EC, 0x914AE808, 0x7478C129,
    0x42F71FBB, 0xC06B2135, 0xE03620A1, 0x89FB3380, 0x40481212, 0x0338C622, 0xCE89CB2D,
    0xA1341A83, 0x946714E4, 0x8287B1DC, 0x128ED314, 0x9145288D, 0xE8C7D139, 0x38BB31E2,
    0xD06E3FD5, 0xAF227F01, 0x291CD78F, 0xD26A4B49, 0x5EF4A293, 0xCD677CD9, 0x73CDE9B8,
    0x0BA6142A, 0x114D2995, 0x069B533A, 0xE1924271, 0xA9B44540, 0x4054151E, 0xA7C8D922,
    0xCF64A240, 0x5B431482, 0x504148FF, 0x7952CA7D, 0x1202C0B1, 0x111B4671, 0xE298D358,
    0xDD58AB34, 0xB30503AA, 0xE954388D, 0x26351580, 0xD65A2F59, 0x17898AB1, 0xCC4A251C,
    0x67D4E666, 0x72A52BD2, 0xEB5D2B9D, 0x32BBD76A, 0x0570A567, 0xD2054B9D, 0x94DEABC8,
    0xAC1D80AB, 0x586B0356, 0x20AE16C2, 0x448340C8, 0x17401A80, 0x6C562060, 0x568A2828,
    0x78591054, 0x054F6E6C, 0xB06A49E9, 0x03608901, 0x6C3B280E, 0x5A4B1161, 0x49B696C1,
    0x31082C6A, 0xB3C6E0CA, 0xB2AD145A, 0xD545AD8D, 0x1453112A, 0x58061FE5, 0x28015BC9,
    0x3702BC52, 0x2E1DC2B8, 0x57A85B71, 0xAFA48ACE, 0x6A6BF8FF, 0xD3DCEB51, 0xD2B4D742,
    0x274DEE6D, 0x48390DA4, 0x7CF20964, 0xE0B32813, 0x83808902, 0x127DA30E, 0x89C20AAE,
    0x01E3FD17, 0x7B2DE948, 0x10840437, 0x944A6448, 0xE973EE9D, 0xDAEA5D1B, 0x78EF7B97,
    0x0B693028, 0x359AFFDB, 0x8CADB3C0, 0x5B81FF6D, 0xB916EC89, 0x716DFB70, 0x07E0EC1B,
    0xF9C23843, 0x717B6E3A, 0xD6E65CA3, 0xCE1ABF17, 0xDBEF8730, 0x92E2FCE1, 0x67A0F645,
    0x51D37826, 0x43285E7E, 0x44811041, 0xCC92F676, 0x286523FD, 0x323ED28A, 0x202087F7,
    0xAD9BB798, 0xA0A25370, 0x23A48902, 0x30F2B40F, 0xE1FC4191, 0x30538B0D, 0x056D10DA,
    0x01E008DF, 0x51BFD80B, 0x0F81639E, 0xEF1D5BAC, 0x960CB375, 0xECBB9730, 0x99832FE5,
    0xF1DE143A, 0x85313E86, 0xC8D92297, 0x9B334E45, 0x35E6EC8F, 0xFFB2CA63, 0x0A1F87A0,
    0xE482BB42, 0xC6317B63, 0x1458A41F, 0xC4483F0F, 0x3050340C, 0x85F24F99, 0x1E244818,
    0x5188487D, 0x47E6ACDF, 0x0ACE19B7, 0x94B6196C, 0x4B27BB7A, 0xCE9ACA19, 0x8C0AB774,
    0x98E42B0A, 0x72DAC2D0, 0xEA6D4B98, 0xCB9AA353, 0xA1F2CE63, 0x8902809A, 0x908A43F8,
    0x67A47476, 0xE35B692D, 0x293CD6BA, 0xC5313D6F, 0xA1DC7222, 0x35784E20, 0x11DD8B8F,
    0x0E2448DA, 0x9E8F703A, 0x5D6B7D1B, 0xCFDA3AD3, 0xE0609BC6, 0x5C7FE8B1, 0xDEDACA7A,
    0xCDBBA634, 0xA3FD34C1, 0x48904C12, 0xE85ADC01, 0xD53A91B8, 0xBB375EEA, 0x55D23DDB,
    0x0104782B, 0xA6B587FD, 0x4B5CEF6D, 0x86F7DF1B, 0x32E7BEF6, 0xA1B86A21, 0xA8F83920,
    0x14DD59B1, 0x5DCBB095, 0xBF746130, 0x87EFAE1B, 0x82401BF3, 0x9C55AD09, 0x7B4E6DBC,
    0x2F17DB9B, 0xF0A7080D, 0xDBA382E3, 0x391F22DD, 0x47FE4BC9, 0x1FFC8378, 0x4480A027,
    0x7CF10DEA, 0x30E63C47, 0x65C3B99F, 0x8109960E, 0x101304D0, 0x246316F5, 0xAAEC4A91,
    0x39AE7CA8, 0xF44E5FCD, 0x19CF73A3, 0xC678A86A, 0xA7F1BE31, 0x20345C6B, 0x780AC2A4,
    0x98D8B70E, 0xDF5AEB3C, 0x86D1D73A, 0x44A373F2, 0x9A5392E7, 0x736ECBD1, 0xECFD17B3,
    0x9CAAC76A, 0x0C112945, 0x60E52AA8, 0xDC448AA7, 0xC95A902E, 0xD748ED7A, 0x2DF7DA3B,
    0x04171198, 0xFA7751DC, 0x6DEE9BE0, 0x0A444888, 0xF23B071F, 0x1791A1DA, 0x92F23D74,
    0x07E53C9F, 0xC97978C6, 0xCB1D224C, 0xEED3DEE1, 0xBE83CEF9, 0x1037A2EF, 0xE2612FAF,
    0xEE48C806, 0x08894706, 0x5F112022, 0x7CAACBAC, 0x47E7FD9F, 0xD9D97B5F, 0x2ED98299,
    0xEF09D43C, 0x546F007B, 0x1D30B022, 0x7AB9DC05, 0xF2A34257, 0xF33E5FCA, 0xAF9DBF9B,
    0xA9371F1F, 0x124242B8, 0x5FDA7A11, 0xCFDAF6FF, 0x372FDEFE, 0x01F88908, 0xB2C6E408,
    0x59E9DFD5, 0x0DA34889, 0xF73DB79C, 0x34FEEFD9, 0x6C20BAC7, 0x7F588AB4, 0xDFC37BDF,
    0xFFC1DB5F, 0xB460E1C7, 0x8C17CBDE, 0x00DF3834, 0x1A016012, 0x01F470A0, 0x2BCE8200,
    0x58408FB4, 0x1F6DFBDF, 0xF61FB604, 0x45882049, 0xCA343CC9, 0xEA8FFC19, 0x941253F9,
    0x43884480, 0x051FAC1D, 0x96046092, 0x4609CD60, 0x2F04159E, 0xB9EF0858, 0xA0BDFDA0,
    0x44A0B0EF, 0xFC9B028C, 0x9EA402C3, 0x354C9202, 0xFA0F601C, 0x9E4E0FE0, 0x3DC4680D,
    0x6CA1E0E8, 0xDDDD1401, 0x12E09A04, 0x5613612A, 0x84158860, 0x4141E83A, 0x940B0154,
    0x8449F45F, 0x3BE12017, 0x3D90C1F0, 0xA17E1321, 0x04956613, 0xE56BC1D5, 0x219E0C5F,
    0x0811D60C, 0xC615E069, 0x61002E49, 0x1CE1CA1C, 0x5DEB9BAE, 0x61143CC4, 0x0680C47A,
    0x82188898, 0x618609E1, 0x10A20220, 0xD037C8B1, 0x01104141, 0x7B20718B, 0xE03FDE65,
    0x4FD40F81, 0x24E1F9B3, 0x521FE20A, 0x8E643F12, 0x1A219932, 0xE21AA272, 0xE1B0B89F,
    0xDC21E606, 0x9A1D0B1C, 0xA2A229E2, 0x45D50583, 0x6E28C3D0, 0xD8A00D48, 0x255B383F,
    0x5A20E252, 0x22DE2D62, 0x34C84C84, 0xD04481B4, 0xE22D67C0, 0x3FDCF98E, 0xC012C248,
    0x5DE47C9A, 0x2E22DA2E, 0x08EC6332, 0x5B5C3C86, 0x278B6D46, 0x5227E1A6, 0xE26906E3,
    0x0DC1AC3F, 0xACBCE1B8, 0x63822A4B, 0x4A238A38, 0xC045DCB1, 0xC6E22B83, 0x3F23000C,
    0x2E336324, 0xE3C22D23, 0x58E3CA3B, 0x4962C84C, 0xE375CAC4, 0xE91DC13B, 0xF59ECE98,
    0x632A3B9A, 0xD1E40240, 0xB0348944, 0x5C589541, 0x42E35A27, 0xCCD4E356, 0x12ACD720,
    0x1E07A23A, 0x8C0EC45E, 0x646245E3, 0xCCD20E46, 0x4827445C, 0xDC207AA4, 0x08C4403F,
    0x963C640A, 0xE40E3CE4, 0x858A9613, 0xE403C074, 0x40A15EE3, 0x6B830D53, 0x18A61EC9,
    0xC8FC8FD5, 0x49A4A22C, 0x563CA4A6, 0x83FE175B, 0x42A43634, 0x7635E50E, 0x4C76508B,
    0x160E2CE2, 0x6837CFC2, 0x646A4704, 0x54E54A54, 0x7C24D09E, 0x0BA886E4, 0x49E4F649,
    0x7A56E572, 0x526539E5, 0x44912041, 0xBC028050, 0x8108E7E4, 0x1C837222, 0x84842568,
    0xC3803FE5, 0xE984481C, 0x8C250449, 0x83543FDB, 0x2C978C1B, 0xFA4EE57E, 0x619232A5,
    0x43101841, 0x1A616512, 0xE5086565, 0x3B43FE60, 0x806E659D, 0x08C84683, 0x64E64A55,
    0x5CDA6652, 0x86E255C2, 0x4D64581C, 0xF25765F6, 0x65FE67E4, 0x27E17992, 0xFC518148,
    0x202A531F, 0x3B044916, 0x463F97F0, 0x9D918D0A, 0x0844488B, 0x307A9EB8, 0xE24223A6,
    0x5ED1543F, 0x8268667A, 0x860A1FE6, 0x61E26CAC, 0x12612516, 0xDFEC68A7, 0x274449F4,
    0x950CA6A1, 0x66566403, 0x74E74A74, 0x5D158BEA, 0xA6603F84, 0x7CD7BC48, 0xF67766F9,
    0x267677E6, 0x3FDC3126, 0x2444A5D8, 0xE3050D40, 0x88800D5E, 0x480F01D0, 0x13D03D44,
    0x8B093E5F, 0x74448610, 0x1B221201, 0xFD00F4E8, 0x4C3403FC, 0x66FE6716, 0x4D280678,
    0xA9D903E9, 0xE424B6CB, 0x71A82A71, 0x492FA432, 0xE6366684, 0x53C24879, 0x5A856752,
    0x09E685E8, 0x3EC45CFD, 0x144A2764, 0x92912AC1, 0x88A77A80, 0x8680E782, 0x43F8608A,
    0x11C22894, 0xCE7A5A84, 0x82467A10, 0x78E31C12, 0x8A214A46, 0x00F03FD7, 0x6D18EE7F,
    0x70A9844A, 0xA88E8967, 0x60986689, 0x565B0378, 0x6831FD50, 0x61A92A71, 0xFE838656,
    0x8C9C1D43, 0xD2CBCE8B, 0x5A956861, 0x077695E9, 0xC1A7358B, 0xFD3C8120, 0x690603C3,
    0x98E90298, 0x08C56892, 0x041C3EC6, 0x44810820, 0xCA8467AC, 0x044A594B, 0x5EC15C2A,
    0x15C4A3B6, 0x4415A284, 0xE8D828D7, 0xE128D284, 0x290A995D, 0x814B46A0, 0xFC300416,
    0xE92D3052, 0x926A2682, 0x49EC064A, 0x29BA1544, 0x9622F453, 0x5AA56A52, 0x2394736A,
    0x87435C00, 0x49530476, 0x66B43A84, 0xA0A98A9D, 0x9AA06992, 0x4415AEEA, 0x23C4158D,
    0xF0E82A46, 0x42F43FE8, 0xA82885EC, 0x74AE88B0, 0x844851E3, 0x6BA0D828, 0x9EA8EA96,
    0x2911192A, 0xA3193495, 0x2E932A2A, 0x406C65AA, 0x482A7086, 0xF04683BC, 0x6B42A5D3,
    0x706B4AB4, 0x8AB2C284, 0x81A43344, 0xB6EAFA17, 0x92B76AF6, 0x4944582A, 0x1C9D903E,
    0xBE949B2C, 0x40640C93, 0xACD554AC, 0xFDA50B46, 0xE635AB83, 0x6C27A002, 0xFEB7E6F0,
    0x85D2BDAA, 0x41032060, 0x12825B61, 0x2B1EBFEB, 0x01E625EF, 0x6AAB54F1, 0x446838C4,
    0xC2EB4C55, 0x56A5AC32, 0x04A2B582, 0x038CC022, 0xDEB7ABE2, 0x65FAC5EB, 0xD903E094,
    0x180E41B9, 0xA5A4BCAC, 0x08838444, 0x9CB52802, 0x00FDD929, 0xAF6AB408, 0xC989A5CC,
    0x6C56B727, 0x9444DACC, 0xF65C837C, 0x6B1AC017, 0xA1A352CE, 0xB820444A, 0xAC41280B,
    0x46823846, 0x1AC35B20, 0xA856D1ED, 0x462D040C, 0x640A413C, 0x2CC98605, 0xC5AC62CC,
    0x92B8620E, 0xC0E01B5D, 0xD50AAEC7, 0x2479AA7D, 0xC944EC61, 0xD680CC18, 0x490D03FE,
    0x92D179C4, 0xDAED52A8, 0x083F6CCA, 0xD6303286, 0xB16C06B0, 0xF2432DD2, 0x2CF83FEC,
    0x22846AD9, 0xFADF6D20, 0xD14274AD, 0x15CE8296, 0x2C409164, 0xEDB2D442, 0x692E22D4,
    0x6C3DC945, 0xEDEA36CF, 0xA0C190A1, 0xD43CC3FD, 0x0F99D099, 0xB9501CC7, 0xFED9AD91,
    0xE6942783, 0xE8ED4AD7, 0x15E92E26, 0xAE5C3D44, 0xDD6CE2CE, 0x7EDDE92A, 0x83F6D6A8,
    0xDFE5E846, 0x6AED6ED2, 0x445D7C24, 0xAA6C403A, 0x61B06080, 0xAE2EE92E, 0x86AF0AE2,
    0x66C720A5, 0x127EB9AD, 0x3FE7BA7B, 0x062483E0, 0xAF346091, 0xD2DB11B0, 0xD2BC848A,
    0xEBD41520, 0xE96E96F0, 0xC4370946, 0xE9211781, 0xF8EEAEDC, 0xB9FEDFE6, 0x966926C2,
    0x2B4C92E0, 0xDA2AC45E, 0x6FC2FBEE, 0xF502C638, 0x89C065E2, 0x2F06F6EE, 0x68AF6AF0,
    0x643E43FE, 0x2B941C0E, 0x23486EFD, 0xBC11020E, 0x12384C44, 0x44A2F08B, 0xA6F22C14,
    0x4CE403C7, 0xFE2C95FF, 0xA63C6FEE, 0xE81CF6E0, 0x06EF8ACD, 0x65FE6EAB, 0x41202330,
    0x450002E4, 0xC405C002, 0xF0A309EF, 0xFD02BA1C, 0x2E9441DA, 0xB052FE57, 0x6A30CAFE,
    0xB441E99D, 0x07AB08B0, 0x89488ECB, 0xFADAAEFC, 0x84492690, 0xA2303AF5, 0x1C2D0FBC,
    0x70C6BB10, 0x94618B12, 0x91FD157C, 0xB143076F, 0x1B7065D3, 0x9079F10E, 0x44AC4682,
    0x16F16B0A, 0xA8896013, 0x0170BCAF, 0x981BD1E4, 0xCF05712A, 0x0E0B0C30, 0xE74BB5AF,
    0x7900717C, 0x413C266E, 0x74E3FE1F, 0xC82408B1, 0xA2343FE8, 0xEF046300, 0xC82F03FE,
    0x71990EAA, 0x0AA20319, 0x3B0643FE, 0x6EB3070D, 0x2FDE1F14, 0x561F00C9, 0x2C3C54B1,
    0x24F24B17, 0xB4E71F2F, 0x4038C8B1, 0x8D1904CE, 0xA327720A, 0x0A772071, 0x0F02348B,
    0x5DB9800F, 0xE30CF5B2, 0x9AE9D09A, 0x18416321, 0x03FF0182, 0xBCB29ED0, 0xB43FCF64,
    0xF27E8FD6, 0x945A4319, 0x3D586914, 0xB3032271, 0x29D815B7, 0xC40596E4, 0x00031E9D,
    0x32F25027, 0x99D73333, 0x036445F0, 0xAF801EC4, 0xA83443FC, 0xB2E6FDDF, 0x36F28327,
    0x688B081B, 0xC3FF1C42, 0x23DF9001, 0xFEAE0537, 0x96E42903, 0x8830FA6B, 0xF8608CB1,
    0xCBBD8E01, 0xEB4C1B2C, 0x4DD2D54D, 0xB3E33670, 0x170608F9, 0x2A508416, 0xB2FF2232,
    0x448D31B7, 0xE7392AD8, 0x445EEC46, 0x42F3371C, 0x01C93433, 0x30BB0B03, 0x36B372D4,
    0x1B4572EB, 0x02A84151, 0x30C3FCCF, 0x984A3322, 0x9A8029F3, 0xCC73ADEC, 0x90E6699D,
    0xC4770E2B, 0x3FD6440B, 0x5AF665AC, 0x95673E74, 0x3D833460, 0xFEF842DF, 0xB3074DF3,
    0xEC430144, 0x1977C169, 0xE76052F4, 0x436CA845, 0xA3517513, 0xAFD0321A, 0x7C6E5563,
    0x3B45348E, 0xF0C74C35, 0x05643C84, 0xE34FE598, 0x2AEB1086, 0xC69FBF2E, 0x14160F6E,
    0x4477476E, 0x3A044A8E, 0x42AF2D78, 0xCC6B59F5, 0x218414E4, 0xBB402BFB, 0x51CF4E35,
    0x7C00FE36, 0xF0487559, 0x88E84682, 0x5EF5EB51, 0xD0265973, 0x44497AAF, 0x44DD0D15,
    0x9B4BF5A3, 0xF4CC84F1, 0x5D52C52B, 0x6F3530E7, 0x759B3802, 0x3AC8B23C, 0xE84481E8,
    0x34A00780, 0x33413446, 0xBCA36E55, 0xB61353EC, 0x37494525, 0xBD05A918, 0x75C34E75,
    0x0168F980, 0x480A901D, 0xC46B6315, 0x6CF5F028, 0xED83F6D3, 0x0A233C8A, 0x14426D28,
    0x83615F54, 0x370361B6, 0x41504C8B, 0x832380CC, 0xC8888835, 0x6071CA8A, 0xF23D64F4,
    0xB71E9F2B, 0x3FEE4044, 0x0360E9A0, 0x2B036FF7, 0xEC70619E, 0x7B6A6A21, 0xCD4B6A37,
    0x6C356643, 0xD69AC483, 0xF7A379F6, 0x45ED395D, 0x4AFD03B0, 0xC4241302, 0x75F686E1,
    0x465F76FB, 0x5B5C3BC9, 0x4A37451E, 0xFED28188, 0x775A2603, 0x1A99CAAF, 0x8B792108,
    0x022E7E44, 0x7CF3628B, 0xC4D0F763, 0x157C3FDF, 0x69F40642, 0xDDC6B84F, 0x41E44490,
    0x5D4BC26E, 0x584683E7, 0x78837A61, 0x3055CB88, 0x10132FD0, 0x31CF755B, 0x7D78337D,
    0x6060A20B, 0x77F4414E, 0x08048B66, 0xE03A762C, 0xEE974B81, 0x8195B15F, 0x4B34C7AB,
    0xEF602904, 0x90F8AB82, 0xB8608EB3, 0x1EEE5003, 0x92B85778, 0xA7065B6B, 0xF43F08AC,
    0x88B16445, 0x57957953, 0xF6E04453, 0x86406086, 0x359E83EC, 0x39138B35, 0x289AD398,
    0xBB2C7087, 0xD1379649, 0x3303FE3E, 0xFD1873D8, 0x9518AD48, 0x3D72B551, 0xD541F9CD,
    0xB9C79D79, 0x4164E2B6, 0x481F03B4, 0x21581584, 0x1F086F8F, 0x2152831F, 0xF5A398B1,
    0xDCB62783, 0x3B92F77E, 0x1FED44BA, 0xE7B4682B, 0x5AA4F322, 0x7A63A5F9, 0x00350D21,
    0x8B9A2EE8, 0x67A00204, 0x8AF6F6AC, 0x83987A93, 0x0C78C726, 0x4FBA7B47, 0xC044AB25,
    0x83FEC781, 0x31C44A9C, 0x7C36ABF0, 0x81DC60EF, 0x4157EC44, 0xD84159D0, 0xEA10414F,
    0xCB9D937F, 0x218C03F9, 0xCFE39D30, 0x573B279D, 0xB8417B14, 0x1D903F1C, 0x9E0DD721,
    0x083A83FE, 0x2CD89499, 0x4481A433, 0x881F3048, 0xB4A83FDF, 0x234C8B8C, 0xE439444B,
    0x783790BA, 0x918817A9, 0xB42E57F3, 0x7853A375, 0x938D63BC, 0x9CE75B2A, 0x83CAA479,
    0xA6516446, 0xBFBF7BF3, 0xE63F94D0, 0x23C53FAA, 0x1BA9BA8E, 0x2987BA7C, 0x449FA48B,
    0x0A4B8078, 0x3109EAFA, 0xBC83FDDD, 0x980B8449, 0x00D83FF0, 0x44A7EE30, 0x84E4410C,
    0x2BBE07D0, 0xD38141B1, 0x3DC783FE, 0xBA03A06A, 0xA0415C44, 0x1515EE13, 0x7CA977AE,
    0x3FFCB6E1, 0x543FFCA4, 0x83FDD541, 0xC8C449E2, 0xA766C44B, 0x0107C812, 0xC100EB5D,
    0xB23DEBA1, 0x4DCC3FDC, 0x7E57AC03, 0xE93BF7EE, 0x67C03FFC, 0x687A2380, 0x0EB62BBB,
    0x7BC3A3E7, 0xB80B77D6, 0x2F088FCD, 0x7D83BF83, 0xD150AFD8, 0x9FC09F7E, 0xDCEC0944,
    0xBABB343F, 0x3FC1FD4F, 0x5B58945B, 0xC3EC8441, 0x9BD37B8B, 0xE9ABB8BD, 0xDEFC2372,
    0x632F05C3, 0x3D6291D7, 0xEFBD6B93, 0xDE58F6AC, 0xB3227A20, 0xE2FD8B32, 0x10F4BE33,
    0x6C4275D4, 0x5B5EC248, 0x5BDB3DBA, 0x678F493E, 0xDDAF2C1D, 0xD3DDFDD7, 0xBD2BE7FD,
    0xE5FA1E19, 0xFF803BA7, 0xF21EDDC3, 0xE0BBCBE0, 0xFC308D4B, 0xB99B0DD2, 0xE348BF08,
    0xB7ED7ED3, 0x400333CD, 0x002FD03C, 0xB7190567, 0xBE93DF3D, 0x90084D38, 0x7FE728B7,
    0xFF23F1BE, 0xDA4093AA, 0x02B69787, 0xF733E57F, 0xD5E4183F, 0x5BE07EAF, 0xE509073F,
    0x81B589FE, 0x18003A77, 0x7F83ED8F, 0x0D4D93F8, 0xD02D045D, 0xB6BC0AEF, 0xF07D4AFF,
    0x63F43FB3, 0xC35C8B15, 0xC3BC301B, 0xDBE77F27, 0x3E7BF1FF, 0x97AF32A4, 0xDF7DBEFF,
    0x44025029, 0xFE002F2E, 0xD042FAE5, 0x0583C220, 0xA8642617, 0x8943E210, 0xB436290E,
    0xC622B118, 0x6637138B, 0xE411A8E4, 0x491E9147, 0xB2193476, 0x2393CA24, 0x785AEA17,
    0x09BFE06B, 0xB002080A, 0xCD66CFF9, 0xEE71399B, 0x6813A9F4, 0x893CA0CF, 0x2D6A14FE,
    0x4BA55267, 0xFA753699, 0xA9546A14, 0xB556A953, 0x566B157A, 0x76B95BAD, 0x6C15FAF5,
    0xC963B158, 0x167B3596, 0x6BB55A6D, 0xFB75B6D9, 0x37596E16, 0x1D15FB39, 0x50AED46A,
    0xDEF979BD, 0xD533700C, 0xFEFF0095, 0x8FFC1A21, 0x84C4E1D0, 0xFC562317, 0xC7643198,
    0xB64F2991, 0xE4B318DC, 0x5F3795CC, 0x3399FCD6, 0x49A1CF68, 0x19DD368F, 0xA5D4E8B5,
    0xFD569F57, 0xD76C359A, 0xB6CF69B1, 0xECB71ADD, 0xDF77B5DC, 0x379BFDD6, 0x09C1DF70,
    0x2F8C1A17, 0x2A294110, 0x8BDF36EE, 0xBEF3BA17, 0xA73FA3D2, 0xF67ADD7E, 0x6FABDAE9,
    0x3C1DDEF7, 0xC3E2EFF6, 0xDE7F2773, 0x02EDFA7C, 0xE4C3FEFE, 0xE1616084, 0xB7CFE9BD,
    0xFE787C4F, 0xEBF7F8FA, 0xBF9FEFBF, 0x67E316FF, 0x499AC190, 0x54982083, 0x0625905A,
    0xC2106A53, 0x695C2507, 0xBC290742, 0x230CC2D0, 0x3117E95C, 0x09247208, 0x00201082,
    0x2BD4F1BD, 0xE260272F, 0x16C5915A, 0xC6117C5D, 0x919C6518, 0xBC6D1AC6, 0x751CC711,
    0x0B2C71DC, 0xC4C7A272, 0x2EAC5120, 0x53E21309, 0x0324C044, 0x26C0125C, 0x49527BFB,
    0x9284A327, 0xACA52A49, 0xB12CCA72, 0x2ECAF2DC, 0xB0CCECAD, 0x8261287F, 0x1C4AF620,
    0x4F34CCF2, 0x36485354, 0xCE135CD1, 0x537CE336, 0xBCE93ACE, 0x1C0DB9D3, 0xB99AC820,
    0x4B443B08, 0x72FD032F, 0x24B942D0, 0x2D4350F4, 0x711FEE33, 0x96AC18E8, 0x70AC342E,
    0xAC3149C3, 0x354A5314, 0x4B5374BD, 0x1814C53D, 0x02F1FF0F, 0x9D4D3706, 0x790F0013,
    0x56D5955C, 0xD6157D5D, 0x959D6558, 0xBD6D5AD6, 0x7E0BAA95, 0xEDD4F3B4, 0x2080D064,
    0x8C390078, 0x3D134151, 0x1164D8D6, 0x65D15655, 0x5A166D9D, 0x36959F64, 0x036B665A,
    0xDA699FF4, 0x0582CC18, 0xD513C57A, 0x80381C7F, 0x201A0D20, 0x080984C8, 0x1EA095FA,
    0x08E8203E, 0x22820812, 0x68B08205, 0x6430A081, 0x1B8D4820, 0x07439208, 0x81F0F482,
    0x208440A0, 0x082290E8, 0x82090462, 0xA0825922, 0x48209A4A, 0xEA082793, 0x40820A24,
    0x51A08299, 0x94A820A8, 0xC542082A, 0xC154820A, 0x5055A082, 0x2C9587FE, 0xE5C56A08,
    0xF9895C7F, 0xAA082D15, 0x6C572099, 0x9CE607FE, 0xE599EE63, 0x28264F98, 0x294C8230,
    0x44521FF9, 0x8F9447FE, 0xE324F1FF, 0x8281367F, 0xFBE04B20, 0x148261E7, 0x41A08239,
    0xE0981088, 0x21C0DA7F, 0x99FF7DDF, 0x88820562, 0x605D6118, 0x0200F9FF, 0x37201E82,
    0xAEEB5E5C, 0xFF7A89EE, 0x6AD88E41, 0xF016B5A7, 0x9BF705BF, 0xDD18CAF0, 0x86C19047,
    0x5C208321, 0x5334EA62, 0x14FF254E, 0x8F27CAF2, 0x2DCBF29C, 0x8225C827, 0xEEFB883C,
    0x2753AF6F, 0x3D700E27, 0x55D4F51D, 0xD6F59D5F, 0x761D7F5D, 0xA9B449D7, 0x2F6DBB15,
    0x0E361A2F, 0xC2F036C3, 0xF816A77B, 0x3C1F85DF, 0xF787E278, 0xA3E4F8DD, 0xC49F3464,
    0xF42E66CF, 0xE1F44DE8, 0x594C7FDD, 0x083519BA, 0x820E46EA, 0x2083C1D2, 0xEC18FA79,
    0x41FF619E, 0x0A7EB07C, 0xDD90CCAC, 0x4C2C27DD, 0x2C3FE0F9, 0xBFE9FAFE, 0xE5FCFE7F,
    0xFD7EDFDF, 0x7F1FE7FB, 0x005FF400, 0x024057FF, 0x7F80701E, 0xFEFB4C3A, 0xE8C58FE1,
    0x11831023, 0x51C6411F, 0x43388207, 0xDA18FF7B, 0x03B0E63F, 0x02A0A882, 0x795E93A2,
    0xFD31312C, 0xC878AF29, 0x590A6153, 0x10D23C78, 0x40CA3068, 0x84143FD0, 0xEE6E1B39,
    0x61D39A86, 0xC39878E6, 0x43A83E1E, 0x3FD10A1F, 0x1100300C, 0x8939AEDE, 0x9912DD88,
    0x3E2744D8, 0x94518A11, 0xC56114E2, 0x31217038, 0xC2909F3D, 0x42D49061, 0x8C10BA14,
    0x0AE3145F, 0x31C648C3, 0x818CD17A, 0x9029D30A, 0x1C010046, 0xD1468AF1, 0x31DE4117,
    0x8EF1FD3E, 0x63C8FF81, 0x37D8F8B1, 0x8CB1FE34, 0x1F4C6C80, 0xF7C0B38B, 0xEC5B0FED,
    0xFC4103D8, 0x91110410, 0x24708468, 0xC7400808, 0x87C4388D, 0xE40C6777, 0xC9D93526,
    0x306E1A34, 0x2D8C1C15, 0x5343E524, 0x3B9510E2, 0x532AA53C, 0x05CBC3F9, 0xE1040C63,
    0x5922A942, 0x23E0BB4B, 0xE2A30A27, 0x4BD9792E, 0x9812FE5F, 0xAD6614C1, 0x7B139036,
    0x37991160, 0x08050129, 0xF83F0EE2, 0x8C9F9391, 0xE9A520A6, 0x735E6A49, 0xA6B4D99A,
    0x8E981869, 0x05660C3C, 0x1C65B23E, 0x17059283, 0xE61EA410, 0xD93563D3, 0xFE6DCD89,
    0x7A618F2D, 0x592523CF, 0x20D8344B, 0xA76C7B3E, 0xCEF9F736, 0x51864A7E, 0x3FE678F4,
    0x57060174, 0x0895741E, 0x1942656D, 0xF14A50BA, 0x21040C22, 0x8020D385, 0x13267A80,
    0x09C8E300, 0x51D9864D, 0xA4147E8F, 0x48E91521, 0x9B46F987, 0xE3A3026C, 0xD2330824,
    0xBA7F4870, 0x95309FF3, 0xFA673F29, 0xB4DE9A52, 0x43BAD837, 0x458A52D8, 0x7BC06418,
    0x4D6054DF, 0xA2D38A63, 0x0C58A6F6, 0x54D7C424, 0x14054B5A, 0x88BD2080, 0x5A8F09E8,
    0x155EA255, 0x46A40C8C, 0x4A42081B, 0xAC12B285, 0x436B155F, 0x90D64AC3, 0xFF9622FC,
    0x9B2383F8, 0x509B53DA, 0x217F2722, 0x5AE95CE9, 0x15DEBB57, 0x516579AF, 0xC22ADC0D,
    0x1F64117B, 0x51AAB499, 0xC3536AB1, 0x85B0F60E, 0xB064AC45, 0x48824185, 0x05170120,
    0xE6E80357, 0x2FED510B, 0x6CD584B1, 0xBCC3FB66, 0x05E171F5, 0x0F953D92, 0x404E8040,
    0x9C58A7C4, 0x5962AC5D, 0x9A0625DB, 0x7B8D0EE3, 0x4A1D595C, 0xB58EDB5B, 0x6B2DB8B6,
    0x0BB1FEE7, 0x05C3FE83, 0x392B6ABA, 0x9C8FC285, 0xC9AF4C1C, 0x9972EE55, 0xCEE75CDB,
    0x81364F75, 0xA7A35F46, 0x43AA4800, 0xAD6CEBA8, 0xDABBB76A, 0xBB977ACD, 0x3F5E05DF,
    0xE1C73316, 0x390DCA9E, 0xD97827C8, 0xBED6DDDB, 0x71830F16, 0x1B440601, 0x87B400AE,
    0xAAA35413, 0xDFDBC57B, 0x5186B6F0, 0xE2DF30F6, 0xDD5B3412, 0x09ACD81E, 0x6F82ADCE,
    0x16CB112B, 0xC5F5086C, 0xF27237E8, 0x185EE780, 0xF0D619C3, 0x2B3C3986, 0x6ED75048,
    0xC41AC266, 0xF6889308, 0xFFC4F7FA, 0xF98AF14D, 0x256C49AB, 0xA3720CE3, 0xA4DF881B,
    0xE3688227, 0xA3C98492, 0x62CC5B8A, 0x670986CD, 0x118038FF, 0x762E1BCF, 0x7C1DE3FD,
    0x518F2680, 0x232763DC, 0xF0FFC623, 0xBC11832A, 0xF8372B60, 0x885E55CA, 0x0FF71830,
    0xC2408821, 0x2709CDC4, 0x33665C3A, 0x69CD199F, 0x3C57F356, 0xD07F1368, 0x90234D58,
    0xE1F04100, 0xD6A47FBC, 0x73D64CC7, 0xE4ECF99E, 0x1FC80326, 0x986D040C, 0x0F0744D5,
    0x7BCFF50E, 0x199333F6, 0xD1E70FA5, 0x9270D08B, 0x11383FEB, 0x39F6CC35, 0x12B698D1,
    0x8731BEA3, 0xCB30D4C1, 0xA8751654, 0x06E58D49, 0xA5ABB417, 0xE1388154, 0xAE4BC91C,
    0x96B1D619, 0xBD69ACF5, 0xE4DA8B5C, 0x5396AD19, 0x8FFAA002, 0xD15005EC, 0xA6B45E99,
    0x636C3D89, 0xC55B065B, 0x9E410328, 0x5513691A, 0xC2DA2094, 0x5D85B164, 0x49866DED,
    0xA22904AA, 0x5F33CBB3, 0x90B92A3A, 0xB8F60EC7, 0x7C28C515, 0xFFDB2F98, 0xD9969C70,
    0xB7536A3D, 0x4A0CD4BB, 0x6DB97E77, 0x24E46D2A, 0xF7D6B502, 0x6FDDF9BE, 0x1771477F,
    0xA41706BA, 0x1D8FD1FF, 0xE2DC9B53, 0x15C2F846, 0xF9463C1E, 0x60575183, 0x84E1BD41,
    0x9C408236, 0xF8CED6E1, 0xBEB70EB2, 0xC8ADB022, 0x7C531B76, 0x8D7097E2, 0x8C4BBC37,
    0x0D5753EA, 0xBF786EEC, 0x8F31E5DB, 0x496048B7, 0x80A02710, 0xF322BCE2, 0x73DE79BF,
    0xE81CFF9F, 0x9899723B, 0x0A941E89, 0xE0C90B78, 0x99C9EED6, 0x6FA7726E, 0xC2C8EA1C,
    0xF0D83496, 0x1C86C8D8, 0x7923185C, 0xF5CE9BD4, 0x84A984FE, 0x91CF2F39, 0xAF64BC93,
    0x0E9AFD9F, 0xE0364C1C, 0xBF97F2C0, 0x9F30E65D, 0x0217DCF9, 0xEC718ED1, 0xBAC6CD1F,
    0x9391EAA9, 0xF01D057D, 0xE0FC1781, 0x6295EF09, 0x021D04DA, 0x9022D357, 0xA3131870,
    0x4790E9FC, 0x2F25D77B, 0x81F4C1F5, 0x13878AAD, 0x90400C03, 0xF2BB4DEC, 0x8BBD1794,
    0x330C6307, 0x9AC89B68, 0xDE00CEDF, 0x6C2BC1A8, 0x1791F43D, 0xB1DD033D, 0x9CB74F87,
    0x7DCF70EE, 0xD65F75DC, 0x3963FF07, 0x2FD34F62, 0xE37C5F0A, 0xC7F91F1F, 0xDFEA8417,
    0x2EE102C4, 0x9FD1F65D, 0x9F63F4BC, 0x43AE0671, 0xE66029A8, 0x01D5C3DE, 0x82CA370B,
    0xF8FE9E3A, 0x7FFE2FAB, 0x830E0360, 0x99D5C089, 0x40281D8F, 0xBBEB1F6F, 0x4F47F933,
    0x6F894646, 0xEB48C030, 0xFFDF79BA, 0xEE5FFFDD, 0xFED50E60, 0xE94A1681, 0xFB8A2C01,
    0x92C62890, 0xD01B018F, 0xD6101F01, 0xD226C574, 0x43D2FDA1, 0x0CA186EF, 0xA8FE8D80,
    0xAFCAFEAF, 0x8D6DAB03, 0x4D02A690, 0xE5CE0324, 0xFC21C81F, 0xE6F1E1FE, 0xD03903CF,
    0x58A3FF05, 0xD61A08BA, 0x6EF43060, 0x00E3AB04, 0xD619E209, 0xF03EF400, 0xE30B5905,
    0xA6832D7C, 0xCF7B000C, 0x002FFD08, 0xCCDD287B, 0x6F84F58B, 0x26C2904D, 0xA70205BC,
    0xD0AB0A90, 0x110B930A, 0x983B106E, 0x4E2E04E0, 0x03705AB0, 0xC70C10C3, 0x6FE25AD0,
    0x04A09230, 0x4444D09C, 0xEBD40E0C, 0x0E21AE1F, 0xCC7D0306, 0x81FE804F, 0x9A08F077,
    0x7D058908, 0x50F70C50, 0x8F28F30F, 0xB48110EE, 0x60FE1ECB, 0x0D419630, 0xF00AE306,
    0xCB890125, 0xF6007A0E, 0xB70C90F8, 0xE1AE5189, 0x08EF6E0D, 0x3309108B, 0x886D0931,
    0x0B8168B7, 0x1A268B1E, 0xF07854D1, 0x15114F0A, 0x7F155153, 0xC0009749, 0x96AE8AB8,
    0x842088DC, 0x4BF70321, 0x07F16F12, 0x8D0FB171, 0xF112B1A7, 0xD7A0161F, 0xA05C30B4,
    0x85DC1FED, 0x2089EE20, 0x5488611E, 0x2FF42086, 0x1FE5B6DA, 0xFE51E1C0, 0x60F41D81,
    0xA061E630, 0x1A8221F2, 0xEA92FE48, 0x80C77890, 0xFF0EA812, 0xAD111047, 0x1BF0ED1C,
    0xD51CD1D3, 0xD1D71D11, 0x1C71DB1D, 0xE11C3107, 0x90E90F11, 0x79C1FA51, 0xE23067CA,
    0x21D0DC01, 0x7B81FEBE, 0x06830306, 0x863CB783, 0x61410A20, 0x8E968546, 0x10D4446C,
    0x208CE45C, 0xC31AC1D6, 0x5127174D, 0x1DE81851, 0x70224F6C, 0xD13513A1, 0x24123B23,
    0xFF19CC11, 0xEC221041, 0x3DA0061F, 0xDE3A7184, 0x69CE2721, 0x26125F15, 0x4F265263,
    0xA26C88C7, 0x3AB25417, 0xF42090B8, 0xD22CE0E1, 0x28122B27, 0xC28BF173, 0x921D24A4,
    0xC8800AE2, 0x38208FD6, 0x01FE4F60, 0x068FB605, 0x420846DC, 0xEE70E6C0, 0x9CE0B41F,
    0x680CC1FE, 0x20E22080, 0x0F61FE60, 0x1320E07E, 0xC88611B2, 0x8B42086A, 0x8069668C,
    0x91421666, 0xB7C26286, 0xB8AD319A, 0xE18A208C, 0xCA01FEF4, 0xD0194208, 0xC866A560,
    0x0761FEB1, 0xFF079075, 0xA2090661, 0x30730130, 0xFEF3F2FF, 0x28661961, 0x1FF2F819,
    0x88CA218E, 0x21FED961, 0xF7ECBA18, 0x6216B006, 0x20B61602, 0x20C65665, 0x266A2D29,
    0x61FE4C81, 0x208C206B, 0xFF1200EE, 0xE6C80D81, 0x6CC0C41F, 0xFEE260AC, 0xA48C0941,
    0x0607AB18, 0x481FEBE8, 0xA1FECE60, 0xB2820904, 0x8D250208, 0x8D26FB92, 0x2851228D,
    0x18365177, 0x21FEECA5, 0x23EFF8DD, 0x373A5139, 0xA21D3A91, 0x36D368E6, 0x963AF271,
    0xD3BB2661, 0x3C13BF3B, 0x6CC22477, 0x53B41F42, 0x1AEC442F, 0x92D10FD2, 0x33D927F3,
    0x36B39528, 0x061EA518, 0xD14918CA, 0x44D3CD3E, 0xFF386D26, 0x63DA0081, 0xC88C84DB,
    0x781FF21A, 0x9180208D, 0x380F3820, 0xE85C4F3B, 0xA2085C66, 0x6E61FF41, 0x1941CC64,
    0x401A6E94, 0x17F41141, 0x08EF5415, 0xF4041FF4, 0xF5A00B3F, 0xF0C453F6, 0x14491613,
    0xB420B63D, 0xDD0F481A, 0x43854593, 0x39D10D3E, 0x42D40AA7, 0x34693AB2, 0x43546B3A,
    0xF413ADD2, 0xD44B06CB, 0x2E600147, 0x874853C2, 0x148B4894, 0x26C47C2D, 0xF544C1F2,
    0xD21210C2, 0x3DF3E134, 0x394A13DB, 0x93165B10, 0x4B149718, 0xB53EF47F, 0xB3894B34,
    0x0444E14B, 0x2A1FEDF2, 0xD4A4BD68, 0xBC83674C, 0x061A2306, 0xCF7016D3, 0x3A74DF46,
    0x374E546F, 0x20952462, 0x4D34B70D, 0x8C2721AE, 0xD4FB48C4, 0x5014FF4F, 0x6C5C829F,
    0x14BE16C2, 0x20801803, 0xF72341D4, 0xB4CF45B0, 0x5214A351, 0x483064C1, 0xD4B94BD3,
    0x53152B52, 0xBF5354F1, 0xF164BA94, 0xD2EC821F, 0xB0F2751C, 0x2208FD05, 0x4E14E252,
    0xE7555471, 0x4AA6AA34, 0x183406EB, 0xE692352F, 0xD56B5020, 0x4FF56F56, 0xBECDD121,
    0x63E26BD4, 0x58151F05, 0x9D5854A7, 0x0F80ED4C, 0x5655387A, 0x95533591, 0xD5935375,
    0xBD23B159, 0xCF58307A, 0x71AA8194, 0xB7E17830, 0xB7551238, 0x55535575, 0x20903113,
    0xA359736A, 0xA2721E63, 0x5D15710B, 0x5F5D55D3, 0x800126B2, 0x51150C16, 0x161D61FF,
    0x752327B5, 0x5455ED58, 0xECB5EBF9, 0x72983060, 0x59B5FF5C, 0x07599601, 0xE96B59F6,
    0xECD10AC8, 0x6903F5F2, 0x52E3234F, 0x5B94DCDD, 0x235BB559, 0x8542ACB6, 0x40128A20,
    0x3427F605, 0xD63B5D61, 0x0AD63F63, 0xBF15D575, 0xE08E1174, 0x5EE11630, 0x575F15A7,
    0x24C2C996, 0x1FF33C16, 0x35608D26, 0xD6036696, 0x66F66766, 0x734383AB, 0x7652A5C7,
    0x1FF4D2B5, 0x28D532F6, 0xD6276896, 0xB78A1768, 0x73220CA6, 0xCEFA3AF6, 0x6410D226,
    0xA76A56A3, 0xCA4CF056, 0x1894BF5D, 0x15035031, 0xD6BB6556, 0x4C2A6767, 0xE566B2BC,
    0x93FF3F64, 0x42343143, 0x08B201FF, 0xF14602A2, 0x5CD5E202, 0xFEC6C208, 0x0208FBC1,
    0x0422086E, 0x094C34C4, 0xA2093782, 0x1FE5D404, 0x4E2085D2, 0x929EFB60, 0x84205020,
    0x120521FE, 0x62097117, 0x71283F71, 0x2329D71F, 0x8FB77197, 0xFB770770, 0xFE1FF704,
    0x737B6F96, 0x9276F369, 0xFF6EF4C4, 0xCFBE03C1, 0x0361FF5F, 0xFF37F04C, 0xE20950E1,
    0xE916D96D, 0x27146028, 0xF294EAE0, 0x0731881F, 0xE9381417, 0x340D4306, 0x438D7AEF,
    0x50C87405, 0x9440208F, 0x3F753C20, 0x08BEF3F7, 0xF60B6642, 0x62C1314B, 0xFB6BEC4A,
    0xE3171EEB, 0x62108619, 0xB75BD68F, 0x2E6768B7, 0xBF4134DD, 0xA8131666, 0xD7CB7C96,
    0x608E7B7C, 0x014BF3C8, 0x68B80841, 0x6B96BD7A, 0x8E7977DF, 0xA0727CC3, 0x78D38803,
    0xA80801FF, 0x60C61FF2, 0x0F220806, 0x0964A6C2, 0x66AE1322, 0x66265EA2, 0xEC20900A,
    0xEC081FEE, 0x82F31E1F, 0xF8EA8832, 0x6ED84FC4, 0x0E41B830, 0x3C1BC306, 0x51A71A2D,
    0x3060EA1C, 0xCA307050, 0x01FF5F81, 0x1CE306B6, 0x071FD1FE, 0xE1FF8563, 0xBB03067B,
    0x62A85860, 0xD8681FF8, 0x87186786, 0x5D85E307, 0x187B8558, 0x84F1FF85, 0x438481FF,
    0x094584B8, 0x1A4306FC, 0x06D3A307, 0x01FF2023, 0xC7030783, 0x2D3D4ED6, 0xC1AA2091,
    0x208AB64F, 0x13309826, 0x4A588333, 0xC613212F, 0x09324208, 0xC2093282, 0xF7F24781,
    0x78AA6176, 0xF81486AB, 0x2092DA1F, 0x7666F65E, 0xA8366806, 0x6907AC68, 0x9C69980E,
    0x80A41406, 0x2086A020, 0xAF8086A6, 0x66AE12E6, 0x6241FEE4, 0x88B48208, 0x94CB2B13,
    0x680C5965, 0xB90892FF, 0x97BB7B57, 0x246F7792, 0x7F6C70D1, 0xD7CEB422, 0x94193F93,
    0xBE164D61, 0x61DB74F4, 0x7E2CF151, 0x5591F953, 0x88189359, 0x389760ED, 0xEE1FED07,
    0xF102CEC1, 0x1CF1E690, 0x011D9973, 0x90E890D1, 0x97B97D97, 0x8597EE97, 0x09F59839,
    0x98998F98, 0x97987991, 0x599B98B9, 0x9751D999, 0xE99A31DF, 0x71D99A11, 0x1E59AF1E,
    0x191C59B3, 0x534B5261, 0x2089C318, 0x188EC1E2, 0x09AF7E55, 0x19C1FE86, 0x2494B4D8,
    0xD92F9D96, 0xDD308F9D, 0x2143B2D2, 0x219B5949, 0x9425CE27, 0xF79F59F3, 0xC63EB9D9,
    0x1085C179, 0xCAF1C08A, 0x1A0B9579, 0x4C27017E, 0x53384674, 0xB78B9FF2, 0x055818F5,
    0x27A0FA09, 0x84C2345A, 0x79A30723, 0x67772E29, 0x795967B0, 0x8448189F, 0x2B54E1FF,
    0xD9DBA499, 0x882A1192, 0x992741FE, 0x864A4D76, 0xA61A5F9F, 0xD4AE9A63, 0xE1C026C5,
    0x3293FF4B, 0x25A0D6B7, 0x1615A79A, 0x3897D85B, 0x131F9725, 0xDA3DA776, 0x81836DA8,
    0xFF8321BC, 0xB0100221, 0x198D2702, 0x67A2916D, 0xD1FE9BAA, 0xA4BA4D61, 0xC7AB39DF,
    0x00F9246A, 0xA1979808, 0x72199669, 0xDA64D6E2, 0xAD1ACFAC, 0x1B568981, 0xC09A5C3A,
    0xE4A1FD2A, 0xE7A8BA7A, 0x6517AA7A, 0x7D61FC30, 0x853660AA, 0x55A57FD1, 0xAEBAEBAE,
    0xFF1F4519, 0x537405E1, 0xAFCA9718, 0x7595BA8F, 0x4B78A858, 0xB21AB75B, 0x2FB25AB1,
    0x8263B1C7, 0x66770004, 0x37AD3A5D, 0xDB3BB39B, 0x26C6E289, 0x3D4BE1CA, 0x60D018D5,
    0xAFFB15A0, 0x1903DB53, 0xE9161E05, 0xA800621F, 0x9062B66C, 0xBAE9B553, 0x3648190F,
    0x620C1389, 0xDB6AB500, 0xB1A9BA4A, 0xB53A0217, 0x3A4FB27A, 0x246955B2, 0x37AC12C3,
    0x21440019, 0xB3CAA027, 0xA7BA5BA3, 0x208C755B, 0x4BE1F627, 0xD8208D57, 0x15EAE941,
    0xBC1B7DB0, 0xDB548CFD, 0xC5BA1FEE, 0xF4D40509, 0x51B6DB12, 0x234DBD9B, 0x38949A4C,
    0x66B4A07F, 0xB9C94619, 0x818597BD, 0x89B1D868, 0xBB8DBF9B, 0xB78C13B8, 0x95734B78,
    0x82721E35, 0xC11BA86D, 0x61C15C13, 0x0000AE45, 0x44159817, 0xD7BC248E, 0x13DDC29B,
    0x53D8185B, 0x8D74702B, 0xFC26FA18, 0x307A7DBB, 0xD979933A, 0xF738279A, 0x0EE1CE1F,
    0x93C3F982, 0x5209B805, 0xBFF7B3B8, 0x8FBFBC63, 0x53AE419B, 0x285B99AF, 0x77C1612A,
    0x7C7BC79C, 0x0017D247, 0xCBC482EA, 0x68E873E3, 0xC2B9519C, 0xC1C95C3D, 0x97C03076,
    0x7AA07738, 0x91BEA1EA, 0x7CABC57C, 0xDA48197A, 0xD8FD9A98, 0xD8AA267A, 0xBEFC3A4F,
    0x09C5A385, 0x7BFDC5EA, 0xCCDC65C6, 0x4AF7E435, 0x543069C1, 0x26CCDF59, 0xE7C7C62C,
    0x3CEBCE9C, 0x1755DA2E, 0xE32CB598, 0xDCC36503, 0x4CFC93CF, 0xC40F24C3, 0xB91B66D2,
    0xCFFCAC81, 0x069B9D11, 0x371CFB03, 0x40502B71, 0x6B3D75C1, 0x3209AABB, 0xCCFC615B,
    0x69CD3D33, 0xCB78245C, 0xC717F621, 0x72194273, 0xDCECF3A2, 0xD51D4FD4, 0x980EC2CB,
    0x419D7575, 0xD13D2677, 0xFBD01C97, 0x9450818B, 0xBD535538, 0xEFD75D15, 0x0F9670F5,
    0xD2709D3B, 0x42676160, 0x633BD675, 0xB87007CC, 0x39CD1D37, 0x33ADD97D, 0x24C102AD,
    0x6C481667, 0xDD525E42, 0xDB1DAFDA, 0x6C9982B3, 0x75981B62, 0xA8879B69, 0xC7D63D77,
    0x6E1ECFFD, 0x3886D67D, 0x65AA5529, 0x9281DC5D, 0x66D5A281, 0xDBD8955F, 0x5B85D8FD,
    0xDEFD99D3, 0x1C72FD9B, 0x971D1416, 0x4D3C86D5, 0x07DB2E76, 0x1E0BE09E, 0x6700782A,
    0x3A0720DB, 0xDDD9D8BA, 0xDCC4B9E1, 0x2AC8F1B6, 0x9D84C450, 0xDDBDC9B6, 0x124C3C57,
    0x411F66D9, 0xD67E2E09, 0x94B65DEB, 0x9E4BDF3D, 0xAD3C6BE4, 0x586D20A8, 0xD4F43C7A,
    0xE0C58026, 0x0BE65E63, 0x81096ADE, 0x6F904DD5, 0x1FE33228, 0x2901E1BE, 0xC06A06A0,
    0x5742DAD9, 0x71E117CA, 0x4A1E31E7, 0x0F8184C3, 0x1AD99E80, 0x955DD7BE, 0x5A316E1F,
    0x1E4FBF78, 0xD97EADDF, 0xA2AA617D, 0x766741FA, 0xEC1E6620, 0x43E09EC3, 0x74BFB428,
    0x0C81FF79, 0xBA3092B8, 0xFEDBE7A8, 0x8257A9E8, 0x9C9288EC, 0x3C4F6F70, 0xEDF0E9C5,
    0x2FB6FEF3, 0xD7587BB8, 0x63102B04, 0x810C5DE7, 0xB2DF3036, 0xEAFE4C71, 0x23DF5F13,
    0xFC4561C2, 0x667B63B5, 0x102721A9, 0xDF2BEC55, 0x0FDDADF2, 0x6F77D598, 0x5A740BE1,
    0xF41E91EF, 0xE4FEE8C1, 0xF02A741E, 0x7D54EE08, 0x81F3FE78, 0x8307E7F2, 0x53498A06,
    0xCFF05E9F, 0xA3077AB4, 0xEB1927F0, 0x15F17F11, 0xD3AE217F, 0xE59B780B, 0x2EA0C4D1,
    0xDF8BF89F, 0x001EC9CE, 0xE1E00748, 0x81FF9C04, 0xCC11B61E, 0xA7F55EDD, 0x6A04DC3F,
    0x5356FA30, 0xA060E0FF, 0xBF43FA5E, 0xD0C819AE, 0x4812502B, 0x7F59F66C, 0xF6F9CE30,
    0xD7F759D7, 0xFFDBF73F, 0xCF6F7E1F, 0x96F52889, 0x10A04DBF, 0xF8D0A400, 0x79FF5FF3,
    0x426C20FC, 0x20166BC8, 0xF0009C98, 0x00A0DECF, 0x4215FEFF, 0x43108FF8, 0x36210987,
    0x6231487C, 0x331689C5, 0xB128DC62, 0x1A8F45E3, 0x48FC7241, 0x91C96432, 0x5CA25326,
    0x49E5B229, 0xB2612A97, 0x6633497C, 0x733699CD, 0xB329DCE2, 0x0B994DE7, 0x8403E5FF,
    0x82068650, 0x4BFE9200, 0xD329548A, 0x36A34EA5, 0xAA950A9D, 0x7F040080, 0xE888618D,
    0x3E9D57A7, 0x39E57EC1, 0xB1592C36, 0x35AACF68, 0xDBACB6CB, 0x32E16DB4, 0x50D0844C,
    0xF34FAA11, 0x57CAAD4A, 0xA6BDDE2F, 0xD7FC10AC, 0xB5E1AE55, 0x421A776F, 0xC20F4ED8,
    0xDE086561, 0xD73042F2, 0xFF97CA97, 0x59CCC659, 0x9ECDE673, 0xFD1E833B, 0xD368B4B9,
    0x3E9353A1, 0xEA355ACD, 0xC35BAED5, 0xB6BAFD9E, 0x73B1DB6C, 0x5BCDBED3, 0xBEDDEE37,
    0x431B035B, 0xBF8706D0, 0xF5EEFBC8, 0xF3393CAB, 0x31DD49E7, 0xBAB4C23D, 0xB3D8EBF5,
    0xBDCEDF6B, 0xE0EFF7BB, 0x4F1F8BC3, 0xF3F9BCBE, 0x5FABD3E8, 0xFBBDBECF, 0xCBE3F0F7,
    0xBEBF4F9F, 0xF3F8FBFD, 0xBFCFDFEB, 0x00FFFFBF, 0x740B675E, 0x60672DCE, 0xF7360881,
    0x30582A8F, 0x716248A4, 0x84587621, 0xE1684214, 0xA84A1784, 0x76188561, 0x118661B8,
    0x4210A506, 0xA0482502, 0x50A62782, 0xF0F14101, 0x1C8890C1, 0x8C61E87E, 0xE3688234,
    0xA8CA378C, 0xEA388D63, 0x942D9854, 0x560013FD, 0x64581E28, 0x40100672, 0x0C643050,
    0x3C8E4876, 0x62D178EE, 0x07B3B4FF, 0x2180BC42, 0x75C09059, 0xBD97DBF9, 0x98261979,
    0xA62995C1, 0xA99E6499, 0x8E6C9A66, 0x9D9A26E9, 0x3FDC4305, 0x1040E470, 0x68980201,
    0xEE7C89E4, 0x0119E079, 0xA0E82A06, 0xE86A1684, 0xAA2688A1, 0x368CA2E8, 0x90A3E8EA,
    0xA1292A46, 0x4F153017, 0x7A667A9F, 0x114682A4, 0x2F1F4EB4, 0x8F6A2942, 0xE51A9252,
    0xAA96A3A9, 0xA6A6AA2A, 0x7761522A, 0xA629A0F4, 0x83A1C29B, 0xDAE6AE93, 0xEAABAEEA,
    0xACAF2BDA, 0x9523AAFE, 0xD081CCDE, 0xEACC0A04, 0x381B7267, 0x7337D040, 0xB0A5460C,
    0x98C886C1, 0x4964FF63, 0xB65C2E10, 0x6BB7E709, 0xB82E19BE, 0x6E6B8EDE, 0x9B8AE8B9,
    0xF5ADB92E, 0xA8410612, 0x058FF608, 0xEF6B280B, 0xA532B4A6, 0x4EC9530D, 0x00BFEFEA,
    0xC0F02C07, 0xF06C1704, 0xAC2708C1, 0x61EDC2F0, 0xF8B2EF91, 0x1B627C42, 0x88C60C38,
    0xAC62D5AF, 0x531BB031, 0x1CC671DB, 0x3FE4F87B, 0x677174B5, 0xBBDF119E, 0x41040180,
    0x1EC86B86, 0xCC720CC3, 0xF36CCF34, 0x950589C7, 0xED08204F, 0x0FBDC1E0, 0x0984B413,
    0x0823E904, 0xE42332CE, 0xB4D3440F, 0xDC906DB1, 0xBB352BAA, 0xB53B9F54, 0x8BAF55D5,
    0x775AD6F5, 0xFFB699DD, 0x4105C2C8, 0xB400401E, 0x6BDB68C4, 0xB76CC306, 0x70DBF6ED,
    0xDCF72DC7, 0xB76DD774, 0x753005DD, 0xF729D04C, 0x4A022B4D, 0x14C9F3FE, 0xB35D215C,
    0xAD2737E1, 0x278BE1F8, 0xEE506AAE, 0x0C9041EC, 0xA09D9C19, 0x63FD0313, 0x238DA874,
    0xA0E779EE, 0xE3BA2E33, 0x48FC8D32, 0x8DF79612, 0x158313C9, 0x30AA7A36, 0x4134D422,
    0xF59C98B6, 0xAEDF5ED5, 0xF7B8D73B, 0xBCEE7BBE, 0x2F904EFF, 0x05D41062, 0xADF3A90C,
    0x30DF81FC, 0xD0DDEF55, 0xF4FD2F47, 0xFD6F57D4, 0x9F67D8F5, 0xFB69EB28, 0x78AD3DDD,
    0x184BB412, 0x7AFE7D73, 0x9F9BA4E8, 0x67EAFA3E, 0xF229D858, 0xF2F28016, 0xF7902954,
    0x7CBFC43F, 0xF3EBFEFE, 0x00FB3EDF, 0xD49519A4, 0xDC820791, 0x4BDE38E0, 0x62087190,
    0xCFF9CE25, 0x07825443, 0x0C91FEA8, 0x3263FD40, 0x069E0BBE, 0x0CC1C781, 0x20785076,
    0xDCD4E0DC, 0x384B9045, 0x4A792081, 0x3856F7DE, 0x85307315, 0xA18BDA06, 0xC348670C,
    0x86F0DA1A, 0xA221CC38, 0x5314C00E, 0x40812FD0, 0x44104E64, 0x3DFFBAD0, 0x4BFD88F0,
    0x189511A2, 0xC5049140, 0x1D59411F, 0x80F03A41, 0x0801F5D4, 0x122263FA, 0x26C5C897,
    0x098B7176, 0xD8341919, 0x6C1A9040, 0x222A7520, 0xC0D43348, 0x51819190, 0x03C8E846,
    0xBC517E42, 0x83CED47F, 0x07E10C78, 0x3CC7A845, 0x1F8FF1F2, 0xFE9685D4, 0xFC822721,
    0x4C2A0400, 0xA0E50264, 0xF23A46C3, 0xA48C9091, 0xC9492724, 0x298085B8, 0x26A1F8EC,
    0x7FBE17BB, 0xE509A254, 0xDF28A2F3, 0x7E52C5A8, 0x12BC94D1, 0x11B4C8D1, 0xC1E08207,
    0x41010407, 0x49D39204, 0x1FEC5437, 0x424A20F7, 0x544A3762, 0xC094F292, 0x46AFA5EC,
    0x203C0E86, 0xF9D41124, 0x420921C7, 0x73300902, 0xE4448602, 0x0420FE3F, 0x91837882,
    0x4AE60C61, 0x6C141444, 0x772101C0, 0xF62E07FC, 0x963F4E48, 0x04E88FB3, 0xF9D739A4,
    0xA161B02D, 0xA4DC8A05, 0x949406BD, 0x9EF25614, 0x3EA7CCF8, 0x7ECFC9F7, 0x3B3B53FA,
    0xE43C8A60, 0x65EEC419, 0x110401A0, 0x270A1D87, 0xD2FE86CC, 0xA88CBEA1, 0xAD324536,
    0x0EC39191, 0x1444E104, 0x7FCB095C, 0xFD76C2CC, 0x7860C418, 0x4A92D0F9, 0x4D13A214,
    0x88DB0429, 0x82007C10, 0x03C0E920, 0x10480841, 0x5A6FEA97, 0x5049DD27, 0xD907F1EA,
    0xB69C01B5, 0xCF3A6753, 0x12A2D429, 0x0CECA8F5, 0xF49A311E, 0x94743D0F, 0x9B4D50A0,
    0x82A2930B, 0xAAF55A7F, 0x56AACD58, 0x84D5CAB7, 0xFE298245, 0xF73C6A88, 0xFD4A82D2,
    0x4D0B1BE3, 0x6A554E08, 0xF4E6B652, 0xD1CD6EAD, 0x9092E8B4, 0x75C42507, 0x4A2B8524,
    0xBE56DAF7, 0x225855EA, 0xF2B4D69A, 0xC8A0D6CA, 0x24858263, 0x3A915059, 0xD632A4D4,
    0x6C8D8EA8, 0xC245BF63, 0x84E2647F, 0x0300B8FF, 0x23D9CAC6, 0xA0ABA1F5, 0x4768AD0D,
    0x9AD2DA4B, 0x60033C96, 0x5AC4350A, 0x21414D50, 0x84598305, 0xDB4AFF03, 0xB6D5FAB8,
    0x6D6DCD7D, 0xDD5BCB6F, 0xBEB776E2, 0xF64225DD, 0x6C7F9071, 0x89A995A3, 0xBB2164DA,
    0x573AC7DC, 0xEE65CCB2, 0x8BC9062E, 0x04E3FD77, 0x76AD6CD0, 0xA60D39E5, 0xE0B4E8AC,
    0xC778AF0D, 0xE6F2DE4B, 0xDC2C64D0, 0x42AF7A6E, 0x810C4110, 0x2370FE20, 0xDBFBE770,
    0xBE96F6FA, 0x706FB5F7, 0xFE5F8BF7, 0x08A297EA, 0x892E87B1, 0x420B9911, 0x85CDB9ED,
    0xBBA3822E, 0x4D4F06E0, 0x24119917, 0x39909A41, 0x40F85AD6, 0x074A60EA, 0x0EE1CBCC,
    0x20C3F87B, 0x52C0310E, 0x5C46149B, 0x614FB3B8, 0xB19E3FEF, 0x37FA5086, 0xB17E30BF,
    0xE34BFB8C, 0xC638DAFF, 0xC771C635, 0x3A8E24A8, 0x75182420, 0x878260C4, 0x1B0560CC,
    0x060EC899, 0x34E630A1, 0x38A02208, 0x07DB41BD, 0xE2269C53, 0xCAF95B2A, 0x96B2CE58,
    0x7D0093DB, 0xC9BD589D, 0xFF338119, 0x30390D91, 0x4E3AAD64, 0xBC6F8CF3, 0xB8E73566,
    0xB37E70CD, 0x33AB719C, 0x19C3FD9E, 0x9E9A786A, 0x22E47C91, 0x7ECFF9F3, 0x1299340E,
    0x1025091B, 0x780801E4, 0xB2ABA2B2, 0xFA3B2D88, 0xB48E90D1, 0x028CABA4, 0xCBE38CA6,
    0x0601765F, 0xC2112BE0, 0x73CD99BA, 0xE3A8B4FE, 0x8F52EA0C, 0x56A4D43A, 0x72113709,
    0x31D639D1, 0x73EE829C, 0xE80D6392, 0x7F392759, 0x1304A0FF, 0x1E00E208, 0x41D7F982,
    0x8E53079B, 0x1B62E933, 0x4EC8D8FB, 0xC0DD3F76, 0x1A607E94, 0x12197BCA, 0x0FD21147,
    0xDAFAA734, 0xA9B6CEA8, 0x6D6DBDB1, 0xDADBBA9F, 0x117112A4, 0x6C348CD2, 0xA5CA332B,
    0x2D6DBAB5, 0xFAD776EB, 0xC7FE12C8, 0x834208F8, 0xDA1B0233, 0x5307C2F6, 0x7EECA6D6,
    0x00DFFBFB, 0x68F6380F, 0xBF45ECF1, 0xB90C0B42, 0xCE17B7D8, 0xBB7B866D, 0xB87F10E1,
    0xB30DC1C4, 0x1D6422C0, 0x05A0A257, 0x77EECD61, 0xEEDD7C7B, 0x8164F906, 0x9424C751,
    0xAF05D160, 0xCE04260A, 0xFCBB96F2, 0x181730E5, 0x8D029322, 0x8A96B394, 0x90459904,
    0xB53471F8, 0x3FE23C52, 0x83C3B89F, 0x1BA1F44E, 0xCA54C65D, 0x01B24225, 0x78408207,
    0xB8EF214B, 0xF52EA7C8, 0xC96EFBAA, 0x5DC43904, 0xD48051FE, 0x52E51BDE, 0x28530601,
    0x9BB2F310, 0x4F68ECFD, 0x00827E7B, 0x9BE39B56, 0x35F00F2F, 0x9040A428, 0xB8501473,
    0xD03A1747, 0xBDF45EF3, 0x80EF5DFB, 0x2113E237, 0x548274C2, 0x8CE39C36, 0x6E3FE2BA,
    0x9E2FC675, 0x2EB0BF8F, 0x90408C22, 0xD15D8195, 0x2CCA60D8, 0xCEF9CED5, 0xA0F3FE7B,
    0x01950EE7, 0x2BB70FC0, 0xFE5D0232, 0xF09A2587, 0xA50968AC, 0x76B0FFE7, 0xFB4EF9E0,
    0xF67DF7BF, 0xEE3DAFB6, 0x77254265, 0xC71FE8B8, 0x12EDB8D8, 0x53E2F8EF, 0x3F8DF1FD,
    0x79073B7E, 0xC07DDB0B, 0x3E8F5F6C, 0x94C1EC81, 0xFAFE8429, 0xF6BECFD8, 0xD30BFECB,
    0xE2DEBF47, 0x9830A41B, 0xBD630DDA, 0x4FB7B67E, 0x9FD5EEBF, 0x9EEFF6FB, 0x3C1D7FFD,
    0x9049BC42, 0x5BAED2EA, 0xF1BFCFC8, 0xFD7FCF93, 0x426C0703, 0x233F03A6, 0x34176F7D,
    0x087DB0A3, 0xB80A8098, 0x01669180, 0xDE0CA14C, 0x53435AC7, 0x6425D67F, 0xE510415A,
    0x82235690, 0x7F07EE77, 0x207EB81E, 0xF82181D8, 0x34A4A97E, 0x8F5C7110, 0x464254C1,
    0x82D7CA7C, 0xFE7FB7FD, 0x67F682F7, 0x80210460, 0x53804797, 0xC3CE0B31, 0x83D83C80,
    0xE383F83E, 0xA1494975, 0x8458056F, 0x9504E29A, 0x05950FF6, 0x6E60CC1B, 0xB17BF255,
    0x382281F7, 0x85482485, 0x58855852, 0xF6AB1378, 0x4C60E70F, 0x6B0C60FF, 0xE8628343,
    0x86583182, 0x64867830, 0x56F10FF8, 0x80383532, 0x55846811, 0x02FC0BC1, 0x87587484,
    0x58877876, 0xE14925A5, 0x7DE8706C, 0x845B004F, 0x07C42734, 0x1047E124, 0x211044AC,
    0x78237E85, 0x88B88C85, 0x8F85688E, 0x87165C08, 0x3B34BA4B, 0x69642862, 0xA82F8998,
    0x72286689, 0x616050C5, 0x58370310, 0x1496C270, 0xA8878037, 0xB8AA8A98, 0x2EF4908A,
    0x6F0F9149, 0x70093A98, 0x6860903F, 0xC419D881, 0xA0FF86C7, 0x5330680C, 0xB00F92D8,
    0x088D5837, 0x8598C489, 0xC68C3891, 0x785B3FB8, 0x0E36760F, 0x4C32D077, 0x889C8BA5,
    0x8D589B86, 0xE378D89D, 0x50801047, 0x3F60FF4D, 0x5287D8A3, 0x38AC3DC1, 0x8E58E48E,
    0x3E3D58E6, 0x88378E04, 0x68510468, 0xB027324B, 0x424182B1, 0x0DC10447, 0x760F84D8,
    0xB8C78516, 0x8C88C58F, 0xC98FC8FE, 0xE53B1668, 0x0D510807, 0xCC2D96CC, 0x68982417,
    0x8D78D48D, 0xC590D90E, 0x10FF7587, 0x0078DC08, 0x5F8B1381, 0x414C0A87, 0x91D8E762,
    0x2091F91E, 0x94D03059, 0x9180BD14, 0xED6BD504, 0xD8EF04B8, 0x4E15CA1B, 0xD80EB589,
    0x193281B2, 0x8FD8FF90, 0x34935900, 0x91418219, 0x6AD0FF88, 0x884836F2, 0x38D390C7,
    0x94594294, 0xDB589647, 0xF9161048, 0x0A968A8D, 0x2143C14C, 0x39529519, 0x28B95495,
    0x26924455, 0xF92876F9, 0x8B78EE0F, 0xCA5CA2DF, 0xF8BD0CB5, 0x2539300F, 0x37967938,
    0xB9369699, 0x6677F196, 0x190EC39C, 0x77F76047, 0x94490F6E, 0x10946975, 0x424C6B49,
    0x94A91410, 0x388EA917, 0x91D21CD8, 0x95573314, 0x88987986, 0xE1FA9899, 0x6191494C,
    0x5B729980, 0xE92A0939, 0x8F22E395, 0x1884D104, 0xB1080778, 0x96C88A33, 0x6A99E968,
    0xA9A09399, 0x0F41088C, 0xE20FF904, 0x11080740, 0x7508147C, 0x76978979, 0xE9779AF9,
    0x97D9126E, 0x5E0060FF, 0x34899597, 0x03F00098, 0xC09BF98A, 0xB9C29C19, 0x14C0551E,
    0xC898F8B0, 0x90101049, 0x0930FF68, 0xEB9946BB, 0x84E16422, 0x99A0E66B, 0x9D0FC0FF,
    0xB9A299F6, 0x9DD9DA9D, 0xD485A9A1, 0x80718276, 0x1045D310, 0xB082B8BA, 0x29B39E99,
    0x5CC9EC9B, 0xB88DC9B5, 0xC83894C9, 0x9C34B09B, 0xF89F79F6, 0x41D99F99, 0x9BA9C605,
    0x5C8EC5DA, 0x15898B69, 0x1996E93C, 0xC71041C3, 0x28F93455, 0xA0D9DF8C, 0x0E9DC9A3,
    0xD8939A2A, 0x5171100F, 0x62972104, 0xD9EA82C8, 0x9B1A1B9E, 0xD941FA1E, 0x00820FF8,
    0x9C99B99F, 0xED14C981, 0xA50114C0, 0xA2DA2C9F, 0x829C3A2E, 0xE0FA1491, 0xA0043F9F,
    0x03993091, 0x692D41FA, 0x0FF8F43B, 0x3C4D80DD, 0xB0FA1085, 0xA0F9DEA0, 0x46A10A45,
    0x5A13631A, 0x9A70F35C, 0x6185F7F4, 0xB90B6428, 0xA54A1F9E, 0x79A57A1D, 0xE5EE5894,
    0x6279F297, 0x3C149499, 0x3A62A2F0, 0x988A64A6, 0xD4000A31, 0x065FA267, 0xA38092A0,
    0xCA4E78F0, 0x595EA535, 0x8C01042C, 0x47A1196E, 0xBA78A79A, 0xA7738FA7, 0x5D108602,
    0x08619AB8, 0xA724E11A, 0x56A1CA55, 0x3A88A89A, 0x08158959, 0x800FF5EF, 0x29C9A5D3,
    0xA95A6539, 0x20A97A96, 0xAA3409F9, 0xA6D6BE95, 0x3B67F92B, 0xA0DFA9FA, 0x8C139A9A,
    0xA8A4899D, 0xBA49A7AA, 0x893251AA, 0xD84BA0F5, 0x578606F0, 0x7F890A81, 0xB8A87A8B,
    0x0AB7A58A, 0xA5B273A2, 0x2794B0FF, 0xC152A6AA, 0xA9894F09, 0xC8AC7AC6, 0x9508877A,
    0xAC283A14, 0xED77168B, 0x1273A028, 0xAA167E6F, 0x6B0D095E, 0x00F01040, 0x73E9D985,
    0xDFAA9A7C, 0x7A12AAAA, 0x970118A7, 0x4A74D7F3, 0xA9415D68, 0xAECAB9A8, 0x20AEDABA,
    0xE95E9E54, 0xA9BAC0AB, 0x1B09D489, 0xBAFAAC99, 0x83CAFCAF, 0xCD0002FD, 0xE48AA92A,
    0x0560FF8D, 0x4EAB302C, 0xD6B44837, 0x6F124192, 0xE1104860, 0xFA81AA40, 0x8FA93C0F,
    0x18AE2933, 0x5B1AAE1B, 0x0EC66852, 0xBC93E2D8, 0xBAEB9AE8, 0xB25AEEAB, 0x42B27B24,
    0x42418005, 0x10402304, 0x4CAC19F1, 0xC149AC49, 0xB35AFD91, 0xA1B37B36, 0xE704AFF7,
    0x0FFB30AC, 0x95880051, 0x27CAAF25, 0x4E13B69D, 0x087AD89F, 0xE40EA4D1, 0xB19AAC69,
    0xFDB1BB4D, 0x8A438933, 0x10850A10, 0x414E2998, 0x0AB69E72, 0xAEFB5CAF, 0xE3B26B5E,
    0xC1A03602, 0xB0201F03, 0x008E9B30, 0xBB384F60, 0xB6DB6CB6, 0xF6B3A768, 0x904D6BFA,
    0x3630B384, 0xCA9EBAE9, 0x2AF28BA5, 0x0FF4640D, 0x148CF0E5, 0xFA0C112B, 0xAE0B84B4,
    0x9331DB85, 0x82556E38, 0xAB20D72D, 0x76A070FF, 0xFA863B64, 0xB94B28B5, 0xEBB60B5D,
    0xD1A0A3D2, 0xB3DB6503, 0x005538B1, 0x3B6E0240, 0xBA5BA4BA, 0x4959B730, 0x4B710B51,
    0x50801A50, 0x5009A0FF, 0x7B901040, 0x241A85A8, 0x4F4160C6, 0xE0FFB4AA, 0xB165C50F,
    0x50B8785B, 0xCAE3B4EB, 0x73D6E281, 0xD67190EF, 0x0A219070, 0xA1A8BA1A, 0x95BCFB98,
    0x0B97BD0B, 0x08E58942, 0x300FF3A8, 0xCB9E3950, 0x0E714CB3, 0xA603314C, 0x3BE2BE1B,
    0xBA86FFBE, 0xDCBAA000, 0x9014A26B, 0x09B0FF2C, 0xCB0FFBB1, 0xDB44ABAB, 0x9630C919,
    0xC8A08463, 0xB9A70F25, 0xB86BBF11, 0x7DBC2BFE, 0x4141BBF7, 0x93D53D0F, 0xFFBF7569,
    0x5AD6A180, 0xB96BD2A0, 0x10C0DC0E, 0xC589354C, 0x10404808, 0xDB32C00C, 0xF0CF94CB,
    0xC1DBE4BD, 0xC5C1FC1E, 0x6B3BBE66, 0x0155ACB6, 0x5A0FF2F5, 0x44837F57, 0xBF3B94AD,
    0x15199863, 0x27E64D64, 0xAA7B4B41, 0x38BC1C00, 0x5C02334C, 0x819C059A, 0x3384EB56,
    0x1C0CC2E8, 0xBD3C44BD, 0x20C0FC46, 0xCBF074F4, 0x795C1454, 0x46BABC18, 0xC14C09E8,
    0xC55C2032, 0x59C57C56, 0x30003CF6, 0xB3DC19C2, 0x0802F05C, 0x75D62D9B, 0xA521ADC4,
    0xC8199B0D, 0x82D04160, 0x81CC3410, 0x37BBE893, 0x0C72BC0C, 0x7B2AE414, 0xFFAE6108,
    0x04DF0DA0, 0x0BE4167C, 0x5BB92AEA, 0x5C64C48B, 0xC85C82C4, 0xF2AF2353, 0x41045AFA,
    0x489C50B0, 0x4A149C52, 0x3C92C582, 0x61FC94C9, 0x24BE8AFF, 0xE02B980C, 0x0A20FF80,
    0x9A0FF7D6, 0xE265C86B, 0x32EAF2C2, 0x7F8960FF, 0xF63E6ACB, 0xB14A410F, 0xFFC6FBBD,
    0x2CB1C39B, 0x34B25493, 0xBF0EF108, 0xECAB0E47, 0x46B0FFC3, 0x83605A17, 0x4974AB58,
    0xC83C11C8, 0xC1CA2CC6, 0x65956B83, 0xC5DBA204, 0x00C8F8B1, 0x3C95B340, 0xCD5CD4CD,
    0x98C5A5A7, 0xEA26CCEC, 0x0FF45501, 0xFF9FC0A4, 0x754C0C30, 0xA71353CC, 0xBA4E1241,
    0xC5895958, 0xCABB544A, 0x3C1088F8, 0x3B4CAE47, 0x66CCF4CB, 0xC3BBC893, 0x89D573D5,
    0xC09C6B10, 0x4586B605, 0x467BC80B, 0xD05CC4CE, 0x1FD07D04, 0x4BEE5894, 0x44404210,
    0xD094CCDA, 0x3CD6B6AC, 0xD15D14D1, 0xF4C5A55D, 0xD59DC994, 0x0741042C, 0x6295EA61,
    0x43B9CC8B, 0x4E1AD67C, 0xB1273CEA, 0x40E0104A, 0x67653507, 0x70ADECF1, 0x5C71C6EC,
    0xBBF187CF, 0xEF115582, 0xF53285CC, 0x9ACA4F0F, 0xCD862B77, 0x2CC5C81B, 0xD45D43D2,
    0xF158CD06, 0x4BD65956, 0xD1A7A810, 0x4C09BB30, 0x3D16D121, 0xD55D54D5, 0xB7BE64FE,
    0x57D1C8D0, 0x0FFB2D04, 0x6FBB23F0, 0x45CCD46A, 0xD02CE7D2, 0x4710493F, 0xE0D50FFB,
    0x34E0D4B8, 0xD60E80FF, 0x552ECAD9, 0xD32D74C7, 0xF6C73D76, 0x7D30C35C, 0x0FBADED3,
    0xB7C0473D, 0x4906719C, 0x997D6B10, 0xB9AF284E, 0x7BCED668, 0xD44D62D4, 0x7ED8FD8C,
    0x3A3D8336, 0x42802B05, 0x62D5A244, 0x6AF90A05, 0xD9DD9CD5, 0x584FAD9E, 0x2870D98D,
    0x59842566, 0xFAD086B8, 0x67C3D257, 0x0D1A3DAB, 0x04DAEB7D, 0x80FFDB01, 0x93E104AD,
    0xDB9A70F1, 0x1C05601A, 0xC3B932D3, 0x7A339CB2, 0xEA77DBDD, 0x7BFC6CD7, 0xEC4130F1,
    0x20FF4720, 0xDAFDCCDB, 0xB0D69B7D, 0xDBB54E11, 0xD90DD4D8, 0x1EDA8D8E, 0xE0AB6B87,
    0x0520FF30, 0x0FD0F555, 0xFC90D9AD, 0xDE5DE4D9, 0xE6492DE6, 0x99FD0A1B, 0x003837BE,
    0xD02B6328, 0xADD68858, 0xB45883A8, 0xAED65CE7, 0x58167C49, 0x0FFCBE47, 0x8CC32962,
    0x718D7191, 0x7B0CF02D, 0x77DC2DBE, 0xEBFDE07D, 0xDC1E0A2B, 0x10D77E0D, 0x5E04CB81,
    0xB8D71925, 0x4E0CB104, 0x8A18DFD8, 0x88467B9E, 0xB4DF7476, 0x8DD5DAB3, 0xDD7E24DD,
    0x4A6EEE26, 0xB09D589C, 0x0180FF51, 0xB1DE059B, 0x1000DE28, 0xE35DE7C9, 0x3AE37E36,
    0x28AF30E4, 0x62A3A9DA, 0xFFBE0063, 0x90590AD0, 0xE2547515, 0xC2DFADD5, 0x2E49897C,
    0xC69D6964, 0xC0E4E104, 0x88F68617, 0xE5447110, 0x564C585E, 0x7D6FE59E, 0x39185EE5,
    0xA7B49E0C, 0x8E5AD709, 0xE63E5BE5, 0xE3DCAE57, 0xBE50CAB0, 0xE50416E6, 0xAEC661A0,
    0x3B58E709, 0xDF3E27E2, 0x44E46E76, 0xF595360C, 0x9CC9CAE3, 0x9A75FE3C, 0x3E38DE3A,
    0xE85E84E8, 0x00E3A433, 0xDDECA330, 0x104BEBC5, 0xF09BE07B, 0x8E75AD3B, 0xCE6267E7,
    0x91E20E71, 0x9E9AE21B, 0xDD2E9CE9, 0xA0CBF58B, 0x8EA1CFEE, 0x605EA4A1, 0x95EA1EA5,
    0xBE9E8BA5, 0xE9DEABE9, 0x74EAFE4B, 0x3E77EB1E, 0xDD5EB4E9, 0xA4104CE2, 0xC0FF9C50,
    0xE7F56602, 0xD1E81627, 0x3EC2E86C, 0x3D6EC4EC, 0xEF149194, 0xD76FEBE0, 0xE9007A49,
    0xB584B833, 0x090FEB3E, 0xED535096, 0xD7ED467B, 0x14E2ED6E, 0xEDCE94ED, 0xDDEB2EDE,
    0x83601ADE, 0x0FF76C94, 0x31D4E7CF, 0xBEC5D51E, 0xEEDEECEE, 0x4961B376, 0x9ECA0C31,
    0x1C51583A, 0x570A9408, 0x0C2CA9F0, 0xED2EDFEE, 0xFFEE1EFE, 0x0F00EFDE, 0x0FF97BF0,
    0x4A104EF8, 0xBE303440, 0x14C296E8, 0xEEB33AB2, 0x3F12F11E, 0x92336EF1, 0xF30C4000,
    0x795B6BFE, 0x8624F005, 0x20F02DA7, 0x1F22EFCF, 0xF03F23F0, 0xA59ECF21, 0x445754CC,
    0x4B302110, 0xDBB02F0B, 0x417714C0, 0xF35F34F1, 0x1630AF36, 0xBF0CEF2F, 0xEBC104F3,
    0xE1D4B104, 0x6C4A54CC, 0xF27F25F2, 0x48F24F44, 0x8F4AF47F, 0x10472460, 0x47104707,
    0xA0FF7270, 0x562F1962, 0xCB14C0AE, 0xBF5AF37A, 0x301F5CF5, 0x3A00098C, 0x7B3CEE8F,
    0x07C104C1, 0x391A9458, 0x9F6AF45A, 0xF6DF46F4, 0x6FF4BF6B, 0x9AF2264F, 0x59809858,
    0x02F62BD9, 0xD149F57B, 0xF7DF5D65, 0x90F7FF7E, 0xC0009572, 0xF3CE3B6C, 0x59CCCDE0,
    0xFD677947, 0xF6CF70D3, 0x8EF8FF71, 0x7F8DF91F, 0x5896F1F4, 0x0405B0B1, 0xC8A706A1,
    0xF78A2575, 0x00A69B30, 0x90005E80, 0xFA5F8068, 0x8CFA7FA6, 0x1149C602, 0x980F550D,
    0xA3104B73, 0x2F4DCE00, 0xFB4F6EF9, 0xB5F93F90, 0xDA8AFB8F, 0x06C5CAA3, 0x9E5074B7,
    0x9EC98B1F, 0xFA8BB114, 0xC8FC7FC6, 0x06C4288F, 0xFAD0D200, 0xEDFC059D, 0x0FB3BEFB,
    0xFB9FB7ED, 0xD8FD5FD6, 0xEFDAFB6F, 0x54BC4A67, 0x04F75104, 0xE4D203E1, 0x0BE838FC,
    0xC9B6514C, 0xBFEAFE9F, 0x467201FE, 0x8655F149, 0xCB2F9FEF, 0xBB0104B2, 0xBADF2D60,
    0xAFD7FDBF, 0xFF9FD9FF, 0x002DEFFE, 0x800C6C11, 0x10C0BB7F, 0xA083432C, 0x01040383,
    0xD0F7FC3C, 0x11894421, 0x989C5E29, 0x8AC6A2D1, 0x046E311D, 0x47E391E9, 0xF61F2191,
    0xE24B5893, 0x5D2D8903, 0x531984BE, 0x359A4CE6, 0x99C4DE6D, 0x9E4EE753, 0x04FE7D3D,
    0x50E8541A, 0x1E8D45A2, 0xE9549A45, 0x9D4DA652, 0x551A853E, 0x55AA54EA, 0x9AC55EAD,
    0xAE56EB55, 0x057EBD5D, 0xC48A12FB, 0x92CD256C, 0xAD523B44, 0xDB67B5C9, 0x605905A6,
    0x24234100, 0x42C2AE08, 0x82191850, 0xCBFE0EBA, 0xE06085F5, 0x1B0182C1, 0xF0B87C26,
    0x138DC562, 0x991C463F, 0x92C9E431, 0x7CA65B1D, 0xCD66F2B9, 0xC67F339D, 0xE8339A1C,
    0x9B3DA2D1, 0xF4BA7D26, 0x53ADD56A, 0x9B1D46BF, 0xB2D9EC35, 0x7DA6DB5D, 0xDD6EF6BB,
    0xC6FF73BD, 0xF0379C1D, 0x1B7DC2E1, 0xF79C7E27, 0x9904312F, 0xF0A33413, 0x6F0E0D9F,
    0xEEC5B3AD, 0xED5C3B36, 0x7CA2D3DD, 0x8061F828, 0x9FCDE5B0, 0xFD5E9F47, 0xDDEDF67A,
    0x5F1F87BF, 0xF5FA7CFE, 0x9FC7DFED, 0x11CCFF5F, 0xFF5FBD64, 0xB9003B6F, 0x10BAF023,
    0x8E682022, 0x85A2081D, 0x539AE70B, 0x26E4C22E, 0xE2C2AE44, 0xC2D0942E, 0x90A4310C,
    0xDC3B0D43, 0x47104430, 0x0F44B0FC, 0xC4D1144F, 0x91245114, 0x6C5B1545, 0x7ABF978D,
    0x46A08309, 0x86E82090, 0x31E404EA, 0xEC0B1F40, 0x8CB74811, 0xFD87C891, 0x4932448E,
    0xB2649725, 0x849F2749, 0xA7294A32, 0x2B4AB2A4, 0xA1EEAC97, 0xB01C7E46, 0xE4BD20CB,
    0x34193B12, 0x27130820, 0x20881208, 0x73645C83, 0x84613745, 0xDB3945F3, 0x39CE938C,
    0x4EB3BCDF, 0x73E4ED3C, 0x04F53F4F, 0x31414F34, 0x569FF34C, 0x0BC820B2, 0xB214C018,
    0xFD1F4651, 0x24562D92, 0x4B4AE0A2, 0x5334C52F, 0xB4E5374D, 0x053F4F53, 0x47515435,
    0x8908AA3D, 0x553309C4, 0x75552347, 0x5A08B92D, 0x628206E3, 0x1A2082D1, 0xC6A5F209,
    0xB5DD073F, 0xE57D40CF, 0x875ED7F5, 0x60D8B615, 0x5936058F, 0x565D9162, 0xFCD6D4D9,
    0x14C6B9E7, 0x11A08239, 0x55B48024, 0x56D55756, 0x2A246DA4, 0xC7715483, 0x735CB725,
    0x5D3745CF, 0xB765D775, 0x902CF75D, 0xB96E92A8, 0x7ADB37A5, 0x0160B1FF, 0x81108682,
    0xC09E4CA0, 0x8D684215, 0x82599675, 0x60F8459B, 0xB8660D85, 0x6E138760, 0x1787E218,
    0xC3175146, 0x9590817C, 0x2301FEBC, 0x603A8206, 0x477B5B69, 0x9164B916, 0x03E891A8,
    0xB9665777, 0x865F9765, 0x67996639, 0xAB66B9A6, 0x9D6890EA, 0xD9DE4979, 0x980CB864,
    0x54291FEB, 0x2E96A820, 0xA0A81CD0, 0xB89628BF, 0x8E9FA669, 0xA389EA18, 0xAB6A7AA6,
    0xEB1AAE9D, 0xF5BDA53E, 0x20823F9F, 0x78048248, 0xB367B7BE, 0x6525140B, 0xBB66D79B,
    0x86DFB76D, 0xE7B96E3B, 0x592C3BA6, 0x6CB6FA1F, 0x1BE6C9BD, 0x801C0DBB, 0x627FD655,
    0x826902D9, 0x6A55D178, 0xBC5717AD, 0xBF1DACF1, 0x1FC6721A, 0xCAF23CA7, 0x6316831B,
    0xF7098A82, 0x2092471F, 0x080D86A8, 0x9F3C800A, 0xF51B3EFB, 0x4891C887, 0x875FBA8F,
    0x67D9763D, 0xDB76BDA7, 0x0194EF6F, 0x8890D689, 0x074FD49E, 0x388AF7FE, 0xC10D9908,
    0x60229945, 0x5CBE9735, 0x879BE772, 0x27E972DE, 0xEAF9FE9F, 0x9FFEA7A3, 0xC822F142,
    0x41FF5310, 0x168204A2, 0xF3754030, 0xA37BDF83, 0x1B1A2444, 0x87DFF777, 0xE7F97E3F,
    0xFB7EBFA7, 0xA2419A71, 0x9F4F8458, 0xFD5F927F, 0xC208BF07, 0x2F69440A, 0x5EB35D69,
    0x40B812F6, 0x7AF031EC, 0x0360540F, 0x693D3825, 0xF90C8B49, 0xD0BE97C3, 0x6DFF3E77,
    0xA9121CD0, 0x3844FDC2, 0xD0961242, 0x61442784, 0x00A53B0A, 0x22426C89, 0x0C60E8F5,
    0x902AB7FB, 0xFF2EC5D1, 0xA299C4B8, 0x415CA105, 0xF41181D0, 0x388104E1, 0x51161FC4,
    0x9E5C4688, 0x3881FEE1, 0x08C22482, 0x99019904, 0x19453836, 0x0F85CF9A, 0xB50A8BB1,
    0x762E45B8, 0x045F8BD1, 0x42971863, 0x427087B4, 0x22A8FC22, 0x29086715, 0x08A411A0,
    0x5F61CC37, 0x042BA466, 0x418ED11E, 0xEF1123C4, 0x223CC7A8, 0xB1BD8F91, 0xA56C83D8,
    0x815C54AB, 0x01F87B20, 0xC5206841, 0x8D723634, 0x4486125F, 0x0110F600, 0x9792D188,
    0x352664C4, 0xBE4E49B9, 0x890F90CF, 0xF8392386, 0xF1B500C8, 0x07FC351F, 0x10404E13,
    0x2081444F, 0xE26038C0, 0x5A47E8F6, 0x7D96D2CE, 0x6B1FE5BC, 0xC1682189, 0xF0B72092,
    0xA1204102, 0xC0EC8204, 0x00990403, 0x4A38D50B, 0x1E6E9E66, 0x44843112, 0x6A49D2E6,
    0xD79AD356, 0xB53666C4, 0x480BA9F9, 0x5CA218E4, 0x85B53866, 0xA4100200, 0xA5602809,
    0xCBE1FF2B, 0x90284275, 0x2EE5CCBA, 0x7A4B89E1, 0xF29ED3CE, 0x61129194, 0xC47FB851,
    0x237F208A, 0x074C00C8, 0x3292824E, 0x8890C12D, 0x50B9B6A9, 0xA1D43686, 0x4468850F,
    0x890052BF, 0xDF21EF24, 0x0B336834, 0xD6531D7A, 0xE8762085, 0x61704101, 0xF20CBD98,
    0xA7ABCC70, 0x4F1A553C, 0xA5B4A696, 0x130DB4F7, 0x7FB9A1FF, 0x5614CD74, 0x6A19C820,
    0x340C1040, 0x1519A340, 0x21D31AE7, 0x44483D91, 0x6A45125F, 0x54BA9552, 0xA9D536A6,
    0x44A8AC94, 0xA0D1B1BA, 0x293AF4FE, 0xAA4100A8, 0x688202C0, 0x28FF6002, 0xD8941505,
    0x73BC7FC3, 0x2B452EA5, 0x567AD34C, 0x2FD10EB5, 0x4121DBCA, 0x82052140, 0x04096248,
    0x080801F1, 0xF6AA4002, 0xF912A815, 0x20FC43E0, 0xD53C0C11, 0x6C4587B0, 0x58BB1562,
    0x2240862E, 0x3B08908F, 0xAAD56AFC, 0x0801E8F2, 0x5A15C820, 0x304A9040, 0x80C03181,
    0xCADB3E50, 0xB4BED256, 0xAD356BB4, 0x2856BA6D, 0x9873F059, 0x29882436, 0xD9D95B27,
    0x642244A6, 0x756E6C62, 0xF6DE5BBB, 0x5373B7D6, 0x518843C8, 0x1716BFDB, 0xAC282F52,
    0x8FF6C0D7, 0x80D08453, 0x6A6D1C82, 0xE8DD3B51, 0x32AD9752, 0x394D2765, 0xD07F9631,
    0x39040781, 0x2B896510, 0x4380B4DE, 0x6DF86D22, 0x5EBBD57A, 0xBDD7B6F6, 0x43E4AAA2,
    0x4891210A, 0xF6B6971A, 0x13325DFD, 0x347FA8B5, 0x618D7402, 0xD96230A7, 0xD756E917,
    0x703DA7C0, 0x4EF37381, 0xA4F80969, 0x776BA572, 0x160FF417, 0x0A1FF374, 0xC97DE8A0,
    0x7D9161BB, 0x90A32243, 0x3BDEBF48, 0xD8971262, 0xF14627C4, 0x90F9CA7C, 0x18043CB1,
    0x8C70D5E3, 0x823A53B5, 0xFF700070, 0x080C8308, 0x101C8702, 0xFD9E1264, 0xC2F53007,
    0xEAEA9A97, 0xAEB609AD, 0xE49C9582, 0xA6991E7A, 0x411A34EC, 0x1D84410A, 0x2E1FF8F7,
    0x1A036E48, 0x76FC6322, 0x90E16F99, 0x95281E08, 0xD9973262, 0x734667CC, 0x62B2A19A,
    0x00078800, 0x9C7180ED, 0x530FFCBD, 0x04020082, 0xFF060319, 0xFDA3B455, 0x96441863,
    0x3C1191E9, 0xD92325E8, 0x6D1220D0, 0x0B3C8980, 0x4717F507, 0x0BC2E0FF, 0x0E2F9208,
    0x69D2B9CB, 0x3C4487D1, 0xA9041121, 0x069FD3D9, 0x3D45A875, 0x0964976A, 0x887DF300,
    0x696CE764, 0x80075F2E, 0x572CCAD7, 0xEE09B1FF, 0x44CFD946, 0xBAD769A6, 0x1342D666,
    0x1687C99A, 0xAD754CA2, 0x54CE92AB, 0xE9C0A757, 0x0360D23F, 0x05214482, 0xEE80B904,
    0x818021FE, 0x97DADAAE, 0x243ED47E, 0xE8890AE2, 0x06DFD480, 0x3DC5B877, 0xF31EF7EE,
    0xC8790721, 0xEEBD5830, 0x92A00F39, 0x412AC0FF, 0x3F9047C2, 0x9D208108, 0x9357AEE0,
    0x4299DCF8, 0xF6BF8EA8, 0xCE01B035, 0xAB4AB22B, 0xEB10A350, 0x8FFDF43F, 0x9CC1344A,
    0x0F47FCE8, 0xA0E74654, 0xADDB1BB1, 0x1EAA1016, 0x84890792, 0x071FDC94, 0x3E45C879,
    0x124EC4F2, 0x38B0C500, 0x115E53C6, 0x4C6410F2, 0xBF421104, 0x6A88B1FE, 0xD04CC3FD,
    0x65BFA0AD, 0x0B9E7039, 0x8705D0DC, 0xF5A0B490, 0xC2008263, 0xC1D8FFDE, 0xF17219C4,
    0x645B5F95, 0x988001E0, 0x922F021F, 0x57EADD57, 0xAFD67AC7, 0xB4005F19, 0x75430018,
    0xBE99D37A, 0x5722002A, 0xC7FBE2DE, 0x6B47BE21, 0xA68AE95C, 0xC0D42A85, 0x9EF73D7A,
    0x70A649EB, 0xEB91701F, 0x0C7FD77A, 0x3CC50862, 0x00543FE6, 0xDD87952F, 0x87F61BF0,
    0x6DD16044, 0xF1DE37AD, 0xE47C878F, 0x006E68B7, 0xA622421C, 0xC43C0890, 0x43B1F85E,
    0x29047C8A, 0x620804C1, 0x21F35905, 0x83C0FF91, 0x4851FE91, 0x5A061A91, 0x3FF076C5,
    0xD17B1F62, 0x74F6D91E, 0xDE9EB9F7, 0xCA937B79, 0xFFB3693E, 0xD333913D, 0x9EA4824A,
    0x0827A620, 0x8FF3FA11, 0x008413D0, 0xF47CDEEF, 0x3011BF0F, 0x0FC4043F, 0xB5E49059,
    0x77EE7DBF, 0x73F1FBDF, 0x212443EC, 0xBF487891, 0xA29F9CF3, 0x01A208D8, 0xAF23FE9F,
    0xB7838904, 0x1C06D1FF, 0xF6FE8410, 0x463FFFAF, 0x307FBC91, 0x84FC567A, 0xB21B3F96,
    0x029683DE, 0x13DCA944, 0xB7DC0322, 0x01362942, 0x1A60B20C, 0x106A7E1C, 0xF9A38882,
    0xB3FBBFCB, 0x03788240, 0x0C81832B, 0x631BA7F8, 0x3F41F280, 0x35C11BF3, 0xB887BC4A,
    0xB31A8485, 0x16C163EF, 0x8417C174, 0x3111B7C1, 0x9C84B000, 0x9C1BC121, 0xBCF96D3E,
    0xB180887F, 0xC00807F9, 0xABD3F72C, 0x9D83307F, 0xD03107FA, 0xA1D39B31, 0x55082143,
    0x518D18D8, 0xB223D822, 0xD11AEB62, 0xD42BA992, 0x1C3C2C15, 0x653B915D, 0x5C2D1681,
    0xC3142CA2, 0x7EB07C2D, 0x9BD9401B, 0x15D35C42, 0x8D8BBC27, 0x127EBD61, 0x0E84241C,
    0x0B0168E9, 0xF1B0C203, 0xA72803C1, 0x1C3F3C12, 0x0413AAB4, 0x087C1480, 0x42C18A85,
    0x4443C434, 0x177444C4, 0x10887A9F, 0xF065887A, 0x44943E43, 0x0C200318, 0xFC4B0823,
    0x8822CB87, 0x7FA55825, 0xF3678278, 0x44FC5044, 0x5232031F, 0x21E43848, 0x07FC5408,
    0xFE456455, 0xA8584553, 0x8BD35B95, 0x59C5A3DF, 0xBBDF45B4, 0x4073D8C5, 0x574559EE,
    0xFC54C5F4, 0x08245EC5, 0x29AE7053, 0x0C518823, 0x450366C5, 0x0CB0BA01, 0xC804C4C3,
    0xC69448B0, 0x4028CC1C, 0x541505B4, 0xC6D46CC4, 0x6EC6E46D, 0x026994F4, 0x887ABA00,
    0x94089033, 0x3C3EC6A1, 0x2FB449C7, 0x77BE736A, 0x8476BE7B, 0x47787FC7, 0x77C77479,
    0x388233B3, 0xBE53B402, 0x7DBE5BE4, 0x047F07FC, 0x48147EC8, 0x0A87FAD8, 0x4479A0D0,
    0xC78C7AC8, 0x86C74484, 0xF4874754, 0x0890751F, 0x6088905F, 0xF3BF887A, 0xC8D48CC6,
    0x8EC8E48D, 0x01F69284, 0x087B8700, 0x7B089050, 0x4C884698, 0xC87C93C7, 0x96C95495,
    0x6887C94C, 0x92D88906, 0x8F3F0887, 0xC49BC9B4, 0x49D49CC9, 0x890170FC, 0xA8890348,
    0xC9449706, 0x97C964A1, 0x2CA14A24, 0x28BCA3CA, 0x87AB1089, 0x849DB360, 0xCA94A8CA,
    0xB04AA4A9, 0xF0878960, 0x055887B6, 0x87B4C889, 0x4CA336D0, 0xCA44B0CA, 0xB24B04B1,
    0x04AFCA1C, 0x88906500, 0x49089048, 0xAA8A087B, 0xCB94B8CA, 0xBACBA4B9, 0xAC9A8A94,
    0x087AA2C9, 0xB321785C, 0x04B2CB14, 0xCC14A54C, 0x894C1CBF, 0x4087A678, 0x47208905,
    0xCC08949A, 0x84C7CBB2, 0xCC94C8CC, 0x968A34C9, 0x900E8003, 0x887AC188, 0xF28002FA,
    0x04C24C0B, 0xCD14BF4D, 0x5543F4CF, 0x7B6E0003, 0x08903788, 0xD6CCA3AA, 0x84D7CD74,
    0x09ECD8CD, 0x87ABD470, 0xF0890458, 0xCDD4D230, 0xD0CDDCC2, 0x04D1CDEC, 0x88907400,
    0x33089059, 0x93D10890, 0xCE54E4CD, 0xE6CE64E5, 0x04B80994, 0x90739300, 0x8904E887,
    0x9887A508, 0x4ED4DFAA, 0xDF4EE4DE, 0x0A2ACEEC, 0x0892504A, 0xE9889042, 0x72C28004,
    0xCF54F4CE, 0xF6CF64F5, 0x04AB8974, 0x4AD2CF00, 0xEDB94089, 0x04FBCEF4, 0x473CFC4E,
    0x894CDA18, 0xC08791A8, 0xCF74A711, 0x02D02501, 0x7D03D035, 0x8001BB88, 0x5908903F,
    0xFBB00890, 0xCFCCFB4E, 0xA84C0D09, 0x930F85CB, 0x087A4488, 0x0ED042AE, 0x050FD0F5,
    0xCCC50351, 0x2D49E887, 0xE4C33CB9, 0xD09514CA, 0x16D08D15, 0x04AEC87D, 0x2C0D1800,
    0x8D9B4800, 0x08158893, 0xD1D51CD1, 0x1CD1E51D, 0xA800511D, 0x8895204D, 0x49889038,
    0x38891788, 0x07908907, 0x2651750A, 0x7A3430D5, 0x087D2588, 0x2AD2286C, 0x148B087D,
    0x520887D2, 0x2ED1ECD6, 0x052FD2F5, 0x34ED3053, 0x162AC800, 0xB38E0893, 0x868087D1,
    0x1641B507, 0x3526CFD5, 0xD085082E, 0x3AD3385E, 0x28893EC5, 0xAA380053, 0x3ED3E530,
    0x053FD3F5, 0x9F289BD4, 0x879DD087, 0xE08796C0, 0x0350878B, 0xA9041889, 0x7887D472,
    0x54952707, 0xEC524947, 0x906B0894, 0x88903908, 0x4F887D45, 0xFD428002, 0xBAE08954,
    0x52D52540, 0x4553D535, 0x33609F55, 0x87A55B36, 0x95571C28, 0x00055788, 0x8903E559,
    0xC55B0678, 0x55B887D5, 0x0055CD5D, 0xED5F55D8, 0xD6155FD5, 0x5E562560, 0x3D605635,
    0xD64D61D6, 0x66D64562, 0x65675655, 0x569567D6, 0x87C98D66, 0xC55849F8, 0x558D59D6,
    0x0126E889, 0x4C70087D, 0xD71570D5, 0x72D72571, 0x4573D735, 0xD75574D7, 0x76D76575,
    0x8577D775, 0xD79578D7, 0x7AD7A579, 0xC57BD7B5, 0xD7D57CD7, 0x7ED7E57D, 0x057FD7F5,
    0xD81580D8, 0x82D82581, 0x4583D835, 0xD85584D8, 0x86D86585, 0x8587D875, 0xD89588D8,
    0x8AD8A589, 0xC58BD8B5, 0xD8D58CD8, 0x8ED8E58D, 0x058FD8F5, 0xD91590D9, 0x92D92591,
    0x4593D935, 0xD95594D9, 0x96D96595, 0x8597D975, 0xD99598D9, 0x9AD9A599, 0xC59BD9B5,
    0xD9D59CD9, 0x9ED9E59D, 0x059FD9F5, 0xDA15A0DA, 0xA2DA25A1, 0x45A3DA35, 0xDA55A4DA,
    0xA6DA65A5, 0x85A7DA75, 0xDA95A8DA, 0xAADAA5A9, 0xC5ABDAB5, 0xDAD5ACDA, 0xAEDAE5AD,
    0x05AFDAF5, 0xDB15B0DB, 0xB2DB25B1, 0x45B3DB35, 0xDB55B4DB, 0xB6DB65B5, 0x85B7DB75,
    0xDB95B8DB, 0xBADBA5B9, 0xC5BBDBB5, 0xDBD5BCDB, 0xBEDBE5BD, 0x05BFDBF5, 0xAC45C0DC,
    0x00000080, 0x00000000

  EW_BITMAPS_TABLE( ApplicationLogo )
    EW_BITMAP( ApplicationLogo, Default )
EW_END_OF_BITMAP_RES( ApplicationLogo )

/* Table with links to derived variants of the bitmap resource : 'Application::Logo' */
EW_RES_WITHOUT_VARIANTS( ApplicationLogo )

/* Font resource : 'Application::FontArial17' */
EW_DEFINE_FONT_RES( ApplicationFontArial17, 13, 3, 0, 16, 0x001F, 0x00C0 )
  EW_GLYPH( 0x001F, 1, -9, 7, 9, 10, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 4, 0x00000083 ),                /* ' ' */
  EW_GLYPH( 0x0021, 1, -10, 2, 10, 4, 0x00000083 ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -10, 5, 3, 6, 0x000000CF ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -10, 6, 10, 7, 0x0000010E ),             /* '#' */
  EW_GLYPH( 0x0024, 1, -11, 5, 12, 7, 0x00000206 ),             /* '$' */
  EW_GLYPH( 0x0025, 1, -10, 8, 10, 10, 0x000002E5 ),            /* '%' */
  EW_GLYPH( 0x0026, 1, -10, 8, 10, 9, 0x00000411 ),             /* '&' */
  EW_GLYPH( 0x0027, 1, -10, 2, 3, 3, 0x0000053D ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -10, 3, 13, 4, 0x0000055B ),             /* '(' */
  EW_GLYPH( 0x0029, 0, -10, 3, 13, 4, 0x000005E3 ),             /* ')' */
  EW_GLYPH( 0x002A, 0, -10, 5, 4, 5, 0x0000066E ),              /* '*' */
  EW_GLYPH( 0x002B, 1, -7, 6, 5, 8, 0x000006C1 ),               /* '+' */
  EW_GLYPH( 0x002C, 1, -2, 2, 4, 4, 0x00000707 ),               /* ',' */
  EW_GLYPH( 0x002D, 1, -3, 3, 1, 4, 0x00000727 ),               /* '-' */
  EW_GLYPH( 0x002E, 1, -2, 2, 2, 4, 0x00000736 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -10, 4, 10, 4, 0x00000742 ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -10, 6, 10, 7, 0x000007BD ),             /* '0' */
  EW_GLYPH( 0x0031, 1, -10, 4, 10, 7, 0x00000874 ),             /* '1' */
  EW_GLYPH( 0x0032, 0, -10, 6, 10, 7, 0x000008CF ),             /* '2' */
  EW_GLYPH( 0x0033, 0, -10, 6, 10, 7, 0x000009BF ),             /* '3' */
  EW_GLYPH( 0x0034, 0, -10, 6, 10, 7, 0x00000AAA ),             /* '4' */
  EW_GLYPH( 0x0035, 0, -10, 6, 10, 7, 0x00000B40 ),             /* '5' */
  EW_GLYPH( 0x0036, 0, -10, 6, 10, 7, 0x00000C25 ),             /* '6' */
  EW_GLYPH( 0x0037, 0, -10, 6, 10, 7, 0x00000D1D ),             /* '7' */
  EW_GLYPH( 0x0038, 0, -10, 6, 10, 7, 0x00000DDB ),             /* '8' */
  EW_GLYPH( 0x0039, 0, -10, 6, 10, 7, 0x00000EDD ),             /* '9' */
  EW_GLYPH( 0x003A, 1, -7, 2, 7, 4, 0x00000FCD ),               /* ':' */
  EW_GLYPH( 0x003B, 1, -7, 2, 9, 4, 0x00000FF3 ),               /* ';' */
  EW_GLYPH( 0x003C, 0, -8, 6, 7, 8, 0x0000102D ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -6, 7, 3, 8, 0x000010E3 ),               /* '=' */
  EW_GLYPH( 0x003E, 1, -8, 6, 7, 8, 0x0000114C ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -10, 7, 10, 8, 0x000011FC ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -10, 13, 13, 13, 0x000012DD ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -10, 9, 10, 9, 0x000015A5 ),             /* 'A' */
  EW_GLYPH( 0x0042, 1, -10, 7, 10, 9, 0x000016C6 ),             /* 'B' */
  EW_GLYPH( 0x0043, 1, -10, 8, 10, 9, 0x0000179F ),             /* 'C' */
  EW_GLYPH( 0x0044, 1, -10, 7, 10, 9, 0x0000189F ),             /* 'D' */
  EW_GLYPH( 0x0045, 1, -10, 6, 10, 8, 0x00001957 ),             /* 'E' */
  EW_GLYPH( 0x0046, 1, -10, 6, 10, 8, 0x000019EB ),             /* 'F' */
  EW_GLYPH( 0x0047, 1, -10, 8, 10, 10, 0x00001A6F ),            /* 'G' */
  EW_GLYPH( 0x0048, 1, -10, 7, 10, 9, 0x00001B89 ),             /* 'H' */
  EW_GLYPH( 0x0049, 1, -10, 2, 10, 4, 0x00001BF7 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -10, 6, 10, 7, 0x00001C13 ),             /* 'J' */
  EW_GLYPH( 0x004B, 1, -10, 8, 10, 9, 0x00001C8C ),             /* 'K' */
  EW_GLYPH( 0x004C, 1, -10, 6, 10, 8, 0x00001D78 ),             /* 'L' */
  EW_GLYPH( 0x004D, 1, -10, 9, 10, 11, 0x00001DCC ),            /* 'M' */
  EW_GLYPH( 0x004E, 1, -10, 7, 10, 9, 0x00001EBD ),             /* 'N' */
  EW_GLYPH( 0x004F, 1, -10, 8, 10, 10, 0x00001F5F ),            /* 'O' */
  EW_GLYPH( 0x0050, 1, -10, 7, 10, 9, 0x00002076 ),             /* 'P' */
  EW_GLYPH( 0x0051, 1, -10, 8, 11, 10, 0x0000212A ),            /* 'Q' */
  EW_GLYPH( 0x0052, 1, -10, 8, 10, 9, 0x0000226A ),             /* 'R' */
  EW_GLYPH( 0x0053, 1, -10, 7, 10, 9, 0x00002349 ),             /* 'S' */
  EW_GLYPH( 0x0054, 0, -10, 8, 10, 8, 0x0000246F ),             /* 'T' */
  EW_GLYPH( 0x0055, 1, -10, 7, 10, 9, 0x000024F7 ),             /* 'U' */
  EW_GLYPH( 0x0056, 0, -10, 9, 10, 9, 0x00002582 ),             /* 'V' */
  EW_GLYPH( 0x0057, 0, -10, 13, 10, 13, 0x0000269D ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -10, 9, 10, 9, 0x00002840 ),             /* 'X' */
  EW_GLYPH( 0x0059, -1, -10, 10, 10, 8, 0x0000296A ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -10, 7, 10, 7, 0x00002A57 ),             /* 'Z' */
  EW_GLYPH( 0x005B, 1, -10, 3, 13, 4, 0x00002B48 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -10, 4, 10, 4, 0x00002B83 ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -10, 3, 13, 4, 0x00002BFE ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -9, 6, 5, 8, 0x00002C39 ),               /* '^' */
  EW_GLYPH( 0x005F, 0, 2, 7, 1, 7, 0x00002CAF ),                /* '_' */
  EW_GLYPH( 0x0060, 0, -10, 3, 2, 4, 0x00002CD2 ),              /* '`' */
  EW_GLYPH( 0x0061, 1, -7, 6, 7, 8, 0x00002CED ),               /* 'a' */
  EW_GLYPH( 0x0062, 1, -10, 6, 10, 8, 0x00002D95 ),             /* 'b' */
  EW_GLYPH( 0x0063, 1, -7, 6, 7, 7, 0x00002E28 ),               /* 'c' */
  EW_GLYPH( 0x0064, 1, -10, 6, 10, 8, 0x00002ECC ),             /* 'd' */
  EW_GLYPH( 0x0065, 1, -7, 6, 7, 8, 0x00002F62 ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -10, 5, 10, 4, 0x00003019 ),             /* 'f' */
  EW_GLYPH( 0x0067, 1, -7, 6, 10, 8, 0x00003086 ),              /* 'g' */
  EW_GLYPH( 0x0068, 1, -10, 6, 10, 8, 0x00003155 ),             /* 'h' */
  EW_GLYPH( 0x0069, 1, -10, 2, 10, 4, 0x000031CB ),             /* 'i' */
  EW_GLYPH( 0x006A, -1, -10, 4, 13, 4, 0x000031F7 ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -10, 7, 10, 7, 0x0000325A ),             /* 'k' */
  EW_GLYPH( 0x006C, 1, -10, 2, 10, 4, 0x00003303 ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -7, 10, 7, 12, 0x0000331F ),             /* 'm' */
  EW_GLYPH( 0x006E, 1, -7, 6, 7, 8, 0x000033BA ),               /* 'n' */
  EW_GLYPH( 0x006F, 1, -7, 6, 7, 8, 0x00003419 ),               /* 'o' */
  EW_GLYPH( 0x0070, 1, -7, 6, 10, 8, 0x000034AC ),              /* 'p' */
  EW_GLYPH( 0x0071, 1, -7, 6, 10, 8, 0x0000355A ),              /* 'q' */
  EW_GLYPH( 0x0072, 1, -7, 4, 7, 5, 0x00003608 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -7, 6, 7, 6, 0x00003645 ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -9, 4, 9, 4, 0x0000371F ),               /* 't' */
  EW_GLYPH( 0x0075, 1, -7, 6, 7, 8, 0x00003776 ),               /* 'u' */
  EW_GLYPH( 0x0076, -1, -7, 9, 7, 7, 0x000037CA ),              /* 'v' */
  EW_GLYPH( 0x0077, 0, -7, 11, 7, 11, 0x000038A1 ),             /* 'w' */
  EW_GLYPH( 0x0078, 0, -7, 8, 7, 8, 0x000039CE ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -7, 7, 10, 7, 0x00003AA4 ),              /* 'y' */
  EW_GLYPH( 0x007A, 1, -7, 5, 7, 7, 0x00003B8D ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -10, 5, 13, 5, 0x00003C1C ),             /* '{' */
  EW_GLYPH( 0x007C, 1, -10, 1, 12, 3, 0x00003CCA ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -10, 5, 13, 5, 0x00003CDA ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -5, 7, 2, 8, 0x00003D88 ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 4, 0x00003DC6 ),
  EW_GLYPH( 0x00A1, 1, -7, 2, 10, 4, 0x00003DC6 ),
  EW_GLYPH( 0x00A2, 0, -10, 6, 13, 7, 0x00003E12 ),
  EW_GLYPH( 0x00A3, 0, -10, 7, 10, 7, 0x00003F26 ),
  EW_GLYPH( 0x00A4, -1, -8, 8, 8, 7, 0x00004022 ),
  EW_GLYPH( 0x00A5, 0, -10, 6, 10, 7, 0x000040F8 ),
  EW_GLYPH( 0x00A6, 1, -10, 1, 12, 3, 0x000041C2 ),
  EW_GLYPH( 0x00A7, 0, -10, 6, 13, 7, 0x000041DA ),
  EW_GLYPH( 0x00A8, 0, -10, 4, 1, 4, 0x00004307 ),
  EW_GLYPH( 0x00A9, 0, -10, 10, 10, 10, 0x00004313 ),
  EW_GLYPH( 0x00AA, 0, -10, 4, 5, 5, 0x0000448B ),
  EW_GLYPH( 0x00AB, 0, -6, 6, 6, 7, 0x000044E8 ),
  EW_GLYPH( 0x00AC, 0, -7, 7, 4, 8, 0x00004586 ),
  EW_GLYPH( 0x00AD, 1, -3, 3, 1, 4, 0x000045D2 ),
  EW_GLYPH( 0x00AE, 0, -10, 10, 10, 10, 0x000045E1 ),
  EW_GLYPH( 0x00AF, 0, -11, 7, 1, 7, 0x0000474E ),
  EW_GLYPH( 0x00B0, 0, -10, 4, 4, 5, 0x00004771 ),
  EW_GLYPH( 0x00B1, 0, -7, 6, 7, 7, 0x000047B7 ),
  EW_GLYPH( 0x00B2, 0, -10, 4, 5, 4, 0x00004829 ),
  EW_GLYPH( 0x00B3, 0, -10, 4, 5, 4, 0x00004890 ),
  EW_GLYPH( 0x00B4, 1, -10, 3, 2, 4, 0x000048FE ),
  EW_GLYPH( 0x00B5, 0, -7, 6, 10, 7, 0x00004919 ),
  EW_GLYPH( 0x00B6, 0, -10, 7, 12, 7, 0x00004989 ),
  EW_GLYPH( 0x00B7, 1, -6, 2, 2, 4, 0x00004A29 ),
  EW_GLYPH( 0x00B8, 0, 0, 3, 3, 4, 0x00004A35 ),
  EW_GLYPH( 0x00B9, 1, -10, 2, 5, 4, 0x00004A59 ),
  EW_GLYPH( 0x00BA, 1, -10, 4, 5, 5, 0x00004A76 ),
  EW_GLYPH( 0x00BB, 1, -6, 6, 6, 7, 0x00004ADC ),
  EW_GLYPH( 0x00BC, 0, -10, 10, 10, 11, 0x00004B7A ),
  EW_GLYPH( 0x00BD, 0, -10, 10, 10, 11, 0x00004C8A ),
  EW_GLYPH( 0x00BE, 0, -10, 11, 10, 11, 0x00004DBF ),
  EW_GLYPH( 0x00BF, 0, -7, 7, 10, 8, 0x00004F28 ),
  EW_GLYPH( 0x00C0, 0, -13, 9, 13, 9, 0x00004FF0 ),
  EW_GLYPH( 0x00C1, 0, -13, 9, 13, 9, 0x0000514A ),
  EW_GLYPH( 0x00C2, 0, -13, 9, 13, 9, 0x000052A4 ),
  EW_GLYPH( 0x00C3, 0, -13, 9, 13, 9, 0x00005406 ),
  EW_GLYPH( 0x00C4, 0, -12, 9, 12, 9, 0x00005578 ),
  EW_GLYPH( 0x00C5, 0, -13, 9, 13, 9, 0x000056BB ),
  EW_GLYPH( 0x00C6, 0, -10, 12, 10, 13, 0x0000581F ),
  EW_GLYPH( 0x00C7, 1, -10, 8, 13, 9, 0x00005974 ),
  EW_GLYPH( 0x00C8, 1, -13, 6, 13, 8, 0x00005AB5 ),
  EW_GLYPH( 0x00C9, 1, -13, 6, 13, 8, 0x00005B79 ),
  EW_GLYPH( 0x00CA, 1, -13, 6, 13, 8, 0x00005C3D ),
  EW_GLYPH( 0x00CB, 1, -12, 6, 12, 8, 0x00005D09 ),
  EW_GLYPH( 0x00CC, 0, -13, 3, 13, 4, 0x00005DB9 ),
  EW_GLYPH( 0x00CD, 1, -13, 3, 13, 4, 0x00005E06 ),
  EW_GLYPH( 0x00CE, 1, -13, 3, 13, 4, 0x00005E53 ),
  EW_GLYPH( 0x00CF, 0, -12, 4, 12, 4, 0x00005EA8 ),
  EW_GLYPH( 0x00D0, 0, -10, 8, 10, 9, 0x00005EF0 ),
  EW_GLYPH( 0x00D1, 1, -13, 7, 13, 9, 0x00005FC8 ),
  EW_GLYPH( 0x00D2, 1, -13, 8, 13, 10, 0x000060B5 ),
  EW_GLYPH( 0x00D3, 1, -13, 8, 13, 10, 0x00006202 ),
  EW_GLYPH( 0x00D4, 1, -13, 8, 13, 10, 0x0000634F ),
  EW_GLYPH( 0x00D5, 1, -13, 8, 13, 10, 0x000064A4 ),
  EW_GLYPH( 0x00D6, 1, -12, 8, 12, 10, 0x00006609 ),
  EW_GLYPH( 0x00D7, 0, -7, 7, 6, 8, 0x00006740 ),
  EW_GLYPH( 0x00D8, 0, -11, 10, 12, 10, 0x000067DF ),
  EW_GLYPH( 0x00D9, 1, -13, 7, 13, 9, 0x00006981 ),
  EW_GLYPH( 0x00DA, 1, -13, 7, 13, 9, 0x00006A3F ),
  EW_GLYPH( 0x00DB, 1, -13, 7, 13, 9, 0x00006AFD ),
  EW_GLYPH( 0x00DC, 1, -12, 7, 12, 9, 0x00006BC3 ),
  EW_GLYPH( 0x00DD, -1, -13, 10, 13, 8, 0x00006C6C ),
  EW_GLYPH( 0x00DE, 1, -10, 7, 10, 9, 0x00006D95 ),
  EW_GLYPH( 0x00DF, 1, -10, 6, 10, 8, 0x00006E46 ),
  EW_GLYPH( 0x00E0, 1, -10, 6, 10, 8, 0x00006F03 ),
  EW_GLYPH( 0x00E1, 1, -10, 6, 10, 8, 0x00006FDB ),
  EW_GLYPH( 0x00E2, 1, -10, 6, 10, 8, 0x000070B3 ),
  EW_GLYPH( 0x00E3, 1, -10, 6, 10, 8, 0x00007193 ),
  EW_GLYPH( 0x00E4, 1, -9, 6, 9, 8, 0x00007283 ),
  EW_GLYPH( 0x00E5, 1, -12, 6, 12, 8, 0x00007347 ),
  EW_GLYPH( 0x00E6, 1, -7, 10, 7, 12, 0x00007455 ),
  EW_GLYPH( 0x00E7, 1, -7, 6, 10, 7, 0x0000758F ),
  EW_GLYPH( 0x00E8, 1, -10, 6, 10, 8, 0x00007669 ),
  EW_GLYPH( 0x00E9, 1, -10, 6, 10, 8, 0x00007750 ),
  EW_GLYPH( 0x00EA, 1, -10, 6, 10, 8, 0x00007837 ),
  EW_GLYPH( 0x00EB, 1, -9, 6, 9, 8, 0x00007926 ),
  EW_GLYPH( 0x00EC, 0, -10, 3, 10, 4, 0x000079F9 ),
  EW_GLYPH( 0x00ED, 1, -10, 3, 10, 4, 0x00007A3D ),
  EW_GLYPH( 0x00EE, 1, -10, 3, 10, 4, 0x00007A81 ),
  EW_GLYPH( 0x00EF, 0, -9, 4, 9, 4, 0x00007ACD ),
  EW_GLYPH( 0x00F0, 1, -10, 6, 10, 8, 0x00007B09 ),
  EW_GLYPH( 0x00F1, 1, -10, 6, 10, 8, 0x00007BE1 ),
  EW_GLYPH( 0x00F2, 1, -10, 6, 10, 8, 0x00007C88 ),
  EW_GLYPH( 0x00F3, 1, -10, 6, 10, 8, 0x00007D4B ),
  EW_GLYPH( 0x00F4, 1, -10, 6, 10, 8, 0x00007E0E ),
  EW_GLYPH( 0x00F5, 1, -10, 6, 10, 8, 0x00007ED9 ),
  EW_GLYPH( 0x00F6, 1, -9, 6, 9, 8, 0x00007FB4 ),
  EW_GLYPH( 0x00F7, 0, -8, 6, 7, 7, 0x00008063 ),
  EW_GLYPH( 0x00F8, 1, -8, 6, 9, 8, 0x000080D5 ),
  EW_GLYPH( 0x00F9, 1, -10, 6, 10, 8, 0x000081B1 ),
  EW_GLYPH( 0x00FA, 1, -10, 6, 10, 8, 0x00008235 ),
  EW_GLYPH( 0x00FB, 1, -10, 6, 10, 8, 0x000082B9 ),
  EW_GLYPH( 0x00FC, 1, -9, 6, 9, 8, 0x00008345 ),
  EW_GLYPH( 0x00FD, 0, -10, 7, 13, 7, 0x000083B5 ),
  EW_GLYPH( 0x00FE, 1, -10, 6, 13, 8, 0x000084D1 ),
  EW_GLYPH( 0x00FF, 0, -9, 7, 12, 7, 0x00008587 ),

  EW_FONT_PIXEL( ApplicationFontArial17, 0x0000868E )           /* ratio 76.87 % */
    0xEF7BDEF7, 0x17BDEF75, 0x00000000, 0xF7BDEE00, 0x318897BA, 0xEC88CCE6, 0xDD7B97BE,
    0x79E2211B, 0x8BF88F3C, 0xA67A67BF, 0x7B718C31, 0xCF375EDD, 0xC42213CD, 0x76F27BC9,
    0x1FFBEEDF, 0xAC7AC3FE, 0xF7F19707, 0xB77EDD1F, 0x0FC7731E, 0xA7B2FCB3, 0x83D6BD7A,
    0xF3D47FF6, 0xDBFAEEB6, 0x5BC59D63, 0x2A89FDBE, 0x647D6999, 0xEDF26FA6, 0x9D60CC6F,
    0x16759DF5, 0x8FEDF551, 0xBE4CC9F9, 0x0AD53329, 0x7D8CFEDF, 0xFF19C0F7, 0x68184071,
    0xA2222F7F, 0xC46FCF17, 0x53B4562F, 0x8C39DFE3, 0x11947236, 0xFE6F8C61, 0xEFCFD3F7,
    0x51E788DE, 0xFF18D75B, 0x4532599F, 0xF928A410, 0xEBF8C733, 0x7FDAA5DA, 0x2A97E98C,
    0x27844124, 0x1FF7E98D, 0xEF871AA3, 0x467EFECB, 0xB3B97EFE, 0x5EE017B9, 0x7B97BDEE,
    0xF9D97B81, 0xBDEF7B9E, 0xFE2A9B90, 0x14F0E63F, 0x318F537B, 0xC2A9FDF9, 0x67ABCE7B,
    0x96B2ECF7, 0x2032114A, 0x11488080, 0xFAA5ACB2, 0xEFCD9EE9, 0x17FCAFE6, 0x002F9FCF,
    0x3BF18000, 0xFFB5D3E7, 0x39BBFBCF, 0xD7030C2C, 0xD33C6F8F, 0x3B27F27C, 0x6FC5F84E,
    0xDEF77CB0, 0x8BE73BF1, 0x9FFFF9F7, 0x28633BEF, 0xF9DD932C, 0x30FCDFB2, 0xE33BF015,
    0xFFF9FB31, 0xCC5CE356, 0x053C1F80, 0x035A87EF, 0x977D40F7, 0x02E5EF7B, 0xF7BDEF71,
    0xB77BDCF1, 0x47EFA18B, 0x7F79F7DE, 0x08169CFF, 0xA633BF90, 0xAF7F9F7A, 0x7BBFF3D7,
    0xB3FDF7D4, 0xB7E7998F, 0x77E39022, 0x7BF790BF, 0x951EA17E, 0xB59667E0, 0xF79EFE9E,
    0xBDEF7BDE, 0x744CFEF7, 0xE0CC7334, 0x246391F3, 0x06FE1F8F, 0xC8290796, 0xDF2F9CEF,
    0xDE7FFFE7, 0xC69A8632, 0x3BDCDF30, 0xE2FBF3BA, 0x04C79E9D, 0xDEB1E796, 0xD7CDFBF9,
    0x9F7B4E77, 0x6A5AD7AF, 0x4F2C81FA, 0xDDF3DF89, 0x8DFDDF14, 0x9DFAC444, 0xFFE74E9C,
    0xEE5EEAFB, 0x97B97B85, 0x765EE17B, 0xC7EA07BE, 0xFF5ABFDC, 0x6FDBFF57, 0xDFBF6CAF,
    0xD6FFF58C, 0xEFF6797B, 0x7BDEF7B9, 0xDEF7BDEF, 0xF7BDEF7B, 0xA82BFBDE, 0xDBFC9EDF,
    0xF6B95FFB, 0xEB6F9ED6, 0xFFBF37FF, 0x10FDBF9A, 0xE5FFB9EF, 0xD7F77F3F, 0x9A63EFBD,
    0xDF8C48F0, 0xED7FD438, 0xDC2F17E4, 0x0005EE0B, 0xFF7BEEF9, 0x7BDF426F, 0x4EF7BDEE,
    0x9267FC7A, 0x3E46FF73, 0x5D9DFCBF, 0x7F7E8EF7, 0xF18ADC5F, 0x9EAA7CC9, 0x61FF79CE,
    0x83697321, 0x0C213C6D, 0x9F7D1E3F, 0xC8B7FE51, 0xFDFFD477, 0x7C45F3CA, 0xFCD736FF,
    0xF9CEAFDD, 0xBFB9F3D5, 0x7D4493DF, 0xDCFB93E7, 0xF73EEF7B, 0x501EE707, 0x1EFE0A21,
    0x8BF1587F, 0x2A2788C2, 0xF5C73F07, 0x1E2A51E3, 0x227B9D23, 0x6F7BE947, 0x8F079FAB,
    0x9EF7BDDF, 0x57EF725F, 0xCA07942F, 0x9ABFBDCB, 0x07D6FBDC, 0x8F010153, 0x6ABFBDC5,
    0x6FFB9EF1, 0xBDBECFFE, 0xF4DE3D7E, 0x30295FDC, 0x02180004, 0xBE6F0294, 0xF62FDE69,
    0xBEB7EFB3, 0x85DDEF7B, 0xF097E77B, 0x02860FC6, 0xE1210012, 0xE3E27051, 0x7B8DF9DE,
    0x7B97BDEF, 0xEE0005EF, 0xEF7B97BD, 0x7B800005, 0xDEF7BDEF, 0x5EF7B97B, 0xF7B80000,
    0x17BDEE5E, 0x9EF10000, 0xFE237FFB, 0xEFCF6FB5, 0xFB9E9D1D, 0x0086052B, 0x4DEF7B81,
    0x167E5EE1, 0x2697E358, 0xEFEFB5FE, 0xBDC5EEF9, 0x7B800000, 0x017BDC2F, 0x7B800000,
    0x7B800001, 0x00000001, 0xA9645CE0, 0xFDF57EA1, 0xF12F7BE7, 0xF8DF093F, 0xE16F5D12,
    0x4FC16359, 0x2F198C06, 0x23098E9C, 0xF3F04C56, 0xF751AC81, 0x00000002, 0xF7000000,
    0x0DEF7BDE, 0xE3C5EF71, 0x84EC3901, 0xFF058DB5, 0x1187F3C7, 0x9F940633, 0xF0072302,
    0xE2EB8078, 0x1A5EE2DE, 0x17880F18, 0x8AC263BC, 0xAC13781F, 0x05605E00, 0x4BE73BF9,
    0xF3BDD771, 0xC46F9BC6, 0x4A296F9B, 0x0018410D, 0x29461043, 0x19D9BD4A, 0xD771BE6F,
    0xBDC6F3BE, 0xB82F9EF7, 0xB07E7DF7, 0xE2960014, 0x71F9F7DE, 0x0002F9EF, 0x9CEFC800,
    0xF79EC52F, 0xBC6F1BCE, 0xA5BE6F11, 0x21043528, 0x64043101, 0xBD63DF29, 0x39FFE3D9,
    0xADFFD771, 0x7E73BF24, 0xEF7BDCE7, 0xFDEE25F9, 0x002941AA, 0xFBDC28F0, 0xC7770FD5,
    0x68EF180A, 0xF82672B0, 0x9EE7BDA2, 0xDDF9BF2F, 0x51E5B9EF, 0x07FC3FF7, 0xE1BFD8DA,
    0x69ED43D9, 0x43F0DFEC, 0xF2DF636D, 0xF77CF3A8, 0xEF7BBF37, 0x7BDEF7BD, 0x005EF72F,
    0x00000000, 0x7B800000, 0x00002F71, 0x03000000, 0x3D32CFE4, 0x57B77D6B, 0xBBC89BEF,
    0x7E3C1E7F, 0x46A7E365, 0x43918856, 0xEFE29659, 0xC54FEFEF, 0x56144F13, 0x7B60A2FC,
    0xE282785C, 0x0F73837F, 0x23CBFF71, 0xDAC7A443, 0xB6CA12B6, 0x6D36C31F, 0x51E233C3,
    0x18F2C6F1, 0x22789E32, 0x794189F3, 0xF878E56D, 0x5CAD861B, 0x2283CA16, 0x488620C3,
    0xBBF0FEE3, 0x669ACC63, 0xB3A3A1CD, 0x1D8E89A3, 0x3515981D, 0xA8ACC001, 0xD1D8E889,
    0x47674741, 0x59A6B31B, 0x83F38C73, 0x3598C67D, 0x9D0E6399, 0xE8D9D11D, 0xA7868EE8,
    0x3407ACE6, 0x00060C0D, 0x7B800000, 0xDEF7BDEF, 0x84CFEF7B, 0x1D9D1A37, 0x3A26398C,
    0x41CD662E, 0xF17E3474, 0xEF7D1E06, 0x2E5EF7BD, 0xC0000000, 0xBF1549DD, 0x1EA2633F,
    0xCC29E6F6, 0xD547FFC1, 0x0002F7BD, 0xD85C0000, 0x27233C7F, 0x1A9F18EF, 0xEBA8DFBF,
    0xEF7BDC79, 0x1DF6F7BD, 0xE77F3ABD, 0xFCF73AEE, 0x1F57BBC7, 0xDA5E7739, 0xE4C61837,
    0x5EE5FF8D, 0xFFE60000, 0x1FAE9C17, 0x201028FD, 0x7FB147E9, 0x5F9CFAD5, 0xEBFDFAF6,
    0x77719E3C, 0x678F0482, 0xF7EBDDDC, 0x02F703AF, 0x0FFEFC40, 0xE53FEABF, 0x28240269,
    0x97EBA2CF, 0xEF69CEF8, 0x2EADFBF3, 0xF749E3CF, 0xBDEF70CA, 0xBF771CCB, 0x3C75FFB3,
    0x79D3FBFF, 0x5CB8527E, 0x00000B97, 0xF3FEFC40, 0x943EAEDE, 0x049049A7, 0xFABA69E5,
    0x14FFBF12, 0xFBEA1A67, 0x5EFABFEE, 0xF39E0000, 0x5F3BFE2F, 0x000494DE, 0x7B97B800,
    0xEE0005EF, 0x5EE5EE05, 0x10000000, 0xDF64EFC6, 0x3C00000B, 0xAB7E31B7, 0xC721B271,
    0x3C2E2F80, 0xECE84C73, 0x800017B8, 0xD67FEB7B, 0xDC62FF3A, 0x565F3B68, 0x000252B2,
    0xDC000000, 0x317FFF5B, 0x21ACBE4E, 0xF4000001, 0xEEAD6D39, 0xFA733EB5, 0x1F213212,
    0x757AFA73, 0x73EF75AF, 0x57FFC17E, 0x08163F4D, 0x147DE482, 0xCF355FFF, 0xC40005F9,
    0x76F73CEF, 0x4F2CFEFD, 0xCA092013, 0xFBF5D2F3, 0x00F3BF13, 0x9B7EF700, 0x0002A7F3,
    0xF9EEFC60, 0xAFF3A9E5, 0xBB9FFC33, 0xF3DE317F, 0xE337E73C, 0xE5ABBBF7, 0x5D6FFCFB,
    0x972EC7E3, 0x2000B97B, 0xBDDF8BF0, 0x00000BDC, 0xCDE2C690, 0xF0FDD453, 0xA4F1AADD,
    0x7D79467C, 0xCE4F1F3E, 0xC5F13198, 0xA8CC2F17, 0x0ACB1098, 0x3EEB09F6, 0x2C5FECE2,
    0xF7E2B6DB, 0xF9627BF8, 0x89EB327B, 0xF4CA9E37, 0x9F8AC5F8, 0x54789F87, 0xF6D231F8,
    0xCD9E4397, 0xCC73993E, 0xECEA6635, 0xC45F1B37, 0x3353DF03, 0xDA3B7CE8, 0xCD463598,
    0xBBCA6FB1, 0xF3F5294B, 0xF11BF7F7, 0x454313E4, 0x2E3D7147, 0x0A862285, 0x3FCE1D32,
    0x7BDEE1FB, 0x933FBDCF, 0xDF2B5E37, 0x769737C8, 0x2BDF6278, 0xB53AE77F, 0x820121AF,
    0xF365F932, 0x903CA6CB, 0xD4E0C300, 0xDC005EFF, 0xD7774BF3, 0x84800D21, 0xA3F9D147,
    0x0454C7F3, 0x7FDC30C0, 0x379CEB5D, 0xFEE3B3B5, 0xDBDCBDCF, 0xE739911D, 0xFE201118,
    0x4BFF0550, 0x5ECFF59F, 0xA8FBCF9D, 0x91197E79, 0x47873C64, 0x8CF7678F, 0x9D771CEF,
    0xEA1BBA5F, 0x6FCE7D01, 0x3FFBF5E8, 0xF9C67A6D, 0xDC286009, 0x7BAF77E1, 0x89B4BDC5,
    0xFD5D9977, 0xEF8DFBAD, 0xEEBD686A, 0x7B7577BD, 0xBF3479CE, 0xFC001F88, 0xE7B47E22,
    0xBAF7479C, 0xFBD5DEF7, 0x53FDDC46, 0x56F657E5, 0xDC72AB23, 0x2F7BCCCC, 0xBDCBDEF7,
    0x002F72F7, 0x182EB85C, 0x9387BBFF, 0xEE0D71FF, 0x556938F6, 0x9BAF1B8E, 0x678EB1F9,
    0x15D92DFA, 0x8ABF1E5F, 0x7D94FC99, 0x3D8EE187, 0x7EA5CBAE, 0xDD0AFCE7, 0xADDB9CF7,
    0xB1FFAF6A, 0xFEEB6EAB, 0x794FBEB7, 0x03D5B19E, 0x679E53C0, 0xD6DCF56C, 0xAB7D6FFD,
    0xBB1FFAF6, 0xE73DF74A, 0xFA73AB76, 0xBBF5EFFD, 0xEE6D3EAF, 0x1DAB6A1B, 0xBF5BC56F,
    0xC7F2FDFC, 0xFF72FD62, 0xF15BC772, 0xDEF7BDD6, 0xF7BDEF7B, 0x7BDC0002, 0xBF39DFA9,
    0xE73DF742, 0xBFDAAB76, 0xDBAAEC7B, 0xFBE9FDDC, 0x81EA3C14, 0x8A787E7B, 0x6E7A8F13,
    0xB7D1EF13, 0xDDD4FF6A, 0x39EFBA55, 0xF7BDDBB7, 0xFFEB7BDE, 0x17DEF7AF, 0xEE5F7BDE,
    0x7B97B805, 0x805EE5EF, 0xDEF7B97B, 0xEB39E77B, 0xE3DDF7DB, 0xF3BDF9D7, 0xFFCFBED4,
    0xFF7673CC, 0xF1ED7FC6, 0xF77FEF5F, 0xEFABDDB8, 0x00005EE5, 0xDE079E00, 0x17BEF617,
    0xEF77F200, 0xAE2DF7BD, 0xDF01405B, 0x01DF1013, 0x00000000, 0xFEC5EE00, 0xEBBBBA9C,
    0xFD40F89C, 0xF39EF5FF, 0x639918E6, 0xBBCE7BE4, 0x46F52ECB, 0xB7F3B1BD, 0xFC58B7F3,
    0x5FCBF7F2, 0xD46F51BD, 0x8138B581, 0xE83E2DF8, 0x01F23017, 0xC9EB8374, 0x9B781C61,
    0xF0BF581B, 0x62DFC8BE, 0xDC6EAE7E, 0xF181D6EB, 0x97DC04E3, 0x812FD60F, 0x37402DF8,
    0xE7A8C6B8, 0xDEDB859C, 0x2FD65F7D, 0xF16BF1ED, 0x53DBE45B, 0xDFFACE37, 0xE41E7FE7,
    0x43FD9CE6, 0x5FF1BF37, 0xF8F6288C, 0xFBC5FA2F, 0x8919EDDF, 0x7DE99CE7, 0x0BFA038D,
    0x7A6B2037, 0xFCCDD05F, 0xF714465C, 0x0017B8BA, 0xC2F705EE, 0xEBDC9B9B, 0x0DF8CE0C,
    0xE5A607A4, 0xBBFBBBB9, 0x3BE83ABF, 0xE80D5E80, 0x01EE701F, 0xEFE0A215, 0xBF1587F1,
    0xA2788C28, 0x5C73F072, 0xE2A51E3F, 0x27B9D231, 0xF7BE9472, 0xF079FAB6, 0x0DB8C1F8,
    0xD7E06AF4, 0x5407B9C0, 0xC7BF8288, 0xA2FC561F, 0xCA89E230, 0xFD71CFC1, 0xC78A9478,
    0xC89EE748, 0xDBDEFA51, 0xE3C1E7EA, 0xF4093C87, 0xFADF02FB, 0x501EE701, 0x1EFE0A21,
    0x8BF1587F, 0x2A2788C2, 0xF5C73F07, 0x1E2A51E3, 0x227B9D23, 0x6F7BE947, 0x8F079FAB,
    0x1E5FBE1F, 0x816FBCF0, 0x9C0FBF9B, 0x2885407B, 0x61FC7BF8, 0x230A2FC5, 0xFC1CA89E,
    0x478FD71C, 0x748C78A9, 0xA51C89EE, 0x7EADBDEF, 0xB87E3C1E, 0xE0B9705C, 0x442A03DC,
    0x0FE3DFC1, 0x18517E2B, 0xE0E544F1, 0x3C7EB8E7, 0xA463C54A, 0x28E44F73, 0xF56DEF7D,
    0x43F1E0F3, 0xDE05FFFD, 0x60005F7B, 0x150DFFFC, 0xFE3DFC04, 0x8517E2B0, 0x0E544F11,
    0xC7EB8E7E, 0x463C54A3, 0x8E44F73A, 0x56DEF7D2, 0x3F1E0F3F, 0xBDEF7B8C, 0xBCFC5EF7,
    0x662F7BDC, 0x0B19804C, 0x7B87DFC0, 0x0C6A35EF, 0x9FAF7BDC, 0xDEF4C00F, 0xF798CC0B,
    0x03EFE05E, 0xDE2BDEF7, 0xFFCDFF73, 0xAFD7B7D9, 0xFB9E9BC7, 0x0086052B, 0x52804300,
    0xCD37CDE0, 0xF67EC5FB, 0xDE27D6FD, 0x29C3767C, 0xDF437770, 0xFD0D5E81, 0xEF7BDEE3,
    0x017BDEE5, 0xE5EF7B80, 0x00017BDE, 0x317BDEE0, 0xE357A36E, 0xF7BDEED7, 0x17BDEE5E,
    0x5EF7B800, 0x0017BDEE, 0x97BDEE00, 0x5F7E893C, 0xDEE7EB7C, 0xDEE5EF7B, 0x7B80017B,
    0x7BDEE5EF, 0xDEE00001, 0x972E5D7B, 0xEF7BDEEB, 0x017BDEE5, 0xE5EF7B80, 0x00017BDE,
    0xFB7BDEE0, 0x7FAD5E8E, 0x000005EE, 0xABDDB8C0, 0x005EED7F, 0x93C80000, 0xFADFBEFD,
    0x00000BDD, 0xB97B9700, 0x000005EE, 0xBDEE0000, 0x3BDC1777, 0xFC6F04BF, 0x7B9750C0,
    0x00BDCBC9, 0x7C0A1824, 0xCFBDC3F1, 0x3CBF7C97, 0x70B7DE78, 0xB7B9F7F3, 0xC60697B8,
    0xEF05E203, 0x07E2B098, 0x802B04DE, 0xBE815817, 0xA06AF403, 0x73BF907F, 0xDD7714BE,
    0xF9BC6F3B, 0x96F9BC46, 0x8410D4A2, 0x61043001, 0x9BD4A294, 0x1BE6F19D, 0x6F3BED77,
    0xBD06DC60, 0xF21AFC1A, 0xE297CE77, 0x8DE77BAE, 0x3788DF37, 0x1A9452DF, 0x86003082,
    0x94528C20, 0xDE33B37A, 0x7DAEE37C, 0x49E40DE7, 0xBE0BEFD0, 0xCEFE43F5, 0x75DC52F9,
    0xE6F1BCEF, 0x5BE6F11B, 0x1043528A, 0x8410C006, 0x6F528A51, 0x6F9BC676, 0xBCEFB5DC,
    0x03CBF7C1, 0xDC16FBCF, 0xDFC87DFC, 0xBB8A5F39, 0xDE379DEE, 0x7CDE237C, 0x086A514B,
    0x821800C2, 0xEA514A30, 0xF378CECD, 0x9DF6BB8D, 0xB85CB837, 0x9CEFE45C, 0xF75DC52F,
    0xBE6F1BCE, 0xA5BE6F11, 0x61043528, 0x18410C00, 0x66F528A5, 0xC6F9BC67, 0x1BCEFB5D,
    0xC5F885F1, 0xCFFCFF58, 0x71FE3791, 0xCFD79013, 0x06EB714D, 0x9DFC8180, 0xC4BB3EF3,
    0xEF8CFB5D, 0x9A766F29, 0x32F8F292, 0xF3D6218B, 0xEEA8818D, 0x9EF8C40A, 0xFCCC9215,
    0xC9658794, 0x5AD557CE, 0x6A1BAF77, 0x4BE7BEF7, 0x57A03BE8, 0x2F71FE83, 0x000005EE,
    0x80600000, 0x67A659FC, 0x6AF6EFAD, 0xD5E86DC6, 0x8BDC6BF0, 0x0000017B, 0x20180000,
    0x59E9967F, 0x9ABDBBEB, 0xBEFD093C, 0xF71FADF0, 0x00005EE2, 0x06000000, 0x7A659FC8,
    0xAF6EFAD6, 0xB97172E6, 0x00BDC5EE, 0x00000000, 0xCB3F900C, 0xDDF5ACF4, 0x36E30D5E,
    0x7E0357A0, 0x60FCE30D, 0x4D66319F, 0x674398E6, 0x3A367447, 0xA9E1A3BA, 0x4D01EB39,
    0x00018303, 0x5EE00000, 0xF3DEE000, 0xFAEDEE0B, 0x580054C1, 0xE7DF7B8A, 0x0BE7BDC7,
    0xBFEEFE40, 0xD7CFF5BC, 0xF1A3C203, 0xB0FBF857, 0x8B1C5EB2, 0xF2FC0C7A, 0x57A077D5,
    0xDFC8FF43, 0x3DCEBBB9, 0xD5EEF1FF, 0x979DCE47, 0x31860DF6, 0x617FE379, 0xC6AF46DC,
    0xB9DFC9AF, 0xFF3DCEBB, 0x47D5EEF1, 0xF6979DCE, 0x7931860D, 0x4F217FE3, 0xDF17DFA2,
    0xB9DFC9FA, 0xFF3DCEBB, 0x47D5EEF1, 0xF6979DCE, 0x7931860D, 0xFDF17FE3, 0x6FBCF0F2,
    0xC9F7F371, 0xCEBBB9DF, 0xEEF1FF3D, 0x9DCE47D5, 0x860DF697, 0x7FE37931, 0xAE5CB971,
    0xEBBB9DFC, 0xEF1FF3DC, 0xDCE47D5E, 0x60DF6979, 0xFE379318, 0x17FFF517, 0xC02FBDEF,
    0xFD4BEF7B, 0xE77F25FF, 0xFCF73AEE, 0x1F57BBC7, 0xDA5E7739, 0xE4C61837, 0x7F25FF8D,
    0xCE75EEE7, 0x3FE73DEB, 0xFD9BF7FA, 0x8F3C3E8B, 0xE5C6FE67, 0x837ED95E, 0xC61DEF7B,
    0xBF771CC3, 0xECEF3FF9, 0xCE7D1D7F, 0xFEFD7B2F, 0xB8CF1E75, 0xC782413B, 0xF5EEEE33,
    0x59D1D7FB, 0xEE14E4BF, 0xE81DF46E, 0x7C3FD0D5, 0xF9F7B4E7, 0xE79756FD, 0x657BA4F1,
    0x65DEF7B8, 0xD9DFBB8E, 0xDB8C3AFF, 0x35F8D5E8, 0xFBDA73BE, 0xCBAB7EFC, 0xBDD278F3,
    0xEF7BDC32, 0xEFDDC732, 0x791D7FEC, 0xF8BEFD12, 0x39DF0FD6, 0xBF7E7DED, 0x3C79E5D5,
    0xEE195EE9, 0xE39977BD, 0xBFF677EE, 0x72E5CB8E, 0xEF69CEF9, 0x2EADFBF3, 0xF749E3CF,
    0xBDEF70CA, 0xBF771CCB, 0xFA75FFB3, 0x7FAD5E8E, 0x600005EE, 0xBFD5EEDC, 0x00002F76,
    0xEFBF64F2, 0x02F77EB7, 0x2F72E000, 0x0000BDD7, 0x9B7EC400, 0xF863F9A8, 0xEDCDF09F,
    0xEB3BB35D, 0x884CA733, 0xD399F184, 0xB5EEAD6F, 0x3C3CBF7C, 0xFCDC5BEF, 0xFFADEE7D,
    0x5F2718BF, 0x000090D6, 0xE81DF400, 0xFA3FD0D5, 0xF756B69C, 0x7D399F5A, 0x8F909909,
    0xBABD7D39, 0x46DC62D7, 0xD1AFC6AF, 0xBAB5B4E7, 0xE9CCFAD7, 0x7C84C84B, 0xD5EBE9CC,
    0x127916BD, 0xD6F8BEFD, 0xADA73E8F, 0x67D6BDD5, 0x26425F4E, 0x5F4E63E4, 0x7CB5EEAF,
    0xEF3C3CBF, 0x7DFCDC5B, 0xAD6D39F4, 0x733EB5EE, 0x213212FA, 0x7AFA731F, 0x72E5AF75,
    0x9CFA5CB9, 0x5AF756B6, 0x097D399F, 0x398F9099, 0xD7BABD7D, 0xEE005EE2, 0xEF7BDEE5,
    0x7BDEF7BD, 0x860017B9, 0x7FF3DDF8, 0x598ABEBA, 0xD19D13E6, 0x64754AA5, 0xE9AD33C7,
    0x7D9FAAF9, 0x1DF52FEF, 0x3FD0D5E8, 0x005EE5EE, 0x16348000, 0x71829E6F, 0xBF1ABD1B,
    0x05EE5EE6, 0x63480000, 0xC829E6F1, 0xC5F7E893, 0xE5EE7EB7, 0x8000005E, 0x9E6F1634,
    0xB972E5C2, 0x005EE5EE, 0x16348000, 0xE3029E6F, 0xF86AF436, 0xBCA6FB35, 0x3F5294BB,
    0x11BF7F7F, 0x54313E4F, 0xE3D71474, 0xA8622852, 0xFCE1D320, 0x05EE1FB3, 0x5F9D6000,
    0x9E6ABF90, 0x920102C7, 0x57E228F9, 0x00BF3ACD, 0x97172E00, 0x7794DF6B, 0xE7EA5297,
    0xE237EFEF, 0x8A8627C9, 0x5C7AE28E, 0x150C450A, 0x7F9C3A64, 0x000003F6
EW_END_OF_FONT_RES( ApplicationFontArial17 )

/* Table with links to derived variants of the font resource : 'Application::FontArial17' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontArial17 )

/* Initializer for the class 'Application::TextEditor' */
void ApplicationTextEditor__Init( ApplicationTextEditor _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesTextEditor__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  EffectsBoolEffect__Init( &_this->blinkEffect, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CursorKeyHandler, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->BackspaceKeyHandler, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->DeleteKeyHandler, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->NewlineKeyHandler, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->CharacterKeyHandler, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Caret, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationTextEditor );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const006D );
  _this->blinkEffect.Value2 = 0;
  _this->blinkEffect.Value1 = 1;
  EffectsBoolEffect_OnSetCycleDuration( &_this->blinkEffect, 500 );
  EffectsBoolEffect_OnSetInterCycleDelay( &_this->blinkEffect, 500 );
  _this->CursorKeyHandler.Filter = CoreKeyCodeCursorKeys;
  _this->BackspaceKeyHandler.Filter = CoreKeyCodeBackspace;
  _this->DeleteKeyHandler.Filter = CoreKeyCodeDelete;
  _this->NewlineKeyHandler.Filter = CoreKeyCodeEnter;
  _this->NewlineKeyHandler.Enabled = 0;
  _this->CharacterKeyHandler.Filter = CoreKeyCodeCharacterKeys;
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const006E );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.050000f );
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const006F );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0070 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0071 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0057 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->SimpleTouchHandler, 3 );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Text, _Const0072 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0073 ));
  ViewsText_OnSetColor( &_this->Text, _Const0059 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, _Const0074 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, _Const0075 );
  ViewsLine_OnSetWidth2( &_this->Caret, 2 );
  ViewsLine_OnSetWidth1( &_this->Caret, 2 );
  ViewsLine_OnSetColor( &_this->Caret, _Const0061 );
  ViewsLine_OnSetVisible( &_this->Caret, 0 );
  _this->WrapText = 1;
  EwRetainString( &_this->String, EwLoadString( &_Const0076 ));
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caret ), 0 );
  _this->blinkEffect.Outlet = EwNewRef( &_this->Caret, ViewsLine_OnGetVisible, ViewsLine_OnSetVisible 
  );
  _this->CursorKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onCursorKey 
  );
  _this->CursorKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onCursorKey 
  );
  _this->BackspaceKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onBackspaceKey 
  );
  _this->BackspaceKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onBackspaceKey 
  );
  _this->DeleteKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onDeleteKey 
  );
  _this->DeleteKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onDeleteKey 
  );
  _this->NewlineKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onNewlineKey 
  );
  _this->NewlineKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onNewlineKey 
  );
  _this->CharacterKeyHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onCharacterKey 
  );
  _this->CharacterKeyHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onCharacterKey 
  );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ApplicationTextEditor_onDragTouch 
  );
  _this->SimpleTouchHandler.OnHold = EwNewSlot( _this, ApplicationTextEditor_onHoldTouch 
  );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ApplicationTextEditor_onReleaseTouch 
  );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationTextEditor_onPressTouch 
  );
  ViewsText_OnSetOnUpdate( &_this->Text, EwNewSlot( _this, ApplicationTextEditor_updateCaret 
  ));
  ViewsText_OnSetSlideHandler( &_this->Text, &_this->SlideTouchHandler );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontVerdana24, ResourcesFont 
  ));
  _this->Font = EwLoadResource( &ResourcesFontVerdana24, ResourcesFont );
}

/* Re-Initializer for the class 'Application::TextEditor' */
void ApplicationTextEditor__ReInit( ApplicationTextEditor _this )
{
  /* At first re-initialize the super class ... */
  TemplatesTextEditor__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  EffectsBoolEffect__ReInit( &_this->blinkEffect );
  CoreKeyPressHandler__ReInit( &_this->CursorKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__ReInit( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsText__ReInit( &_this->Text );
  ViewsLine__ReInit( &_this->Caret );
}

/* Finalizer method for the class 'Application::TextEditor' */
void ApplicationTextEditor__Done( ApplicationTextEditor _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationTextEditor );

  /* Finalize all embedded objects */
  EffectsBoolEffect__Done( &_this->blinkEffect );
  CoreKeyPressHandler__Done( &_this->CursorKeyHandler );
  CoreKeyPressHandler__Done( &_this->BackspaceKeyHandler );
  CoreKeyPressHandler__Done( &_this->DeleteKeyHandler );
  CoreKeyPressHandler__Done( &_this->NewlineKeyHandler );
  CoreKeyPressHandler__Done( &_this->CharacterKeyHandler );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsText__Done( &_this->Text );
  ViewsLine__Done( &_this->Caret );

  /* Release all used strings */
  EwReleaseString( &_this->String );

  /* Don't forget to deinitialize the super class ... */
  TemplatesTextEditor__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::TextEditor' */
void ApplicationTextEditor__Mark( ApplicationTextEditor _this )
{
  EwMarkObject( _this->magnifyingBack );
  EwMarkObject( _this->magnifyingView );
  EwMarkObject( &_this->blinkEffect );
  EwMarkObject( &_this->CursorKeyHandler );
  EwMarkObject( &_this->BackspaceKeyHandler );
  EwMarkObject( &_this->DeleteKeyHandler );
  EwMarkObject( &_this->NewlineKeyHandler );
  EwMarkObject( &_this->CharacterKeyHandler );
  EwMarkObject( &_this->SlideTouchHandler );
  EwMarkObject( &_this->SimpleTouchHandler );
  EwMarkObject( &_this->Text );
  EwMarkObject( &_this->Caret );
  EwMarkSlot( _this->OnChange );
  EwMarkObject( _this->Font );

  /* Give the super class a chance to mark its objects and references */
  TemplatesTextEditor__Mark( &_this->_Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationTextEditor_UpdateViewState( ApplicationTextEditor _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );

  if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  else
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    ViewsLine_OnSetVisible( &_this->Caret, 0 );
  }
}

/* This slot method is called after the caret has been adjusted. Its job is to adjust 
   too the position of the magnifying glass view where the augmented text content 
   around the caret is shown. */
void ApplicationTextEditor_updateMagnifyingView( ApplicationTextEditor _this, XObject 
  sender )
{
  XRect srcArea;
  XRect extent;
  XRect bounds;
  XPoint caret;
  XInt32 srcX;
  XInt32 dstX;
  XPoint ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView == 0 )
    return;

  srcArea = _this->magnifyingView->Super1.SourceArea;
  extent = CoreView__GetExtent( _this->magnifyingView );
  bounds = _this->Super3.Bounds;
  caret = _this->Caret.Super1.Point1;
  srcX = caret.X - ( EwGetRectW( srcArea ) / 2 );

  if ( srcX < 0 )
    srcX = 0;

  if (( srcX + EwGetRectW( srcArea )) > EwGetRectW( bounds ))
    srcX = EwGetRectW( bounds ) - EwGetRectW( srcArea );

  ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwSetRectOrigin( 
  _this->magnifyingView->Super1.SourceArea, EwNewPoint( srcX, caret.Y )));
  dstX = ( bounds.Point1.X + caret.X ) - (( caret.X - srcX ) * 2 );
  ofs = EwNewPoint( dstX - extent.Point1.X, ( bounds.Point1.Y + caret.Y ) - extent.Point2.Y 
  );
  CoreView__MoveView( _this->magnifyingView, ofs, 0 );
  CoreView__MoveView( _this->magnifyingBack, ofs, 0 );
}

/* This slot method is called after a short delay when the user has moved the caret 
   or modified the text. Its job is to ensure that the caret is still visible. If 
   necessary, the editor content is scrolled. */
void ApplicationTextEditor_updateScrollOffset( ApplicationTextEditor _this, XObject 
  sender )
{
  XRect bounds;
  XInt32 ofsX;
  XInt32 ofsY;
  XPoint size;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  bounds = _this->Text.Super1.Bounds;
  ofsX = 0;
  ofsY = 0;

  if ( _this->Caret.Super1.Point1.X < bounds.Point1.X )
    ofsX = bounds.Point1.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.X > bounds.Point2.X )
    ofsX = bounds.Point2.X - _this->Caret.Super1.Point1.X;

  if ( _this->Caret.Super1.Point1.Y < bounds.Point1.Y )
    ofsY = bounds.Point1.Y - _this->Caret.Super1.Point1.Y;

  if ( _this->Caret.Super1.Point2.Y > bounds.Point2.Y )
    ofsY = bounds.Point2.Y - _this->Caret.Super1.Point2.Y;

  if (( ofsX != 0 ) || ( ofsY != 0 ))
    ViewsText_OnSetScrollOffset( &_this->Text, EwMovePointPos( _this->Text.ScrollOffset, 
    EwNewPoint( ofsX, ofsY )));

  ofsX = _this->Text.ScrollOffset.X;
  ofsY = _this->Text.ScrollOffset.Y;
  size = EwGetRectSize( ViewsText_GetContentArea( &_this->Text ));

  if ( size.X <= EwGetRectW( _this->Text.Super1.Bounds ))
    ofsX = 0;

  if ( size.Y <= EwGetRectH( _this->Text.Super1.Bounds ))
    ofsY = 0;

  ViewsText_OnSetScrollOffset( &_this->Text, EwNewPoint( ofsX, ofsY ));
}

/* This slot method is attached to the Text view. Each time the Text view has rearranged 
   the text, this method is called. Its job is to adjust the caret to the evtl. 
   new position. */
void ApplicationTextEditor_updateCaret( ApplicationTextEditor _this, XObject sender )
{
  XPoint rowCol;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rowCol = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );
  pos = ViewsText_RowCol2Position( &_this->Text, rowCol );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Caret, EwMovePointNeg( pos, EwNewPoint( 
  0, _this->Font->Ascent )));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Caret, EwMovePointPos( pos, EwNewPoint( 
  0, _this->Font->Descent )));

  if ( _this->blinkEffect.Enabled )
  {
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 0 );
    EffectsBoolEffect_OnSetEnabled( &_this->blinkEffect, 1 );
  }

  if ( _this->autoScroll )
  {
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateScrollOffset ), 
      ((XObject)_this ));
    _this->autoScroll = 0;
  }

  if ( _this->magnifyingView != 0 )
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateMagnifyingView ), 
      ((XObject)_this ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   hide the magnifying glass view again. */
void ApplicationTextEditor_onReleaseTouch( ApplicationTextEditor _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    CoreGroup_Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingView ));
    CoreGroup_Remove( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ));
    _this->magnifyingView = 0;
    _this->magnifyingBack = 0;
    CoreGroup_OnSetBuffered((CoreGroup)_this, 0 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   move the caret accordingly to the user's finger movement. */
void ApplicationTextEditor_onDragTouch( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->magnifyingView != 0 )
  {
    XPoint rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos 
      );
    XInt32 newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

    if ( newCaretIndex != _this->caretIndex )
    {
      _this->caretIndex = newCaretIndex;
      EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this 
        ));
      _this->autoScroll = 1;
    }
  }
  else
  {
    XPoint ofs = EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, _this->SimpleTouchHandler.HittingPos 
      );
    XInt32 limit = CoreView__GetRoot( _this )->CursorDragLimit;

    if (((( ofs.X < -limit ) || ( ofs.X > limit )) || ( ofs.Y < -limit )) || ( ofs.Y 
        > limit ))
      CoreRoot_DeflectCursor( CoreView__GetRoot( _this ), ((CoreView)&_this->SlideTouchHandler 
      ), _Const0057 );
  }
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   activate the caret movement mode if the user has pressed the finger on the screen 
   for a while. The method also shows a small magnifying glass where the text around 
   the caret is shown. This should help the user to navigate the caret with the 
   finger. */
void ApplicationTextEditor_onHoldTouch( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->SimpleTouchHandler.HoldPeriod >= 300 ) && ( _this->magnifyingView 
      == 0 ))
  {
    XInt32 height = _this->Caret.Super1.Point2.Y - _this->Caret.Super1.Point1.Y;
    XInt32 width = height * 3;

    if ( height > EwGetRectH( _this->Super3.Bounds ))
      height = EwGetRectH( _this->Super3.Bounds );

    if ( width > EwGetRectW( _this->Super3.Bounds ))
      width = EwGetRectW( _this->Super3.Bounds );

    CoreGroup_OnSetBuffered((CoreGroup)_this, 1 );
    _this->magnifyingView = EwNewObject( ViewsWarpGroup, 0 );
    _this->magnifyingBack = EwNewObject( ViewsRectangle, 0 );
    ViewsWarpGroup_OnSetGroup( _this->magnifyingView, ((CoreGroup)_this ));
    ViewsWarpView_OnSetQuality((ViewsWarpView)_this->magnifyingView, 1 );
    ViewsWarpGroup_OnSetOpacity( _this->magnifyingView, 200 );
    ViewsWarpView_OnSetSourceArea((ViewsWarpView)_this->magnifyingView, EwNewRect( 
    0, 0, width, height ));
    CoreQuadView__OnSetPoint2( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point2, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointX( _this->magnifyingView->Super2.Point3, 
    width * 2 ));
    CoreQuadView__OnSetPoint3( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point3, 
    height * 2 ));
    CoreQuadView__OnSetPoint4( _this->magnifyingView, EwSetPointY( _this->magnifyingView->Super2.Point4, 
    height * 2 ));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectSize( _this->magnifyingBack->Super1.Bounds, 
    EwMovePointPos( EwNewPoint( width * 2, height * 2 ), _Const0077 )));
    CoreRectView__OnSetBounds( _this->magnifyingBack, EwSetRectOrigin( _this->magnifyingBack->Super1.Bounds, 
    _Const0078 ));
    ViewsRectangle_OnSetColor( _this->magnifyingBack, _Const0079 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingBack ), 0 );
    CoreGroup__Add( _this->Super4.Owner, ((CoreView)_this->magnifyingView ), 0 );
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateMagnifyingView ), 
      ((XObject)_this ));
  }

  if ( _this->magnifyingView != 0 )
    EwSignal( EwNewSlot( _this, ApplicationTextEditor_onDragTouch ), ((XObject)_this 
      ));
}

/* This method is called from the corresponding SimpleTouchHandler. Its job is to 
   obtain the focused state for the editor so the user can interact with the editor 
   content and to place the caret at the touched position. */
void ApplicationTextEditor_onPressTouch( ApplicationTextEditor _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup_HasViewState((CoreGroup)_this, CoreViewStateFocused ))
    CoreGroup_ObtainFocus((CoreGroup)_this );

  rc = ViewsText_Position2RowCol( &_this->Text, _this->SimpleTouchHandler.CurrentPos 
  );
  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this 
      ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   move the caret up/down/left or right in the editor text. */
void ApplicationTextEditor_onCursorKey( ApplicationTextEditor _this, XObject sender )
{
  XPoint rc;
  XInt32 newCaretIndex;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Font == 0 )
    return;

  rc = ViewsText_StringIndex2RowCol( &_this->Text, _this->caretIndex );

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeLeft )
  {
    rc.X = ( rc.X - 1 );

    if ( rc.X < 0 )
    {
      rc.Y = ( rc.Y - 1 );
      rc.X = EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y ));
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeRight )
  {
    rc.X = ( rc.X + 1 );

    if ( rc.X == EwGetStringLength( ViewsText_GetRowString( &_this->Text, rc.Y )))
    {
      rc.Y = ( rc.Y + 1 );
      rc.X = 0;
    }
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeUp )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointNeg( pos, EwNewPoint( 
    0, rowHeight )));
  }

  if ( _this->CursorKeyHandler.Code == CoreKeyCodeDown )
  {
    XPoint pos = ViewsText_RowCol2Position( &_this->Text, rc );
    XInt32 rowHeight = ( _this->Font->Ascent + _this->Font->Descent ) + _this->Font->Leading;
    rc = ViewsText_Position2RowCol( &_this->Text, EwMovePointPos( pos, EwNewPoint( 
    0, rowHeight )));
  }

  newCaretIndex = ViewsText_RowCol2StringIndex( &_this->Text, rc );

  if ( newCaretIndex != _this->caretIndex )
  {
    _this->caretIndex = newCaretIndex;
    EwPostSignal( EwNewSlot( _this, ApplicationTextEditor_updateCaret ), ((XObject)_this 
      ));
    _this->autoScroll = 1;
  }
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign preceding the current caret position and to move the caret accordingly. */
void ApplicationTextEditor_onBackspaceKey( ApplicationTextEditor _this, XObject 
  sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex == 0 )
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex - 1 );
  count = 1;

  if ((( _this->caretIndex > 1 ) && ( ch == '^' )) && ( EwGetStringChar( _this->Text.String, 
      _this->caretIndex - 2 ) == 0x00A0 ))
    count = 2;
  else
    if ((( ch == '^' ) || ( ch == '~' )) || ( ch == '%' ))
      count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex 
  - count, count ));
  _this->caretIndex = _this->caretIndex - count;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   delete the sign at the current caret position. */
void ApplicationTextEditor_onDeleteKey( ApplicationTextEditor _this, XObject sender )
{
  XChar ch;
  XInt32 count;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->caretIndex >= ( EwGetStringLength( _this->Text.String ) - 1 ))
    return;

  ch = EwGetStringChar( _this->Text.String, _this->caretIndex );
  count = 1;

  if ( ch == '%' )
    count = 2;
  else
    if ( ch == 0x00A0 )
      count = 2;

  ViewsText_OnSetString( &_this->Text, EwStringRemove( _this->Text.String, _this->caretIndex, 
  count ));
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the <new line> sign and to move the caret 
   to the next row. */
void ApplicationTextEditor_onNewlineKey( ApplicationTextEditor _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, EwLoadString( 
  &_Const007A ), _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + 1;
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* This method is called from the corresponding keyboard handler. Its job is to 
   insert at the current caret position the sign which has been input by the user 
   and to move the caret to the next column. */
void ApplicationTextEditor_onCharacterKey( ApplicationTextEditor _this, XObject 
  sender )
{
  XChar ch;
  XString str;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ch = _this->CharacterKeyHandler.CharCode;
  str = EwNewStringChar( ch, 1 );

  if (((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD )) || ( ch == '%' ))
    str = EwConcatStringChar( EwLoadString( &_Const007B ), ch );
  else
    if ( ch == 0x0020 )
      str = EwLoadString( &_Const007C );

  ViewsText_OnSetString( &_this->Text, EwStringInsert( _this->Text.String, str, 
  _this->caretIndex ));
  _this->caretIndex = _this->caretIndex + EwGetStringLength( str );
  _this->autoScroll = 1;
  EwPostSignal( _this->OnChange, ((XObject)_this ));
}

/* 'C' function for method : 'Application::TextEditor.OnSetWrapText()' */
void ApplicationTextEditor_OnSetWrapText( ApplicationTextEditor _this, XBool value )
{
  if ( _this->WrapText == value )
    return;

  _this->WrapText = value;
  ViewsText_OnSetWrapText( &_this->Text, value );
  _this->SlideTouchHandler.SlideHorz = (XBool)!value;
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0057 );
}

/* 'C' function for method : 'Application::TextEditor.OnGetString()' */
XString ApplicationTextEditor_OnGetString( ApplicationTextEditor _this )
{
  XString str = _this->Text.String;
  XInt32 inx = EwStringFindChar( str, 0x00A0, 0 );

  while ( inx >= 0 )
  {
    if ( EwGetStringChar( str, inx + 1 ) == '^' )
    {
      str = EwStringRemove( str, inx, 1 );
      str = EwSetStringChar( str, inx, 0x0020 );
    }

    inx = EwStringFindChar( str, 0x00A0, inx + 1 );
  }

  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringRemove( str, inx, 1 );
    inx = EwStringFindChar( str, '%', inx + 1 );
  }

  return EwStringLeft( str, EwGetStringLength( str ) - 1 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetString()' */
void ApplicationTextEditor_OnSetString( ApplicationTextEditor _this, XString value )
{
  XString str;
  XInt32 inx;

  if ( !EwCompString( _this->String, value ))
    return;

  EwRetainString( &_this->String, value );
  str = EwShareString( value );
  inx = EwStringFindChar( str, '%', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007B ), inx );
    inx = EwStringFindChar( str, '%', inx + 2 );
  }

  inx = EwStringFindChar( str, '^', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007B ), inx );
    inx = EwStringFindChar( str, '^', inx + 2 );
  }

  inx = EwStringFindChar( str, '~', 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007B ), inx );
    inx = EwStringFindChar( str, '~', inx + 2 );
  }

  inx = EwStringFindChar( str, 0x00AD, 0 );

  while ( inx >= 0 )
  {
    str = EwStringInsert( str, EwLoadString( &_Const007B ), inx );
    inx = EwStringFindChar( str, 0x00AD, inx + 2 );
  }

  inx = EwStringFindChar( str, 0x0020, 0 );

  while ( inx >= 0 )
  {
    str = EwSetStringChar( str, inx, 0x00A0 );
    str = EwStringInsert( str, EwLoadString( &_Const007D ), inx + 1 );
    inx = EwStringFindChar( str, 0x0020, inx + 2 );
  }

  if ( _this->caretIndex > EwGetStringLength( str ))
    _this->caretIndex = EwGetStringLength( str );

  ViewsText_OnSetString( &_this->Text, EwConcatString( str, EwLoadString( &_Const007E 
  )));
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0057 );
}

/* 'C' function for method : 'Application::TextEditor.OnSetFont()' */
void ApplicationTextEditor_OnSetFont( ApplicationTextEditor _this, ResourcesFont 
  value )
{
  if ( _this->Font == value )
    return;

  _this->Font = value;
  ViewsText_OnSetFont( &_this->Text, value );
  _this->autoScroll = 1;
  ViewsText_OnSetScrollOffset( &_this->Text, _Const0057 );
}

/* Variants derived from the class : 'Application::TextEditor' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTextEditor )
EW_END_OF_CLASS_VARIANTS( ApplicationTextEditor )

/* Virtual Method Table (VMT) for the class : 'Application::TextEditor' */
EW_DEFINE_CLASS( ApplicationTextEditor, TemplatesTextEditor, "Application::TextEditor" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ApplicationTextEditor_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationTextEditor )

/* Initializer for the class 'Application::NumKeyboard' */
void ApplicationNumKeyboard__Init( ApplicationNumKeyboard _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesNumKeyboard__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Highlight, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey5, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey6, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey7, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey8, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey9, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextKey0, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyClear, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->ImageKeyEnter, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationNumKeyboard );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const007F );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const007F );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0005 );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Border, _Const007F );
  ViewsBorder_OnSetWidth( &_this->Border, 3 );
  ViewsBorder_OnSetColor( &_this->Border, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0080 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0081 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0082 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0083 );
  _this->TouchHandler.EnableMultiTouch = 1;
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreRectView__OnSetBounds( &_this->Highlight, _Const0084 );
  ViewsRectangle_OnSetColor( &_this->Highlight, _Const0085 );
  ViewsRectangle_OnSetVisible( &_this->Highlight, 0 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey1, _Const0084 );
  ViewsText_OnSetString( &_this->TextKey1, EwLoadString( &_Const003E ));
  ViewsText_OnSetColor( &_this->TextKey1, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey2, CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey2, _Const0086 );
  ViewsText_OnSetString( &_this->TextKey2, EwLoadString( &_Const0040 ));
  ViewsText_OnSetColor( &_this->TextKey2, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey3, CoreLayoutAlignToRight | CoreLayoutAlignToTop 
  | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey3, _Const0087 );
  ViewsText_OnSetString( &_this->TextKey3, EwLoadString( &_Const0042 ));
  ViewsText_OnSetColor( &_this->TextKey3, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey4, CoreLayoutAlignToLeft | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey4, _Const0088 );
  ViewsText_OnSetString( &_this->TextKey4, EwLoadString( &_Const0044 ));
  ViewsText_OnSetColor( &_this->TextKey4, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey5, CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->TextKey5, _Const0089 );
  ViewsText_OnSetString( &_this->TextKey5, EwLoadString( &_Const0046 ));
  ViewsText_OnSetColor( &_this->TextKey5, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey6, CoreLayoutAlignToRight | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey6, _Const008A );
  ViewsText_OnSetString( &_this->TextKey6, EwLoadString( &_Const0048 ));
  ViewsText_OnSetColor( &_this->TextKey6, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey7, CoreLayoutAlignToLeft | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey7, _Const008B );
  ViewsText_OnSetString( &_this->TextKey7, EwLoadString( &_Const004A ));
  ViewsText_OnSetColor( &_this->TextKey7, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey8, CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->TextKey8, _Const008C );
  ViewsText_OnSetString( &_this->TextKey8, EwLoadString( &_Const004C ));
  ViewsText_OnSetColor( &_this->TextKey8, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey9, CoreLayoutAlignToRight | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey9, _Const008D );
  ViewsText_OnSetString( &_this->TextKey9, EwLoadString( &_Const008E ));
  ViewsText_OnSetColor( &_this->TextKey9, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->TextKey0, CoreLayoutAlignToBottom | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextKey0, _Const008F );
  ViewsText_OnSetString( &_this->TextKey0, EwLoadString( &_Const0090 ));
  ViewsText_OnSetColor( &_this->TextKey0, _Const0061 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyClear, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyClear, _Const0091 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyClear, 1 );
  CoreView_OnSetLayout((CoreView)&_this->ImageKeyEnter, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToRight | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->ImageKeyEnter, _Const0092 );
  ViewsImage_OnSetFrameNumber( &_this->ImageKeyEnter, 1 );
  ViewsImage_OnSetVisible( &_this->ImageKeyEnter, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Highlight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey9 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextKey0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyClear ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageKeyEnter ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, ApplicationNumKeyboard_onFlashTimer 
  );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, ApplicationNumKeyboard_onDragTouch 
  );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationNumKeyboard_onReleaseTouch 
  );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationNumKeyboard_onPressTouch 
  );
  ViewsText_OnSetFont( &_this->TextKey1, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey2, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey3, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey4, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey5, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey6, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey7, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey8, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey9, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->TextKey0, EwLoadResource( &ResourcesFontArial24, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyClear, EwLoadResource( &ResourcesKeyBackspace, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageKeyEnter, EwLoadResource( &ResourcesKeyEnter, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::NumKeyboard' */
void ApplicationNumKeyboard__ReInit( ApplicationNumKeyboard _this )
{
  /* At first re-initialize the super class ... */
  TemplatesNumKeyboard__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsBorder__ReInit( &_this->Border );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsRectangle__ReInit( &_this->Highlight );
  ViewsText__ReInit( &_this->TextKey1 );
  ViewsText__ReInit( &_this->TextKey2 );
  ViewsText__ReInit( &_this->TextKey3 );
  ViewsText__ReInit( &_this->TextKey4 );
  ViewsText__ReInit( &_this->TextKey5 );
  ViewsText__ReInit( &_this->TextKey6 );
  ViewsText__ReInit( &_this->TextKey7 );
  ViewsText__ReInit( &_this->TextKey8 );
  ViewsText__ReInit( &_this->TextKey9 );
  ViewsText__ReInit( &_this->TextKey0 );
  ViewsImage__ReInit( &_this->ImageKeyClear );
  ViewsImage__ReInit( &_this->ImageKeyEnter );
}

/* Finalizer method for the class 'Application::NumKeyboard' */
void ApplicationNumKeyboard__Done( ApplicationNumKeyboard _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationNumKeyboard );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  ViewsRectangle__Done( &_this->Background );
  ViewsBorder__Done( &_this->Border );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsRectangle__Done( &_this->Highlight );
  ViewsText__Done( &_this->TextKey1 );
  ViewsText__Done( &_this->TextKey2 );
  ViewsText__Done( &_this->TextKey3 );
  ViewsText__Done( &_this->TextKey4 );
  ViewsText__Done( &_this->TextKey5 );
  ViewsText__Done( &_this->TextKey6 );
  ViewsText__Done( &_this->TextKey7 );
  ViewsText__Done( &_this->TextKey8 );
  ViewsText__Done( &_this->TextKey9 );
  ViewsText__Done( &_this->TextKey0 );
  ViewsImage__Done( &_this->ImageKeyClear );
  ViewsImage__Done( &_this->ImageKeyEnter );

  /* Don't forget to deinitialize the super class ... */
  TemplatesNumKeyboard__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::NumKeyboard' */
void ApplicationNumKeyboard__Mark( ApplicationNumKeyboard _this )
{
  EwMarkObject( _this->keyView );
  EwMarkObject( &_this->FlashTimer );
  EwMarkObject( &_this->Background );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->TouchHandler );
  EwMarkObject( &_this->Highlight );
  EwMarkObject( &_this->TextKey1 );
  EwMarkObject( &_this->TextKey2 );
  EwMarkObject( &_this->TextKey3 );
  EwMarkObject( &_this->TextKey4 );
  EwMarkObject( &_this->TextKey5 );
  EwMarkObject( &_this->TextKey6 );
  EwMarkObject( &_this->TextKey7 );
  EwMarkObject( &_this->TextKey8 );
  EwMarkObject( &_this->TextKey9 );
  EwMarkObject( &_this->TextKey0 );
  EwMarkObject( &_this->ImageKeyClear );
  EwMarkObject( &_this->ImageKeyEnter );

  /* Give the super class a chance to mark its objects and references */
  TemplatesNumKeyboard__Mark( &_this->_Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationNumKeyboard_UpdateViewState( ApplicationNumKeyboard _this, XSet 
  aState )
{
  CoreView isKeyView;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isKeyView = 0;
  isPressed = (XBool)(( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->FlashTimer.Enabled );

  if ( isPressed && EwIsPointInRect( CoreView__GetExtent( &_this->TouchHandler ), 
      _this->recentPosition ))
    isKeyView = CoreGroup_FindViewAtPosition((CoreGroup)_this, 0, _this->recentPosition, 
    0 );

  if (( EwCastObject( isKeyView, ViewsText ) == 0 ) && ( EwCastObject( isKeyView, 
      ViewsImage ) == 0 ))
    isKeyView = 0;

  if ( isKeyView != _this->keyView )
  {
    ViewsText isTextKeyView = EwCastObject( isKeyView, ViewsText );
    ViewsText textKeyView = EwCastObject( _this->keyView, ViewsText );

    if ( isKeyView != 0 )
    {
      CoreRectView__OnSetBounds( &_this->Highlight, CoreView__GetExtent( isKeyView 
      ));
      ViewsRectangle_OnSetVisible( &_this->Highlight, 1 );
    }
    else
      ViewsRectangle_OnSetVisible( &_this->Highlight, 0 );

    if ( isTextKeyView != 0 )
      ViewsText_OnSetColor( isTextKeyView, _Const0059 );

    if ( textKeyView != 0 )
      ViewsText_OnSetColor( textKeyView, _Const0061 );
  }

  _this->keyView = isKeyView;
}

/* This internal slot method is called when the recently pressed key should be activated. 
   This is when the user presses on a key and then releases the finger again. */
void ApplicationNumKeyboard_activateKey( ApplicationNumKeyboard _this, XObject sender )
{
  ViewsText textKeyView;
  XChar charCode;
  XEnum keyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  textKeyView = EwCastObject( _this->keyView, ViewsText );
  charCode = 0x0000;
  keyCode = CoreKeyCodeNoKey;

  if ( textKeyView != 0 )
    charCode = EwGetStringChar( textKeyView->String, 0 );
  else
    if ( _this->keyView == ((CoreView)&_this->ImageKeyEnter ))
      keyCode = CoreKeyCodeEnter;
    else
      if ( _this->keyView == ((CoreView)&_this->ImageKeyClear ))
        keyCode = CoreKeyCodeBackspace;

  if ( charCode != 0x0000 )
  {
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), CoreKeyCodeNoKey, 
    charCode, 1 );
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), CoreKeyCodeNoKey, 
    charCode, 0 );
  }

  if ( keyCode != CoreKeyCodeNoKey )
  {
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, 0x0000, 
    1 );
    CoreRoot_DriveKeyboardHitting( CoreView__GetRoot( _this ), keyCode, 0x0000, 
    0 );
  }
}

/* This internal slot method is called when the '@FlashTimer' is expired. It ends 
   the short flash feedback effect. */
void ApplicationNumKeyboard_onFlashTimer( ApplicationNumKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwSignal( EwNewSlot( _this, ApplicationNumKeyboard_activateKey ), ((XObject)_this 
    ));
}

/* This internal slot method is called when the user drags the finger while pressing 
   the keyboard. This updates the keyboard to highlight the key at the new touch 
   position. */
void ApplicationNumKeyboard_onDragTouch( ApplicationNumKeyboard _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->recentPosition = _this->TouchHandler.CurrentPos;
}

/* This internal slot method is called when the user releases the touch screen after 
   touching the keyboard area. This activates the key the user has touched. */
void ApplicationNumKeyboard_onReleaseTouch( ApplicationNumKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.HoldPeriod >= _this->FlashTimer.Begin )
    EwSignal( EwNewSlot( _this, ApplicationNumKeyboard_activateKey ), ((XObject)_this 
      ));
  else
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
}

/* This internal slot method is called when the user touches the keyboard area. */
void ApplicationNumKeyboard_onPressTouch( ApplicationNumKeyboard _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwSignal( EwNewSlot( _this, ApplicationNumKeyboard_activateKey ), ((XObject)_this 
      ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  _this->recentPosition = _this->TouchHandler.CurrentPos;
}

/* Variants derived from the class : 'Application::NumKeyboard' */
EW_DEFINE_CLASS_VARIANTS( ApplicationNumKeyboard )
EW_END_OF_CLASS_VARIANTS( ApplicationNumKeyboard )

/* Virtual Method Table (VMT) for the class : 'Application::NumKeyboard' */
EW_DEFINE_CLASS( ApplicationNumKeyboard, TemplatesNumKeyboard, "Application::NumKeyboard" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ApplicationNumKeyboard_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationNumKeyboard )

/* Initializer for the class 'Application::WellLabel' */
void ApplicationWellLabel__Init( ApplicationWellLabel _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationWellLabel );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0093 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0093 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0094 ));
  ViewsText_OnSetColor( &_this->Text, _Const0061 );
  EwRetainString( &_this->TextString, EwLoadString( &_Const0094 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &FlatFontL, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::WellLabel' */
void ApplicationWellLabel__ReInit( ApplicationWellLabel _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Application::WellLabel' */
void ApplicationWellLabel__Done( ApplicationWellLabel _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationWellLabel );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->TextString );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::WellLabel' */
void ApplicationWellLabel__Mark( ApplicationWellLabel _this )
{
  EwMarkObject( &_this->Text );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationWellLabel_UpdateLayout( ApplicationWellLabel _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationWellLabel_UpdateViewState( ApplicationWellLabel _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application::WellLabel.OnSetTextString()' */
void ApplicationWellLabel_OnSetTextString( ApplicationWellLabel _this, XString value )
{
  if ( !EwCompString( _this->TextString, value ))
    return;

  EwRetainString( &_this->TextString, value );
  ViewsText_OnSetString( &_this->Text, _this->TextString );
}

/* Variants derived from the class : 'Application::WellLabel' */
EW_DEFINE_CLASS_VARIANTS( ApplicationWellLabel )
EW_END_OF_CLASS_VARIANTS( ApplicationWellLabel )

/* Virtual Method Table (VMT) for the class : 'Application::WellLabel' */
EW_DEFINE_CLASS( ApplicationWellLabel, CoreGroup, "Application::WellLabel" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationWellLabel_UpdateLayout,
  ApplicationWellLabel_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationWellLabel )

/* Initializer for the class 'Application::Temperature' */
void ApplicationTemperature__Init( ApplicationTemperature _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->Timer, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationTemperature );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0095 );
  CoreTimer_OnSetPeriod( &_this->Timer, 1000 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0095 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0096 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->Timer.OnTrigger = EwNewSlot( _this, ApplicationTemperature_onEvent );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &FlatFontXL, ResourcesFont 
  ));
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationTemperature_onEvent 
  );
}

/* Re-Initializer for the class 'Application::Temperature' */
void ApplicationTemperature__ReInit( ApplicationTemperature _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->Timer );
  ViewsText__ReInit( &_this->Text );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
}

/* Finalizer method for the class 'Application::Temperature' */
void ApplicationTemperature__Done( ApplicationTemperature _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationTemperature );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->Timer );
  ViewsText__Done( &_this->Text );
  CorePropertyObserver__Done( &_this->PropertyObserver );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Temperature' */
void ApplicationTemperature__Mark( ApplicationTemperature _this )
{
  EwMarkObject( &_this->Timer );
  EwMarkObject( &_this->Text );
  EwMarkObject( &_this->PropertyObserver );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationTemperature_UpdateLayout( ApplicationTemperature _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationTemperature_UpdateViewState( ApplicationTemperature _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationTemperature_onEvent( ApplicationTemperature _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwConcatString( EwNewStringInt( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass )->Temperature, 0, 10 ), EwLoadString( &_Const0097 
  )));
}

/* Variants derived from the class : 'Application::Temperature' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTemperature )
EW_END_OF_CLASS_VARIANTS( ApplicationTemperature )

/* Virtual Method Table (VMT) for the class : 'Application::Temperature' */
EW_DEFINE_CLASS( ApplicationTemperature, CoreGroup, "Application::Temperature" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationTemperature_UpdateLayout,
  ApplicationTemperature_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationTemperature )

/* Initializer for the class 'Application::Config' */
void ApplicationConfig__Init( ApplicationConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->Btn_Ok, &_this->_XObject, 0 );
  ApplicationTextEditor__Init( &_this->TextEditor, &_this->_XObject, 0 );
  ApplicationNumKeyboard__Init( &_this->NumKeyboard, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  ApplicationConfigPosition__Init( &_this->ConfigTop, &_this->_XObject, 0 );
  ApplicationConfigPosition__Init( &_this->ConfigTR, &_this->_XObject, 0 );
  ApplicationConfigPosition__Init( &_this->ConfigBL, &_this->_XObject, 0 );
  ApplicationConfigPosition__Init( &_this->ConfigWaste, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationConfig );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Btn_Ok, _Const0098 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Btn_Ok, 0 );
  FlatActionButton_OnSetCaption( &_this->Btn_Ok, EwLoadString( &_Const0099 ));
  CoreRectView__OnSetBounds( &_this->TextEditor, _Const009A );
  ApplicationTextEditor_OnSetString( &_this->TextEditor, EwLoadString( &_Const0048 
  ));
  CoreRectView__OnSetBounds( &_this->NumKeyboard, _Const009B );
  CoreRectView__OnSetBounds( &_this->Text, _Const009C );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const009D ));
  CoreRectView__OnSetBounds( &_this->ConfigTop, _Const0000 );
  ApplicationConfigPosition_OnSetTitle( &_this->ConfigTop, EwLoadString( &_Const009E 
  ));
  CoreRectView__OnSetBounds( &_this->ConfigTR, _Const0000 );
  ApplicationConfigPosition_OnSetTitle( &_this->ConfigTR, EwLoadString( &_Const009F 
  ));
  CoreRectView__OnSetBounds( &_this->ConfigBL, _Const0000 );
  ApplicationConfigPosition_OnSetTitle( &_this->ConfigBL, EwLoadString( &_Const00A0 
  ));
  CoreRectView__OnSetBounds( &_this->ConfigWaste, _Const0000 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ConfigWaste, 1 );
  ApplicationConfigPosition_OnSetTitle( &_this->ConfigWaste, EwLoadString( &_Const00A1 
  ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Btn_Ok ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextEditor ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumKeyboard ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ConfigTop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ConfigTR ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ConfigBL ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ConfigWaste ), 0 );
  _this->Btn_Ok.OnAction = EwNewSlot( _this, ApplicationConfig_onBtn_Ok );
  ApplicationTextEditor_OnSetFont( &_this->TextEditor, EwLoadResource( &FlatFontL, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &FlatFontL, ResourcesFont ));
  ApplicationConfigPosition_OnSetonNext( &_this->ConfigTop, EwNewSlot( _this, ApplicationConfig_onNextTop 
  ));
  ApplicationConfigPosition_OnSetonNext( &_this->ConfigTR, EwNewSlot( _this, ApplicationConfig_onNextTR 
  ));
  ApplicationConfigPosition_OnSetonNext( &_this->ConfigBL, EwNewSlot( _this, ApplicationConfig_onNextBL 
  ));
  ApplicationConfigPosition_OnSetonNext( &_this->ConfigWaste, EwNewSlot( _this, 
  ApplicationConfig_onNextWaste ));
}

/* Re-Initializer for the class 'Application::Config' */
void ApplicationConfig__ReInit( ApplicationConfig _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  FlatActionButton__ReInit( &_this->Btn_Ok );
  ApplicationTextEditor__ReInit( &_this->TextEditor );
  ApplicationNumKeyboard__ReInit( &_this->NumKeyboard );
  ViewsText__ReInit( &_this->Text );
  ApplicationConfigPosition__ReInit( &_this->ConfigTop );
  ApplicationConfigPosition__ReInit( &_this->ConfigTR );
  ApplicationConfigPosition__ReInit( &_this->ConfigBL );
  ApplicationConfigPosition__ReInit( &_this->ConfigWaste );
}

/* Finalizer method for the class 'Application::Config' */
void ApplicationConfig__Done( ApplicationConfig _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationConfig );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  FlatActionButton__Done( &_this->Btn_Ok );
  ApplicationTextEditor__Done( &_this->TextEditor );
  ApplicationNumKeyboard__Done( &_this->NumKeyboard );
  ViewsText__Done( &_this->Text );
  ApplicationConfigPosition__Done( &_this->ConfigTop );
  ApplicationConfigPosition__Done( &_this->ConfigTR );
  ApplicationConfigPosition__Done( &_this->ConfigBL );
  ApplicationConfigPosition__Done( &_this->ConfigWaste );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Config' */
void ApplicationConfig__Mark( ApplicationConfig _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->Btn_Ok );
  EwMarkObject( &_this->TextEditor );
  EwMarkObject( &_this->NumKeyboard );
  EwMarkObject( &_this->Text );
  EwMarkObject( _this->ControllMenue );
  EwMarkObject( &_this->ConfigTop );
  EwMarkObject( &_this->ConfigTR );
  EwMarkObject( &_this->ConfigBL );
  EwMarkObject( &_this->ConfigWaste );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationConfig_UpdateLayout( ApplicationConfig _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationConfig_UpdateViewState( ApplicationConfig _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application::Config.onBtn_Ok()' */
void ApplicationConfig_onBtn_Ok( ApplicationConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetEnabled((CoreGroup)_this, 0 );
  CoreGroup_OnSetVisible((CoreGroup)_this, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)_this->ControllMenue, 1 );
}

/* 'C' function for method : 'Application::Config.OnSetControllMenue()' */
void ApplicationConfig_OnSetControllMenue( ApplicationConfig _this, ApplicationControllMenu 
  value )
{
  if ( _this->ControllMenue == value )
    return;

  _this->ControllMenue = value;
}

/* 'C' function for method : 'Application::Config.onNextWaste()' */
void ApplicationConfig_onNextWaste( ApplicationConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SetWastePosition( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
  ), _this->ConfigWaste.XSlider.CurrentValue, _this->ConfigWaste.YSlider.CurrentValue, 
  _this->ConfigWaste.ZSlider.CurrentValue );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ConfigWaste, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ConfigWaste, 0 );
}

/* 'C' function for method : 'Application::Config.onNextTR()' */
void ApplicationConfig_onNextTR( ApplicationConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SetTRPosition( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
  ), _this->ConfigTR.XSlider.CurrentValue, _this->ConfigTR.YSlider.CurrentValue, 
  _this->ConfigTR.ZSlider.CurrentValue );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ConfigTR, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ConfigTR, 0 );
}

/* 'C' function for method : 'Application::Config.onNextBL()' */
void ApplicationConfig_onNextBL( ApplicationConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SetBLPosition( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
  ), _this->ConfigBL.XSlider.CurrentValue, _this->ConfigBL.YSlider.CurrentValue, 
  _this->ConfigBL.ZSlider.CurrentValue );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ConfigBL, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ConfigBL, 0 );
}

/* 'C' function for method : 'Application::Config.onNextTop()' */
void ApplicationConfig_onNextTop( ApplicationConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SetTopPosition( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
  ), _this->ConfigBL.XSlider.CurrentValue, _this->ConfigBL.YSlider.CurrentValue, 
  _this->ConfigBL.ZSlider.CurrentValue );
  CoreGroup_OnSetVisible((CoreGroup)&_this->ConfigTop, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ConfigTop, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Btn_Ok, 1 );
}

/* Variants derived from the class : 'Application::Config' */
EW_DEFINE_CLASS_VARIANTS( ApplicationConfig )
EW_END_OF_CLASS_VARIANTS( ApplicationConfig )

/* Virtual Method Table (VMT) for the class : 'Application::Config' */
EW_DEFINE_CLASS( ApplicationConfig, CoreGroup, "Application::Config" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationConfig_UpdateLayout,
  ApplicationConfig_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationConfig )

/* Initializer for the class 'Application::ConfigPosition' */
void ApplicationConfigPosition__Init( ApplicationConfigPosition _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->Btn_Next, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextTitle, &_this->_XObject, 0 );
  FlatHorzSlider__Init( &_this->XSlider, &_this->_XObject, 0 );
  FlatHorzSlider__Init( &_this->YSlider, &_this->_XObject, 0 );
  FlatHorzSlider__Init( &_this->ZSlider, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextX, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextY, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextZ, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationConfigPosition );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Btn_Next, _Const0098 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Btn_Next, 0 );
  FlatActionButton_OnSetCaption( &_this->Btn_Next, EwLoadString( &_Const00A2 ));
  CoreRectView__OnSetBounds( &_this->TextTitle, _Const009C );
  ViewsText_OnSetWrapText( &_this->TextTitle, 1 );
  ViewsText_OnSetString( &_this->TextTitle, EwLoadString( &_Const00A3 ));
  CoreRectView__OnSetBounds( &_this->XSlider, _Const00A4 );
  FlatHorzSlider_OnSetCurrentValue( &_this->XSlider, 0 );
  CoreRectView__OnSetBounds( &_this->YSlider, _Const00A5 );
  FlatHorzSlider_OnSetCurrentValue( &_this->YSlider, 0 );
  CoreRectView__OnSetBounds( &_this->ZSlider, _Const00A6 );
  FlatHorzSlider_OnSetCurrentValue( &_this->ZSlider, 0 );
  CoreRectView__OnSetBounds( &_this->TextX, _Const00A7 );
  ViewsText_OnSetWrapText( &_this->TextX, 1 );
  ViewsText_OnSetString( &_this->TextX, EwLoadString( &_Const00A8 ));
  CoreRectView__OnSetBounds( &_this->TextY, _Const00A9 );
  ViewsText_OnSetWrapText( &_this->TextY, 1 );
  ViewsText_OnSetString( &_this->TextY, EwLoadString( &_Const00AA ));
  CoreRectView__OnSetBounds( &_this->TextZ, _Const00AB );
  ViewsText_OnSetWrapText( &_this->TextZ, 1 );
  ViewsText_OnSetString( &_this->TextZ, EwLoadString( &_Const00AC ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Btn_Next ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextTitle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->XSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->YSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ZSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextX ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextY ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextZ ), 0 );
  _this->Btn_Next.OnAction = EwNewSlot( _this, ApplicationConfigPosition_onBtnNext 
  );
  ViewsText_OnSetFont( &_this->TextTitle, EwLoadResource( &FlatFontL, ResourcesFont 
  ));
  _this->XSlider.OnChange = EwNewSlot( _this, ApplicationConfigPosition_OnChangePos 
  );
  _this->YSlider.OnChange = EwNewSlot( _this, ApplicationConfigPosition_OnChangePos 
  );
  _this->ZSlider.OnChange = EwNewSlot( _this, ApplicationConfigPosition_OnChangePos 
  );
  ViewsText_OnSetFont( &_this->TextX, EwLoadResource( &FlatFontL, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->TextY, EwLoadResource( &FlatFontL, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->TextZ, EwLoadResource( &FlatFontL, ResourcesFont 
  ));
}

/* Re-Initializer for the class 'Application::ConfigPosition' */
void ApplicationConfigPosition__ReInit( ApplicationConfigPosition _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  FlatActionButton__ReInit( &_this->Btn_Next );
  ViewsText__ReInit( &_this->TextTitle );
  FlatHorzSlider__ReInit( &_this->XSlider );
  FlatHorzSlider__ReInit( &_this->YSlider );
  FlatHorzSlider__ReInit( &_this->ZSlider );
  ViewsText__ReInit( &_this->TextX );
  ViewsText__ReInit( &_this->TextY );
  ViewsText__ReInit( &_this->TextZ );
}

/* Finalizer method for the class 'Application::ConfigPosition' */
void ApplicationConfigPosition__Done( ApplicationConfigPosition _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationConfigPosition );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  FlatActionButton__Done( &_this->Btn_Next );
  ViewsText__Done( &_this->TextTitle );
  FlatHorzSlider__Done( &_this->XSlider );
  FlatHorzSlider__Done( &_this->YSlider );
  FlatHorzSlider__Done( &_this->ZSlider );
  ViewsText__Done( &_this->TextX );
  ViewsText__Done( &_this->TextY );
  ViewsText__Done( &_this->TextZ );

  /* Release all used strings */
  EwReleaseString( &_this->Title );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::ConfigPosition' */
void ApplicationConfigPosition__Mark( ApplicationConfigPosition _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->Btn_Next );
  EwMarkObject( &_this->TextTitle );
  EwMarkObject( &_this->XSlider );
  EwMarkObject( &_this->YSlider );
  EwMarkObject( &_this->ZSlider );
  EwMarkSlot( _this->onNext );
  EwMarkObject( &_this->TextX );
  EwMarkObject( &_this->TextY );
  EwMarkObject( &_this->TextZ );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationConfigPosition_UpdateLayout( ApplicationConfigPosition _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationConfigPosition_UpdateViewState( ApplicationConfigPosition _this, 
  XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'Application::ConfigPosition.OnChangePos()' */
void ApplicationConfigPosition_OnChangePos( ApplicationConfigPosition _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_SetCurrentPosition( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
  ), _this->XSlider.CurrentValue, _this->YSlider.CurrentValue, _this->ZSlider.CurrentValue 
  );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Btn_Next, 1 );
}

/* 'C' function for method : 'Application::ConfigPosition.OnSetonNext()' */
void ApplicationConfigPosition_OnSetonNext( ApplicationConfigPosition _this, XSlot 
  value )
{
  if ( !EwCompSlot( _this->onNext, value ))
    return;

  _this->onNext = value;
}

/* 'C' function for method : 'Application::ConfigPosition.OnSetTitle()' */
void ApplicationConfigPosition_OnSetTitle( ApplicationConfigPosition _this, XString 
  value )
{
  if ( !EwCompString( _this->Title, value ))
    return;

  EwRetainString( &_this->Title, value );
  ViewsText_OnSetString( &_this->TextTitle, _this->Title );
}

/* 'C' function for method : 'Application::ConfigPosition.onBtnNext()' */
void ApplicationConfigPosition_onBtnNext( ApplicationConfigPosition _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->onNext, ((XObject)_this ));
}

/* Variants derived from the class : 'Application::ConfigPosition' */
EW_DEFINE_CLASS_VARIANTS( ApplicationConfigPosition )
EW_END_OF_CLASS_VARIANTS( ApplicationConfigPosition )

/* Virtual Method Table (VMT) for the class : 'Application::ConfigPosition' */
EW_DEFINE_CLASS( ApplicationConfigPosition, CoreGroup, "Application::ConfigPosition" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationConfigPosition_UpdateLayout,
  ApplicationConfigPosition_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationConfigPosition )

/* Initializer for the class 'Application::ControllMenu' */
void ApplicationControllMenu__Init( ApplicationControllMenu _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ApplicationSampleController__Init( &_this->SCA, &_this->_XObject, 0 );
  ApplicationSampleController__Init( &_this->SCA1, &_this->_XObject, 0 );
  ApplicationSampleController__Init( &_this->SCA2, &_this->_XObject, 0 );
  ApplicationSampleController__Init( &_this->SCA3, &_this->_XObject, 0 );
  ApplicationSampleController__Init( &_this->SCA4, &_this->_XObject, 0 );
  ApplicationSampleController__Init( &_this->SCA5, &_this->_XObject, 0 );
  ApplicationClock__Init( &_this->Clock, &_this->_XObject, 0 );
  ViewsWarpImage__Init( &_this->Logo, &_this->_XObject, 0 );
  ApplicationNumKeyboard__Init( &_this->NumKeyboard, &_this->_XObject, 0 );
  ApplicationTemperature__Init( &_this->Temperature, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->NuOfCircuitsObserver, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->Btn_Config, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->Btn_NewWell, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->Btn_StopAll, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->RemainingTime, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationControllMenu );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0005 );
  CoreRectView__OnSetBounds( &_this->SCA, _Const00AD );
  ApplicationSampleController_OnSetNameProperty( &_this->SCA, '1' );
  CoreRectView__OnSetBounds( &_this->SCA1, _Const00AE );
  ApplicationSampleController_OnSetNameProperty( &_this->SCA1, '2' );
  CoreRectView__OnSetBounds( &_this->SCA2, _Const00AF );
  ApplicationSampleController_OnSetNameProperty( &_this->SCA2, '3' );
  CoreRectView__OnSetBounds( &_this->SCA3, _Const00B0 );
  ApplicationSampleController_OnSetNameProperty( &_this->SCA3, '4' );
  CoreRectView__OnSetBounds( &_this->SCA4, _Const00B1 );
  ApplicationSampleController_OnSetNameProperty( &_this->SCA4, '5' );
  CoreRectView__OnSetBounds( &_this->SCA5, _Const00B2 );
  ApplicationSampleController_OnSetNameProperty( &_this->SCA5, '6' );
  CoreRectView__OnSetBounds( &_this->Clock, _Const00B3 );
  CoreQuadView__OnSetPoint4( &_this->Logo, _Const0039 );
  CoreQuadView__OnSetPoint3( &_this->Logo, _Const003A );
  CoreQuadView__OnSetPoint2( &_this->Logo, _Const003B );
  CoreQuadView__OnSetPoint1( &_this->Logo, _Const003C );
  CoreRectView__OnSetBounds( &_this->NumKeyboard, _Const00B4 );
  CoreRectView__OnSetBounds( &_this->Temperature, _Const00B5 );
  CoreRectView__OnSetBounds( &_this->Btn_Config, _Const00B6 );
  FlatActionButton_OnSetCaption( &_this->Btn_Config, EwLoadString( &_Const00B7 ));
  CoreRectView__OnSetBounds( &_this->Btn_NewWell, _Const00B8 );
  FlatActionButton_OnSetCaption( &_this->Btn_NewWell, EwLoadString( &_Const00B9 
  ));
  CoreRectView__OnSetBounds( &_this->Btn_StopAll, _Const00BA );
  FlatActionButton_OnSetCaption( &_this->Btn_StopAll, EwLoadString( &_Const00BB 
  ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SCA ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SCA1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SCA2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SCA3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SCA4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SCA5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Clock ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Logo ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NumKeyboard ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Temperature ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Btn_Config ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Btn_NewWell ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Btn_StopAll ), 0 );
  ViewsWarpImage_OnSetBitmap( &_this->Logo, EwLoadResource( &ApplicationLogo, ResourcesBitmap 
  ));
  _this->NuOfCircuitsObserver.OnEvent = EwNewSlot( _this, ApplicationControllMenu_onNuOfCircuits 
  );
  CorePropertyObserver_OnSetOutlet( &_this->NuOfCircuitsObserver, EwNewRef( EwGetAutoObject( 
  &DeviceDevice, DeviceDeviceClass ), DeviceDeviceClass_OnGetNuOfCircuits, DeviceDeviceClass_OnSetNuOfCircuits 
  ));
  _this->SampleController[ 0 ] = &_this->SCA;
  _this->SampleController[ 1 ] = &_this->SCA1;
  _this->SampleController[ 2 ] = &_this->SCA2;
  _this->SampleController[ 3 ] = &_this->SCA3;
  _this->SampleController[ 4 ] = &_this->SCA4;
  _this->SampleController[ 5 ] = &_this->SCA5;
  _this->Btn_Config.OnAction = EwNewSlot( _this, ApplicationControllMenu_onBtn_Config 
  );
  _this->Btn_NewWell.OnAction = EwNewSlot( _this, ApplicationControllMenu_onBtn_NewWell 
  );
  _this->RemainingTime.OnEvent = EwNewSlot( _this, ApplicationControllMenu_onRemainingTime 
  );
  CoreSystemEventHandler_OnSetEvent( &_this->RemainingTime, &EwGetAutoObject( &DeviceDevice, 
  DeviceDeviceClass )->RemainingTimeEvent );
}

/* Re-Initializer for the class 'Application::ControllMenu' */
void ApplicationControllMenu__ReInit( ApplicationControllMenu _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ApplicationSampleController__ReInit( &_this->SCA );
  ApplicationSampleController__ReInit( &_this->SCA1 );
  ApplicationSampleController__ReInit( &_this->SCA2 );
  ApplicationSampleController__ReInit( &_this->SCA3 );
  ApplicationSampleController__ReInit( &_this->SCA4 );
  ApplicationSampleController__ReInit( &_this->SCA5 );
  ApplicationClock__ReInit( &_this->Clock );
  ViewsWarpImage__ReInit( &_this->Logo );
  ApplicationNumKeyboard__ReInit( &_this->NumKeyboard );
  ApplicationTemperature__ReInit( &_this->Temperature );
  CorePropertyObserver__ReInit( &_this->NuOfCircuitsObserver );
  FlatActionButton__ReInit( &_this->Btn_Config );
  FlatActionButton__ReInit( &_this->Btn_NewWell );
  FlatActionButton__ReInit( &_this->Btn_StopAll );
  CoreSystemEventHandler__ReInit( &_this->RemainingTime );
}

/* Finalizer method for the class 'Application::ControllMenu' */
void ApplicationControllMenu__Done( ApplicationControllMenu _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationControllMenu );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ApplicationSampleController__Done( &_this->SCA );
  ApplicationSampleController__Done( &_this->SCA1 );
  ApplicationSampleController__Done( &_this->SCA2 );
  ApplicationSampleController__Done( &_this->SCA3 );
  ApplicationSampleController__Done( &_this->SCA4 );
  ApplicationSampleController__Done( &_this->SCA5 );
  ApplicationClock__Done( &_this->Clock );
  ViewsWarpImage__Done( &_this->Logo );
  ApplicationNumKeyboard__Done( &_this->NumKeyboard );
  ApplicationTemperature__Done( &_this->Temperature );
  CorePropertyObserver__Done( &_this->NuOfCircuitsObserver );
  FlatActionButton__Done( &_this->Btn_Config );
  FlatActionButton__Done( &_this->Btn_NewWell );
  FlatActionButton__Done( &_this->Btn_StopAll );
  CoreSystemEventHandler__Done( &_this->RemainingTime );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::ControllMenu' */
void ApplicationControllMenu__Mark( ApplicationControllMenu _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->SCA );
  EwMarkObject( &_this->SCA1 );
  EwMarkObject( &_this->SCA2 );
  EwMarkObject( &_this->SCA3 );
  EwMarkObject( &_this->SCA4 );
  EwMarkObject( &_this->SCA5 );
  EwMarkObject( &_this->Clock );
  EwMarkObject( &_this->Logo );
  EwMarkObject( &_this->NumKeyboard );
  EwMarkObject( &_this->Temperature );
  EwMarkObject( &_this->NuOfCircuitsObserver );
  EwMarkObjects( _this->SampleController );
  EwMarkObject( &_this->Btn_Config );
  EwMarkObject( &_this->Btn_NewWell );
  EwMarkObject( _this->Config );
  EwMarkObject( &_this->Btn_StopAll );
  EwMarkObject( &_this->RemainingTime );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationControllMenu_UpdateLayout( ApplicationControllMenu _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationControllMenu_UpdateViewState( ApplicationControllMenu _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationControllMenu_onNuOfCircuits( ApplicationControllMenu _this, XObject 
  sender )
{
  XInt32 i;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  for ( i = 0; i < 6; i = i + 1 )
  {
    CoreGroup_OnSetVisible((CoreGroup)_this->SampleController[ EwCheckIndex( i, 
    6 )], 0 );
    CoreGroup_OnSetEnabled((CoreGroup)_this->SampleController[ EwCheckIndex( i, 
    6 )], 0 );
  }

  for ( i = 0; i < EwGetAutoObject( &DeviceDevice, DeviceDeviceClass )->NuOfCircuits; 
       i = i + 1 )
  {
    CoreGroup_OnSetVisible((CoreGroup)_this->SampleController[ EwCheckIndex( i, 
    6 )], 1 );
    CoreGroup_OnSetEnabled((CoreGroup)_this->SampleController[ EwCheckIndex( i, 
    6 )], 1 );
  }
}

/* 'C' function for method : 'Application::ControllMenu.onBtn_Config()' */
void ApplicationControllMenu_onBtn_Config( ApplicationControllMenu _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_OnSetVisible((CoreGroup)&_this->Config->ConfigBL, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Config->ConfigTR, 1 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Config->ConfigWaste, 1 );
  CoreGroup_OnSetVisible((CoreGroup)_this->Config, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Config->ConfigBL, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Config->ConfigTR, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Config->ConfigWaste, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)_this->Config, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)_this, 0 );
  CoreRectView__OnSetBounds( _this->Config, EwSetRectX1( _this->Config->Super2.Bounds, 
  0 ));
  CoreRectView__OnSetBounds( _this->Config, EwSetRectY1( _this->Config->Super2.Bounds, 
  0 ));
}

/* 'C' function for method : 'Application::ControllMenu.onBtn_NewWell()' */
void ApplicationControllMenu_onBtn_NewWell( ApplicationControllMenu _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  DeviceDeviceClass_OnSetNewWell( EwGetAutoObject( &DeviceDevice, DeviceDeviceClass 
  ), 1 );
}

/* 'C' function for method : 'Application::ControllMenu.OnSetConfig()' */
void ApplicationControllMenu_OnSetConfig( ApplicationControllMenu _this, ApplicationConfig 
  value )
{
  if ( _this->Config == value )
    return;

  _this->Config = value;
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationControllMenu_onRemainingTime( ApplicationControllMenu _this, XObject 
  sender )
{
  DeviceRemainingTimeContext context;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  context = EwCastObject( _this->RemainingTime.Context, DeviceRemainingTimeContext 
  );
  ApplicationSampleController_OnSetRemainingTime( _this->SampleController[ EwCheckIndex( 
  context->CircuitNumber, 6 )], context->RemainingTime );
}

/* Variants derived from the class : 'Application::ControllMenu' */
EW_DEFINE_CLASS_VARIANTS( ApplicationControllMenu )
EW_END_OF_CLASS_VARIANTS( ApplicationControllMenu )

/* Virtual Method Table (VMT) for the class : 'Application::ControllMenu' */
EW_DEFINE_CLASS( ApplicationControllMenu, CoreGroup, "Application::ControllMenu" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ApplicationControllMenu_UpdateLayout,
  ApplicationControllMenu_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationControllMenu )

/* Embedded Wizard */
