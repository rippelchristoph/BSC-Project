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
#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_EffectsEffectTimerClass.h"
#include "_GraphicsCanvas.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000012, /* ratio 111.11 % */
  0xB8000F00, 0x00000452, 0x1A130717, 0x2020085C, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0001 = { 0, 0 };
static const XRect _Const0002 = {{ 0, 0 }, { 0, 0 }};
static const XPoint _Const0003 = { 65535, 65535 };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0003 };

/* Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__Init( ViewsRectangle _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsRectangle );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
}

/* Re-Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__ReInit( ViewsRectangle _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Rectangle' */
void ViewsRectangle__Done( ViewsRectangle _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsRectangle );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Rectangle' */
void ViewsRectangle__Mark( ViewsRectangle _this )
{
  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsRectangle_Draw( ViewsRectangle _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;

  if ( aOpacity < 256 )
  {
    XColor ctl = _this->ColorTL;
    XColor ctr = _this->ColorTR;
    XColor cbl = _this->ColorBL;
    XColor cbr = _this->ColorBR;
    ctl.Alpha = (XUInt8)(( aOpacity * ctl.Alpha ) >> 8 );
    ctr.Alpha = (XUInt8)(( aOpacity * ctr.Alpha ) >> 8 );
    cbl.Alpha = (XUInt8)(( aOpacity * cbl.Alpha ) >> 8 );
    cbr.Alpha = (XUInt8)(( aOpacity * cbr.Alpha ) >> 8 );
    GraphicsCanvas_FillRectangle( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), ctl, ctr, cbr, cbl, aBlend );
  }
  else
    GraphicsCanvas_FillRectangle( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->ColorTL, _this->ColorTR, _this->ColorBR, _this->ColorBL, aBlend 
    );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColor()' */
void ViewsRectangle_OnSetColor( ViewsRectangle _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Rectangle' */
EW_DEFINE_CLASS_VARIANTS( ViewsRectangle )
EW_END_OF_CLASS_VARIANTS( ViewsRectangle )

/* Virtual Method Table (VMT) for the class : 'Views::Rectangle' */
EW_DEFINE_CLASS( ViewsRectangle, CoreRectView, "Views::Rectangle" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsRectangle_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsRectangle )

/* Initializer for the class 'Views::Frame' */
void ViewsFrame__Init( ViewsFrame _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsFrame );

  /* ... and initialize objects, variables, properties, etc. */
  _this->animFrameNumber = -1;
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
  _this->Endless = 1;
  _this->Edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft 
  | GraphicsEdgesRight | GraphicsEdgesTop;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::Frame' */
void ViewsFrame__ReInit( ViewsFrame _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Frame' */
void ViewsFrame__Done( ViewsFrame _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsFrame );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Frame' */
void ViewsFrame__Mark( ViewsFrame _this )
{
  EwMarkObject( _this->timer );
  EwMarkSlot( _this->OnFinished );
  EwMarkObject( _this->Bitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsFrame_Draw( ViewsFrame _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = _this->FrameNumber;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XInt32 opacity;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  ctl = _this->ColorTL;
  ctr = _this->ColorTR;
  cbr = _this->ColorBR;
  cbl = _this->ColorBL;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  GraphicsCanvas_DrawBitmapFrame( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
  _this->Super1.Bounds, aOffset ), _this->Edges, ctl, ctr, cbr, cbl, aBlend );
}

/* 'C' function for method : 'Views::Frame.observerSlot()' */
void ViewsFrame_observerSlot( ViewsFrame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.timerSlot()' */
void ViewsFrame_timerSlot( ViewsFrame _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 
      ))
    _this->startTime = _this->timer->Time - ( _this->FrameNumber * _this->Bitmap->FrameDelay 
    );

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );

      if ( !_this->Endless )
      {
        frameNr = _this->Bitmap->NoOfFrames - 1;
        period = 0;
      }
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super2.Owner != 0 )) && 
      (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
    EwSignal( _this->OnFinished, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::Frame.OnSetColor()' */
void ViewsFrame_OnSetColor( ViewsFrame _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.OnSetAnimated()' */
void ViewsFrame_OnSetAnimated( ViewsFrame _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass 
    ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsFrame_timerSlot ), ((XObject)_this ));
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.OnSetBitmap()' */
void ViewsFrame_OnSetBitmap( ViewsFrame _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsFrame_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsFrame_OnSetAnimated( _this, 0 );
    ViewsFrame_OnSetAnimated( _this, 1 );
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Frame' */
EW_DEFINE_CLASS_VARIANTS( ViewsFrame )
EW_END_OF_CLASS_VARIANTS( ViewsFrame )

/* Virtual Method Table (VMT) for the class : 'Views::Frame' */
EW_DEFINE_CLASS( ViewsFrame, CoreRectView, "Views::Frame" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsFrame_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsFrame )

/* Initializer for the class 'Views::Image' */
void ViewsImage__Init( ViewsImage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsImage );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Quality = 1;
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
  _this->Endless = 1;
  _this->Alignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::Image' */
void ViewsImage__ReInit( ViewsImage _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Image' */
void ViewsImage__Done( ViewsImage _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsImage );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Image' */
void ViewsImage__Mark( ViewsImage _this )
{
  EwMarkObject( _this->timer );
  EwMarkSlot( _this->OnFinished );
  EwMarkObject( _this->Bitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsImage_Draw( ViewsImage _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = _this->FrameNumber;
  XRect area;
  XPoint size;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XInt32 opacity;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  area = ViewsImage_GetContentArea( _this );
  size = _this->Bitmap->FrameSize;

  if ( EwIsRectEmpty( area ))
    return;

  ctl = _this->ColorTL;
  ctr = _this->ColorTR;
  cbr = _this->ColorBR;
  cbl = _this->ColorBL;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ( !EwCompPoint( EwGetRectSize( area ), size ))
    GraphicsCanvas_CopyBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
    _this->Super1.Bounds, aOffset ), EwMovePointNeg( _this->Super1.Bounds.Point1, 
    area.Point1 ), ctl, ctr, cbr, cbl, aBlend );
  else
    GraphicsCanvas_ScaleBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
    area, aOffset ), EwNewRect2Point( _Const0001, size ), ctl, ctr, cbr, cbl, aBlend, 
    _this->Quality );
}

/* 'C' function for method : 'Views::Image.observerSlot()' */
void ViewsImage_observerSlot( ViewsImage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ((( _this->AutoSize && ( _this->Bitmap != 0 )) && ( _this->Bitmap->FrameSize.X 
      > 0 )) && ( _this->Bitmap->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsImage_GetContentArea( 
    _this ), _this->ScrollOffset ));

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.timerSlot()' */
void ViewsImage_timerSlot( ViewsImage _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 
      ))
    _this->startTime = _this->timer->Time - ( _this->FrameNumber * _this->Bitmap->FrameDelay 
    );

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );

      if ( !_this->Endless )
      {
        frameNr = _this->Bitmap->NoOfFrames - 1;
        period = 0;
      }
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super2.Owner != 0 )) && 
      (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
    EwSignal( _this->OnFinished, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::Image.OnSetAutoSize()' */
void ViewsImage_OnSetAutoSize( ViewsImage _this, XBool value )
{
  if ( value == _this->AutoSize )
    return;

  _this->AutoSize = value;

  if ((( value && ( _this->Bitmap != 0 )) && ( _this->Bitmap->FrameSize.X > 0 )) 
      && ( _this->Bitmap->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsImage_GetContentArea( 
    _this ), _this->ScrollOffset ));
}

/* 'C' function for method : 'Views::Image.OnSetColor()' */
void ViewsImage_OnSetColor( ViewsImage _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetAnimated()' */
void ViewsImage_OnSetAnimated( ViewsImage _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass 
    ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsImage_timerSlot ), ((XObject)_this ));
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetAlignment()' */
void ViewsImage_OnSetAlignment( ViewsImage _this, XSet value )
{
  if ( value == _this->Alignment )
    return;

  _this->Alignment = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetFrameNumber()' */
void ViewsImage_OnSetFrameNumber( ViewsImage _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if (( value == _this->FrameNumber ) && ( _this->animFrameNumber == -1 ))
    return;

  _this->FrameNumber = value;

  if ( _this->timer == 0 )
    _this->animFrameNumber = -1;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetBitmap()' */
void ViewsImage_OnSetBitmap( ViewsImage _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsImage_OnSetAnimated( _this, 0 );
    ViewsImage_OnSetAnimated( _this, 1 );
  }

  if ((( _this->AutoSize && ( value != 0 )) && ( value->FrameSize.X > 0 )) && ( 
      value->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsImage_GetContentArea( 
    _this ), _this->ScrollOffset ));

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the bitmap. This area is expressed in coordinates relative 
   to the top-left corner of the view's @Owner. The method takes in account all 
   properties which do affect the position and the alignment of the bitmap, e.g. 
   @Alignment or @ScrollOffset. */
XRect ViewsImage_GetContentArea( ViewsImage _this )
{
  XSet align;
  XPoint size;
  XRect rd;
  XRect rs;

  if ( _this->Bitmap == 0 )
    return _Const0002;

  align = _this->Alignment;
  size = _this->Bitmap->FrameSize;
  rd = _this->Super1.Bounds;
  rs = rd;

  if (( size.X == 0 ) || ( size.Y == 0 ))
    return _Const0002;

  if ((( align & ViewsImageAlignmentScaleToFill ) == ViewsImageAlignmentScaleToFill 
      ))
  {
    XInt32 scaleX = (( EwGetRectSize( rd ).X << 16 ) + ( size.X / 2 )) / size.X;
    XInt32 scaleY = (( EwGetRectSize( rd ).Y << 16 ) + ( size.Y / 2 )) / size.Y;
    XInt32 scale = scaleX;

    if ( scaleY > scale )
      scale = scaleY;

    rs = EwSetRectSize( rs, EwSetPointX( EwGetRectSize( rs ), (( size.X * scale 
    ) + 32768 ) >> 16 ));
    rs = EwSetRectSize( rs, EwSetPointY( EwGetRectSize( rs ), (( size.Y * scale 
    ) + 32768 ) >> 16 ));
  }
  else
    if ((( align & ViewsImageAlignmentScaleToFit ) == ViewsImageAlignmentScaleToFit 
        ))
    {
      XInt32 scaleX = (( EwGetRectSize( rd ).X << 16 ) + ( size.X / 2 )) / size.X;
      XInt32 scaleY = (( EwGetRectSize( rd ).Y << 16 ) + ( size.Y / 2 )) / size.Y;
      XInt32 scale = scaleX;

      if ( scaleY < scale )
        scale = scaleY;

      rs = EwSetRectSize( rs, EwSetPointX( EwGetRectSize( rs ), (( size.X * scale 
      ) + 32768 ) >> 16 ));
      rs = EwSetRectSize( rs, EwSetPointY( EwGetRectSize( rs ), (( size.Y * scale 
      ) + 32768 ) >> 16 ));
    }
    else
      if ( !(( align & ViewsImageAlignmentStretchToFill ) == ViewsImageAlignmentStretchToFill 
          ))
        rs = EwSetRectSize( rs, size );

  if ( EwGetRectSize( rs ).X != EwGetRectSize( rd ).X )
  {
    if ((( align & ViewsImageAlignmentAlignHorzRight ) == ViewsImageAlignmentAlignHorzRight 
        ))
      rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point2.X - EwGetRectSize( 
      rs ).X ));
    else
      if ((( align & ViewsImageAlignmentAlignHorzCenter ) == ViewsImageAlignmentAlignHorzCenter 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point1.X + (( EwGetRectSize( 
        rd ).X - EwGetRectSize( rs ).X ) / 2 )));
  }

  if ( EwGetRectSize( rs ).Y != EwGetRectSize( rd ).Y )
  {
    if ((( align & ViewsImageAlignmentAlignVertBottom ) == ViewsImageAlignmentAlignVertBottom 
        ))
      rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point2.Y - EwGetRectSize( 
      rs ).Y ));
    else
      if ((( align & ViewsImageAlignmentAlignVertCenter ) == ViewsImageAlignmentAlignVertCenter 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point1.Y + (( EwGetRectSize( 
        rd ).Y - EwGetRectSize( rs ).Y ) / 2 )));
  }

  return EwMoveRectPos( rs, _this->ScrollOffset );
}

