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
#include "_CoreOutline.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_FlatActionButton.h"
#include "_FlatHorzBar.h"
#include "_FlatHorzSlider.h"
#include "_FlatToggleButton.h"
#include "_ViewsRectangle.h"
#include "_XFlatIconButton.h"
#include "Application.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000009C, /* ratio 66.67 % */
  0xB8001300, 0x80000452, 0x00CA0026, 0x0EA00370, 0x01061880, 0x1058182C, 0x00869080,
  0xF00464E8, 0x88C3E166, 0x441A0902, 0x43A190A8, 0x8A271119, 0xA35188B4, 0x510C8EC6,
  0x71590C1A, 0x0030C6CA, 0x88346CE4, 0x9B41A280, 0x89C0012F, 0x8027C0A8, 0xB2700031,
  0x2154B001, 0xE7469019, 0x33B9CCDC, 0x0080C1A2, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 800, 480 }};
static const XColor _Const0001 = { 0x29, 0x2A, 0x29, 0xFF };
static const XRect _Const0002 = {{ 0, 0 }, { 140, 30 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0003 };
static const XRect _Const0004 = {{ 0, 420 }, { 160, 480 }};
static const XStringRes _Const0005 = { _StringsDefault0, 0x000C };
static const XRect _Const0006 = {{ 140, 0 }, { 280, 30 }};
static const XStringRes _Const0007 = { _StringsDefault0, 0x0017 };
static const XRect _Const0008 = {{ 640, 420 }, { 800, 480 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x0020 };
static const XRect _Const000A = {{ 10, 190 }, { 180, 240 }};
static const XRect _Const000B = {{ 10, 100 }, { 90, 130 }};
static const XStringRes _Const000C = { _StringsDefault0, 0x002B };
static const XRect _Const000D = {{ 10, 130 }, { 180, 200 }};
static const XRect _Const000E = {{ 100, 100 }, { 180, 130 }};
static const XStringRes _Const000F = { _StringsDefault0, 0x0034 };
static const XStringRes _Const0010 = { _StringsDefault0, 0x003C };
static const XStringRes _Const0011 = { _StringsDefault0, 0x0046 };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  FlatToggleButton__Init( &_this->ButtonMenu1, &_this->_XObject, 0 );
  XFlatIconButton__Init( &_this->Button1, &_this->_XObject, 0 );
  FlatToggleButton__Init( &_this->ButtonMenu2, &_this->_XObject, 0 );
  XFlatIconButton__Init( &_this->Button2, &_this->_XObject, 0 );
  FlatHorzBar__Init( &_this->BarRemainingTime, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->Timer, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->Start, &_this->_XObject, 0 );
  FlatHorzSlider__Init( &_this->HorzSlider, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->TimerMinuten, &_this->_XObject, 0 );
  FlatActionButton__Init( &_this->Stop, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0001 );
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->ButtonMenu1, _Const0002 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->ButtonMenu1, 1 );
  FlatToggleButton_OnSetActive( &_this->ButtonMenu1, 1 );
  FlatToggleButton_OnSetCaption( &_this->ButtonMenu1, EwLoadString( &_Const0003 
  ));
  CoreRectView__OnSetBounds( &_this->Button1, _Const0004 );
  XFlatIconButton_OnSetCaption( &_this->Button1, EwLoadString( &_Const0005 ));
  CoreRectView__OnSetBounds( &_this->ButtonMenu2, _Const0006 );
  FlatToggleButton_OnSetCaption( &_this->ButtonMenu2, EwLoadString( &_Const0007 
  ));
  CoreRectView__OnSetBounds( &_this->Button2, _Const0008 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Button2, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Button2, 0 );
  XFlatIconButton_OnSetCaption( &_this->Button2, EwLoadString( &_Const0009 ));
  CoreRectView__OnSetBounds( &_this->BarRemainingTime, _Const000A );
  FlatHorzBar_OnSetMaxValue( &_this->BarRemainingTime, 100 );
  FlatHorzBar_OnSetCurrentValue( &_this->BarRemainingTime, 0 );
  CoreRectView__OnSetBounds( &_this->Start, _Const000B );
  FlatActionButton_OnSetCaption( &_this->Start, EwLoadString( &_Const000C ));
  CoreRectView__OnSetBounds( &_this->HorzSlider, _Const000D );
  CoreTimer_OnSetPeriod( &_this->TimerMinuten, 600 );
  CoreTimer_OnSetEnabled( &_this->TimerMinuten, 0 );
  CoreRectView__OnSetBounds( &_this->Stop, _Const000E );
  FlatActionButton_OnSetCaption( &_this->Stop, EwLoadString( &_Const000F ));
  CoreRectView__OnSetBounds( &_this->Outline, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonMenu1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Button1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonMenu2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Button2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BarRemainingTime ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Start ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorzSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Stop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  _this->ButtonMenu1.OnSwitchOn = EwNewSlot( _this, ApplicationApplication_SlotMenu1On 
  );
  _this->Button1.OnAction = EwNewSlot( _this, ApplicationApplication_SlotTest );
  _this->ButtonMenu2.OnSwitchOn = EwNewSlot( _this, ApplicationApplication_SlotMenu2On 
  );
  _this->Button2.OnAction = EwNewSlot( _this, ApplicationApplication_SlotTest );
  _this->Timer.OnTrigger = EwNewSlot( _this, ApplicationApplication_SlotTimerTrigger 
  );
  _this->Start.OnAction = EwNewSlot( _this, ApplicationApplication_SlotStart );
  _this->TimerMinuten.OnTrigger = EwNewSlot( _this, ApplicationApplication_SlotTimerMinuten 
  );
  _this->Stop.OnAction = EwNewSlot( _this, ApplicationApplication_SlotStart );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  FlatToggleButton__ReInit( &_this->ButtonMenu1 );
  XFlatIconButton__ReInit( &_this->Button1 );
  FlatToggleButton__ReInit( &_this->ButtonMenu2 );
  XFlatIconButton__ReInit( &_this->Button2 );
  FlatHorzBar__ReInit( &_this->BarRemainingTime );
  CoreTimer__ReInit( &_this->Timer );
  FlatActionButton__ReInit( &_this->Start );
  FlatHorzSlider__ReInit( &_this->HorzSlider );
  CoreTimer__ReInit( &_this->TimerMinuten );
  FlatActionButton__ReInit( &_this->Stop );
  CoreOutline__ReInit( &_this->Outline );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  FlatToggleButton__Done( &_this->ButtonMenu1 );
  XFlatIconButton__Done( &_this->Button1 );
  FlatToggleButton__Done( &_this->ButtonMenu2 );
  XFlatIconButton__Done( &_this->Button2 );
  FlatHorzBar__Done( &_this->BarRemainingTime );
  CoreTimer__Done( &_this->Timer );
  FlatActionButton__Done( &_this->Start );
  FlatHorzSlider__Done( &_this->HorzSlider );
  CoreTimer__Done( &_this->TimerMinuten );
  FlatActionButton__Done( &_this->Stop );
  CoreOutline__Done( &_this->Outline );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Application' */
void ApplicationApplication__Mark( ApplicationApplication _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->ButtonMenu1 );
  EwMarkObject( &_this->Button1 );
  EwMarkObject( &_this->ButtonMenu2 );
  EwMarkObject( &_this->Button2 );
  EwMarkObject( &_this->BarRemainingTime );
  EwMarkObject( &_this->Timer );
  EwMarkObject( &_this->Start );
  EwMarkObject( &_this->HorzSlider );
  EwMarkObject( &_this->TimerMinuten );
  EwMarkObject( &_this->Stop );
  EwMarkObject( &_this->Outline );

  /* Give the super class a chance to mark its objects and references */
  CoreRoot__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::Application.SlotMenu1On()' */
void ApplicationApplication_SlotMenu1On( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  FlatToggleButton_OnSetActive( &_this->ButtonMenu2, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Button2, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Button2, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Button1, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Button1, 1 );
}

/* 'C' function for method : 'Application::Application.SlotMenu2On()' */
void ApplicationApplication_SlotMenu2On( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  FlatToggleButton_OnSetActive( &_this->ButtonMenu1, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Button1, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Button1, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Button2, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Button2, 1 );
}

/* 'C' function for method : 'Application::Application.SlotTest()' */
void ApplicationApplication_SlotTest( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const0010 ));
}

