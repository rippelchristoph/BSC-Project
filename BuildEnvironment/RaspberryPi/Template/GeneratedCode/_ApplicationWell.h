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

#ifndef _ApplicationWell_H
#define _ApplicationWell_H

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

#include "_ApplicationClock.h"
#include "_ApplicationWellLabel.h"
#include "_ApplicationWellPart.h"
#include "_CoreGroup.h"
#include "_CorePropertyObserver.h"
#include "_CoreSystemEventHandler.h"
#include "_ViewsRectangle.h"
#include "_ViewsWarpImage.h"

/* Forward declaration of the class Application::Well */
#ifndef _ApplicationWell_
  EW_DECLARE_CLASS( ApplicationWell )
#define _ApplicationWell_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* Deklaration of class : 'Application::Well' */
EW_DEFINE_FIELDS( ApplicationWell, CoreGroup )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( A1,              ApplicationWellPart )
  EW_OBJECT  ( B1,              ApplicationWellPart )
  EW_OBJECT  ( C1,              ApplicationWellPart )
  EW_OBJECT  ( D1,              ApplicationWellPart )
  EW_OBJECT  ( E1,              ApplicationWellPart )
  EW_OBJECT  ( F1,              ApplicationWellPart )
  EW_OBJECT  ( A2,              ApplicationWellPart )
  EW_OBJECT  ( B2,              ApplicationWellPart )
  EW_OBJECT  ( C2,              ApplicationWellPart )
  EW_OBJECT  ( D2,              ApplicationWellPart )
  EW_OBJECT  ( E2,              ApplicationWellPart )
  EW_OBJECT  ( F2,              ApplicationWellPart )
  EW_OBJECT  ( A3,              ApplicationWellPart )
  EW_OBJECT  ( B3,              ApplicationWellPart )
  EW_OBJECT  ( C3,              ApplicationWellPart )
  EW_OBJECT  ( D3,              ApplicationWellPart )
  EW_OBJECT  ( E3,              ApplicationWellPart )
  EW_OBJECT  ( F3,              ApplicationWellPart )
  EW_OBJECT  ( A4,              ApplicationWellPart )
  EW_OBJECT  ( B4,              ApplicationWellPart )
  EW_OBJECT  ( C4,              ApplicationWellPart )
  EW_OBJECT  ( D4,              ApplicationWellPart )
  EW_OBJECT  ( E4,              ApplicationWellPart )
  EW_OBJECT  ( F4,              ApplicationWellPart )
  EW_OBJECT  ( A5,              ApplicationWellPart )
  EW_OBJECT  ( B5,              ApplicationWellPart )
  EW_OBJECT  ( C5,              ApplicationWellPart )
  EW_OBJECT  ( D5,              ApplicationWellPart )
  EW_OBJECT  ( E5,              ApplicationWellPart )
  EW_OBJECT  ( F5,              ApplicationWellPart )
  EW_OBJECT  ( A6,              ApplicationWellPart )
  EW_OBJECT  ( B6,              ApplicationWellPart )
  EW_OBJECT  ( C6,              ApplicationWellPart )
  EW_OBJECT  ( D6,              ApplicationWellPart )
  EW_OBJECT  ( E6,              ApplicationWellPart )
  EW_OBJECT  ( F6,              ApplicationWellPart )
  EW_OBJECT  ( A7,              ApplicationWellPart )
  EW_OBJECT  ( B7,              ApplicationWellPart )
  EW_OBJECT  ( C7,              ApplicationWellPart )
  EW_OBJECT  ( D7,              ApplicationWellPart )
  EW_OBJECT  ( E7,              ApplicationWellPart )
  EW_OBJECT  ( F7,              ApplicationWellPart )
  EW_OBJECT  ( A8,              ApplicationWellPart )
  EW_OBJECT  ( B8,              ApplicationWellPart )
  EW_OBJECT  ( C8,              ApplicationWellPart )
  EW_OBJECT  ( D8,              ApplicationWellPart )
  EW_OBJECT  ( E8,              ApplicationWellPart )
  EW_OBJECT  ( F8,              ApplicationWellPart )
  EW_OBJECT  ( Time,            ApplicationClock )
  EW_ARRAY   ( WellPartArray,   ApplicationWellPart, [8][6])
  EW_OBJECT  ( WellLabel,       ApplicationWellLabel )
  EW_OBJECT  ( WellLabel1,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabel2,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabel3,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabel4,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabel5,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabel6,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabel7,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabelA,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabelB,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabelC,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabelD,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabelE,      ApplicationWellLabel )
  EW_OBJECT  ( WellLabelF,      ApplicationWellLabel )
  EW_OBJECT  ( NewWellObserver, CorePropertyObserver )
  EW_ARRAY   ( WellLabelArray,  ApplicationWellLabel, [6])
  EW_OBJECT  ( SampleCollected, CoreSystemEventHandler )
  EW_OBJECT  ( Logo,            ViewsWarpImage )
EW_END_OF_FIELDS( ApplicationWell )

/* Virtual Method Table (VMT) for the class : 'Application::Well' */
EW_DEFINE_METHODS( ApplicationWell, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( ApplicationWell _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( ApplicationWell _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ApplicationWell )

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationWell_UpdateLayout( ApplicationWell _this, XPoint aSize );

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
void ApplicationWell_UpdateViewState( ApplicationWell _this, XSet aState );

/* Writes the given Time in the chosen WellPart */
void ApplicationWell_timeToWellPart( ApplicationWell _this, XInt32 aCircuitNumber, 
  XInt32 aColumn, XInt32 aRow, XString aTime );

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationWell_onNewWell( ApplicationWell _this, XObject sender );

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationWell_onSampleCollected( ApplicationWell _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationWell_H */

/* Embedded Wizard */