/* Variants derived from the class : 'Views::Image' */
EW_DEFINE_CLASS_VARIANTS( ViewsImage )
EW_END_OF_CLASS_VARIANTS( ViewsImage )

/* Virtual Method Table (VMT) for the class : 'Views::Image' */
EW_DEFINE_CLASS( ViewsImage, CoreRectView, "Views::Image" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsImage_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsImage )

/* Initializer for the class 'Views::Text' */
void ViewsText__Init( ViewsText _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsText );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
  _this->Alignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::Text' */
void ViewsText__ReInit( ViewsText _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Text' */
void ViewsText__Done( ViewsText _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsText );

  /* Release all used strings */
  EwReleaseString( &_this->flowString );
  EwReleaseString( &_this->String );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Text' */
void ViewsText__Mark( ViewsText _this )
{
  EwMarkSlot( _this->OnUpdate );
  EwMarkObject( _this->Font );

  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ViewsText_Draw( ViewsText _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XSet align;
  ResourcesFont font;
  XRect rd;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XInt32 opacity;
  XInt32 noOfRows;
  XRect area;
  XPoint ofs;
  XInt32 leading;
  XInt32 rowHeight;
  XInt32 y;
  XInt32 i;
  XInt32 c;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aBlend );

  if ( !EwCompString( _this->flowString, 0 ) || ( _this->Font == 0 ))
    return;

  align = _this->Alignment;
  font = _this->Font;
  rd = EwMoveRectPos( _this->Super1.Bounds, aOffset );
  ctl = _this->ColorTL;
  ctr = _this->ColorTR;
  cbr = _this->ColorBR;
  cbl = _this->ColorBL;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  noOfRows = EwGetStringChar( _this->flowString, 0 );
  area = EwMoveRectPos( ViewsText_GetContentArea( _this ), aOffset );
  ofs = EwMovePointNeg( EwMovePointNeg( rd.Point1, area.Point1 ), EwNewPoint( 0, 
  font->Ascent ));

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ( noOfRows == 1 )
  {
    XInt32 count = EwGetStringChar( _this->flowString, 1 ) - 2;

    if ( EwGetStringChar( _this->flowString, count + 2 ) == 0x000A )
      count = count - 1;

    GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, 3, count, 
    rd, ofs, 0, ctl, ctr, cbr, cbl, 1 );
  }

  if ( noOfRows < 2 )
    return;

  leading = font->Leading;

  if ( _this->RowDistance > 0 )
    leading = ( _this->RowDistance - font->Ascent ) - font->Descent;

  rowHeight = ( font->Ascent + font->Descent ) + leading;
  y = area.Point1.Y;
  i = 1;
  c = EwGetStringChar( _this->flowString, i );

  while ((( y + rowHeight ) < aClip.Point1.Y ) && ( c > 0 ))
  {
    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }

  while (( y < aClip.Point2.Y ) && ( c > 0 ))
  {
    XInt32 cc = c - 2;
    XPoint ofs2 = ofs;
    ofs2.Y = (( ofs2.Y + area.Point1.Y ) - y );

    if ( EwGetStringChar( _this->flowString, ( i + c ) - 1 ) == 0x000A )
      cc = cc - 1;

    if ( cc <= 0 )
      ;
    else
      if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
          ))
      {
        if (( cc < ( c - 2 )) || ( EwGetStringChar( _this->flowString, i + c ) == 
            0x0000 ))
          GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 
          2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );
        else
          GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 
          2, cc, rd, ofs2, EwGetRectW( area ), ctl, ctr, cbr, cbl, 1 );
      }
      else
        if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight 
            ))
        {
          XRect r = ResourcesFont_GetTextExtent( font, _this->flowString, i + 2, 
            cc );

          if ( r.Point1.X > 0 )
            ofs2.X = (( ofs2.X - EwGetRectW( area )) + r.Point2.X );
          else
            ofs2.X = (( ofs2.X - EwGetRectW( area )) + EwGetRectW( r ));

          GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 
          2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );
        }
        else
          if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter 
              ))
          {
            XRect r = ResourcesFont_GetTextExtent( font, _this->flowString, i + 
              2, cc );
            XInt32 tw;

            if ( r.Point1.X > 0 )
              tw = r.Point2.X;
            else
              tw = EwGetRectW( r );

            ofs2.X = ( ofs2.X - (( EwGetRectW( area ) - tw ) / 2 ));
            GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i 
            + 2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );
          }
          else
            GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i 
            + 2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );

    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }
}