/* 'C' function for method : 'Application::Application.SlotStart()' */
void ApplicationApplication_SlotStart( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  FlatHorzBar_OnSetMaxValue( &_this->BarRemainingTime, _this->HorzSlider.CurrentValue 
  );
  CoreTimer_OnSetPeriod( &_this->Timer, _this->HorzSlider.CurrentValue * 600 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreTimer_OnSetEnabled( &_this->TimerMinuten, 1 );
  EwTrace( "%s", EwLoadString( &_Const0011 ));
}

/* 'C' function for method : 'Application::Application.SlotTimerMinuten()' */
void ApplicationApplication_SlotTimerMinuten( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  FlatHorzBar_OnSetCurrentValue( &_this->BarRemainingTime, _this->BarRemainingTime.CurrentValue 
  + 1 );
  EwTrace( "%i", _this->BarRemainingTime.CurrentValue );
}

/* 'C' function for method : 'Application::Application.SlotTimerTrigger()' */
void ApplicationApplication_SlotTimerTrigger( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNewSlot( &_this->TimerMinuten, CoreTimer_StopTimer );
  CoreTimer_OnSetEnabled( &_this->TimerMinuten, 0 );
  EwNewSlot( &_this->Timer, CoreTimer_StopTimer );
  CoreTimer_OnSetEnabled( &_this->Timer, 0 );
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

/* Embedded Wizard */