/* 'C' function for method : 'Views::Text.OnSetBounds()' */
void ViewsText_OnSetBounds( ViewsText _this, XRect value )
{
  if ( !EwCompRect( value, _this->Super1.Bounds ))
    return;

  if ((((( EwGetRectW( _this->Super1.Bounds ) != EwGetRectW( value )) && ( _this->WrapWidth 
      == 0 )) && _this->WrapText ) && ( EwCompString( _this->flowString, 0 ) != 
      0 )) && !(( _this->Super2.viewState & CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout 
      ))
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ((( _this->Ellipsis && ( EwCompString( _this->flowString, 0 ) != 0 )) && EwCompPoint( 
      EwGetRectSize( _this->Super1.Bounds ), EwGetRectSize( value ))) && !(( _this->Super2.viewState 
      & CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  CoreRectView_OnSetBounds((CoreRectView)_this, value );
  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.preOnUpdateSlot()' */
void ViewsText_preOnUpdateSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.preReparseSlot()' */
void ViewsText_preReparseSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.reparseSlot()' */
void ViewsText_reparseSlot( ViewsText _this, XObject sender )
{
  XPoint area;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( _this->flowString, 0 ) != 0 )
    return;

  area = _Const0003;

  if ( _this->WrapText )
  {
    if ( _this->WrapWidth > 0 )
      area.X = _this->WrapWidth;
    else
      area.X = EwGetRectW( _this->Super1.Bounds );
  }

  if (( EwCompString( _this->String, 0 ) != 0 ) && ( _this->Font != 0 ))
    EwRetainString( &_this->flowString, ResourcesFont_ParseFlowString( _this->Font, 
    _this->String, 0, area ));
  else
    EwReleaseString( &_this->flowString );

  _this->textSize = _Const0001;

  if ( _this->AutoSize && ( EwCompString( _this->flowString, 0 ) != 0 ))
  {
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateUpdatingLayout;
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsText_GetContentArea( _this 
    ), _this->ScrollOffset ));
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateUpdatingLayout;
  }

  if (( _this->Ellipsis && ( EwCompString( _this->flowString, 0 ) != 0 )) && !_this->AutoSize )
  {
    XSet align = _this->Alignment;
    ResourcesFont font = _this->Font;
    XInt32 leading = font->Leading;
    XRect bounds = _this->Super1.Bounds;
    XString tmp = _this->flowString;
    XInt32 rh;
    XInt32 noOfRows;
    XInt32 maxNoOfRows;
    XBool clipF;
    XBool clipL;
    XInt32 row;
    XInt32 inx;
    XInt32 maxW;
    XString ellipStr;
    XInt32 ellipAdv;

    if ( _this->RowDistance > 0 )
      leading = ( _this->RowDistance - font->Ascent ) - font->Descent;

    rh = ( font->Ascent + font->Descent ) + leading;
    noOfRows = EwGetStringChar( tmp, 0 );
    maxNoOfRows = ( EwGetRectH( bounds ) + leading ) / rh;
    clipF = 0;
    clipL = 0;

    if ( maxNoOfRows <= 0 )
      maxNoOfRows = 1;

    if ( noOfRows > maxNoOfRows )
    {
      XInt32 rowF = 0;
      XInt32 rowL = noOfRows;
      XInt32 row = 0;
      XInt32 inxF;
      XInt32 inxL;

      if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom 
          ))
        rowF = noOfRows - maxNoOfRows;
      else
        if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter 
            ))
        {
          rowF = ( noOfRows - maxNoOfRows ) / 2;
          rowL = rowF + maxNoOfRows;
        }
        else
          rowL = maxNoOfRows;

      clipF = (XBool)( rowF > 0 );
      clipL = (XBool)( rowL < noOfRows );

      for ( inxF = 1; row < rowF; row = row + 1 )
        inxF = inxF + EwGetStringChar( tmp, inxF );

      for ( inxL = inxF; row < rowL; row = row + 1 )
        inxL = inxL + EwGetStringChar( tmp, inxL );

      tmp = EwConcatCharString((XChar)maxNoOfRows, EwStringMiddle( tmp, inxF, inxL 
      - inxF ));
    }

    noOfRows = EwGetStringChar( tmp, 0 );
    row = 0;
    inx = 1;
    maxW = EwGetRectW( bounds );
    ellipStr = EwLoadString( &_Const0004 );
    ellipAdv = ResourcesFont_GetTextAdvance( font, ellipStr, 0, -1 );

    if ( _this->WrapText && ( _this->WrapWidth > 0 ))
      maxW = _this->WrapWidth;

    for (; row < noOfRows; row = row + 1 )
    {
      XInt32 len = EwGetStringChar( tmp, inx );
      XString text = EwShareString( EwStringMiddle( tmp, inx + 2, len - 2 ));
      XBool ellipF = (XBool)( clipF && ( row == 0 ));
      XBool ellipL = (XBool)( clipL && ( row == ( noOfRows - 1 )));
      XBool newLine = (XBool)(( len > 2 ) && ( EwGetStringChar( text, len - 3 ) 
        == 0x000A ));
      XInt32 w;
      XInt32 inxF;
      XInt32 inxL;

      if ( newLine )
        text = EwStringRemove( text, len - 3, 1 );

      w = ResourcesFont_GetTextAdvance( font, text, 0, -1 );
      inxF = 0;
      inxL = EwGetStringLength( text );

      if ( w > maxW )
      {
        if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight 
            ))
          ellipF = 1;
        else
          if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter 
              ))
          {
            ellipF = 1;
            ellipL = 1;
          }
          else
            ellipL = 1;
      }

      if ( ellipF )
        w = w + ellipAdv;

      if ( ellipL )
        w = w + ellipAdv;

      while (( w > maxW ) && ( inxF < inxL ))
      {
        if (( ellipF && ( w > maxW )) && ( inxF < inxL ))
        {
          w = w - ResourcesFont_GetGlyphAdvance( font, EwGetStringChar( text, inxF 
          ));
          inxF = inxF + 1;
        }

        if (( ellipL && ( w > maxW )) && ( inxF < inxL ))
        {
          inxL = inxL - 1;
          w = w - ResourcesFont_GetGlyphAdvance( font, EwGetStringChar( text, inxL 
          ));
        }
      }

      if (( inxF > 0 ) || ( inxL < EwGetStringLength( text )))
        text = EwStringMiddle( text, inxF, inxL - inxF );

      if ( ellipF )
        text = EwConcatString( ellipStr, text );

      if ( ellipL )
        text = EwConcatString( text, ellipStr );

      if ( ellipF || ellipL )
      {
        if ( newLine )
          text = EwConcatStringChar( text, 0x000A );

        tmp = EwStringRemove( tmp, inx + 2, len - 2 );
        tmp = EwShareString( EwStringInsert( tmp, text, inx + 2 ));
        len = EwGetStringLength( text ) + 2;
        tmp = EwSetStringChar( tmp, inx, (XChar)len );
      }

      inx = inx + len;
    }

    _this->textSize = ResourcesFont_GetFlowTextSize( font, tmp );

    if ( _this->RowDistance > 0 )
      _this->textSize.Y = (( EwGetStringChar( tmp, 0 ) * _this->RowDistance ) - 
      leading );

    EwRetainString( &_this->flowString, tmp );
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetAutoSize()' */
void ViewsText_OnSetAutoSize( ViewsText _this, XBool value )
{
  if ( value == _this->AutoSize )
    return;

  _this->AutoSize = value;

  if ( value && _this->Ellipsis )
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ( value && ( EwCompString( _this->flowString, 0 ) != 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsText_GetContentArea( _this 
    ), _this->ScrollOffset ));
}

/* 'C' function for method : 'Views::Text.OnSetAlignment()' */
void ViewsText_OnSetAlignment( ViewsText _this, XSet value )
{
  if ( value == _this->Alignment )
    return;

  _this->Alignment = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  if ( _this->Ellipsis )
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ( EwCompString( _this->flowString, 0 ) != 0 )
    EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this 
      ));
}

/* 'C' function for method : 'Views::Text.OnSetString()' */
void ViewsText_OnSetString( ViewsText _this, XString value )
{
  if ( !EwCompString( value, _this->String ))
    return;

  EwRetainString( &_this->String, value );
  EwReleaseString( &_this->flowString );
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetFont()' */
void ViewsText_OnSetFont( ViewsText _this, ResourcesFont value )
{
  if ( value == _this->Font )
    return;

  _this->Font = value;
  EwReleaseString( &_this->flowString );
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetColor()' */
void ViewsText_OnSetColor( ViewsText _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Text.OnSetVisible()' */
void ViewsText_OnSetVisible( ViewsText _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the text. This area is expressed in coordinates relative to 
   the top-left corner of the view's @Owner. The method takes in account all properties 
   which do affect the position and the alignment of the text, e.g. @Alignment, 
   @ScrollOffset, @WrapText, etc. */
XRect ViewsText_GetContentArea( ViewsText _this )
{
  XSet align;
  XRect rd;
  XRect rs;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0002;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( !EwCompString( _this->flowString, 0 ))
    return _Const0002;

  if ( !EwCompPoint( _this->textSize, _Const0001 ))
    _this->textSize = ResourcesFont_GetFlowTextSize( _this->Font, _this->flowString 
    );

  if ( _this->RowDistance > 0 )
    _this->textSize.Y = (((( EwGetStringChar( _this->flowString, 0 ) * _this->RowDistance 
    ) - _this->RowDistance ) + _this->Font->Ascent ) + _this->Font->Descent );

  align = _this->Alignment;
  rd = _this->Super1.Bounds;
  rs = EwNewRect2Point( rd.Point1, EwMovePointPos( rd.Point1, _this->textSize ));

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
      ))
  {
    XInt32 maxWidth = _this->WrapWidth;

    if ( maxWidth <= 0 )
      maxWidth = EwGetRectW( _this->Super1.Bounds );

    if ( maxWidth > EwGetRectW( rs ))
      rs = EwSetRectW( rs, maxWidth );
  }

  if ( EwGetRectW( rs ) != EwGetRectW( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
        ))
      ;
    else
      if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point2.X - EwGetRectW( 
        rs )));
      else
        if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter 
            ))
          rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point1.X + (( EwGetRectW( 
          rd ) - EwGetRectW( rs )) / 2 )));
  }

  if ( EwGetRectH( rs ) != EwGetRectH( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom 
        ))
      rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point2.Y - EwGetRectH( 
      rs )));
    else
      if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point1.Y + (( EwGetRectH( 
        rd ) - EwGetRectH( rs )) / 2 )));
  }

  return EwMoveRectPos( rs, _this->ScrollOffset );
}

/* Variants derived from the class : 'Views::Text' */
EW_DEFINE_CLASS_VARIANTS( ViewsText )
EW_END_OF_CLASS_VARIANTS( ViewsText )

/* Virtual Method Table (VMT) for the class : 'Views::Text' */
EW_DEFINE_CLASS( ViewsText, CoreRectView, "Views::Text" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsText_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  ViewsText_OnSetBounds,
EW_END_OF_CLASS( ViewsText )

/* Embedded Wizard */
