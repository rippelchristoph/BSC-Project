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
#include "_CoreCursorEvent.h"
#include "_CoreCursorHit.h"
#include "_CoreDragEvent.h"
#include "_CoreEvent.h"
#include "_CoreGroup.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsEffectTimerClass.h"
#include "_GraphicsCanvas.h"
#include "_GraphicsWarpMatrix.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpGroup.h"
#include "_ViewsWarpImage.h"
#include "_ViewsWarpView.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x000001EA, /* ratio 55.51 % */
  0xB8000F00, 0x00000452, 0x1A130717, 0x20B030E4, 0xD0002A00, 0x00032800, 0x00298004,
  0x034800D8, 0x8AC4CC80, 0x01BC010F, 0x98C00750, 0x00912088, 0x4DC00308, 0xE51F8CC7,
  0x1061D000, 0x06868940, 0xC901CE39, 0x8A4CA352, 0x01E63D2C, 0x4BA47279, 0xD24F1497,
  0xE2D1E8F9, 0x96008D9D, 0xD2C8B44A, 0x14A81DA2, 0x8834229F, 0x8841A091, 0xC45A2912,
  0x47A391A8, 0x964721B1, 0x8015393C, 0x3D2E964A, 0xD328A46A, 0x309E4EA2, 0x397CAE7F,
  0x96D162D4, 0x65469380, 0x4729F20A, 0x62AD78A9, 0xE2D4F005, 0x771691D2, 0x5239949E,
  0x83BB46A3, 0x0915FA77, 0x97452978, 0xC002B74B, 0x90C01382, 0xBA2D2EBD, 0xA2D4B91C,
  0x6070BBC7, 0x383BECB2, 0x32BDE16C, 0xB0055363, 0xD6E0B633, 0x4480CD9C, 0x4967768C,
  0x726400DF, 0xC017591C, 0x8F9CE499, 0x3058B427, 0x3B8A4C2E, 0x5C174335, 0x8E4EE652,
  0x059ED157, 0x67FADC80, 0x8A860093, 0x202009AE, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0001 = { 1, 1 };
static const XPoint _Const0002 = { 0, 0 };
static const XRect _Const0003 = {{ 0, 0 }, { 0, 0 }};
static const XPoint _Const0004 = { 65535, 65535 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x000A };
static const XStringRes _Const0007 = { _StringsDefault0, 0x0026 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x004B };
static const XStringRes _Const0009 = { _StringsDefault0, 0x009E };

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

/* Initializer for the class 'Views::Line' */
void ViewsLine__Init( ViewsLine _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreLineView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsLine );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Width2 = 1;
  _this->Width1 = 1;
  _this->Color2 = _Const0000;
  _this->Color1 = _Const0000;
}

/* Re-Initializer for the class 'Views::Line' */
void ViewsLine__ReInit( ViewsLine _this )
{
  /* At first re-initialize the super class ... */
  CoreLineView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Line' */
void ViewsLine__Done( ViewsLine _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsLine );

  /* Don't forget to deinitialize the super class ... */
  CoreLineView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Line' */
void ViewsLine__Mark( ViewsLine _this )
{
  EwMarkObject( _this->whiteBitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreLineView__Mark( &_this->_Super );
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
void ViewsLine_Draw( ViewsLine _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 w1 = _this->Width1;
  XInt32 w2 = _this->Width2;
  XPoint p1 = EwMovePointPos( _this->Super1.Point1, aOffset );
  XPoint p2 = EwMovePointPos( _this->Super1.Point2, aOffset );
  XColor c1 = _this->Color1;
  XColor c2 = _this->Color2;

  if ( !EwCompPoint( p1, p2 ))
    return;

  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;

  if ( aOpacity < 256 )
  {
    c1.Alpha = (XUInt8)(( aOpacity * c1.Alpha ) >> 8 );
    c2.Alpha = (XUInt8)(( aOpacity * c2.Alpha ) >> 8 );
  }

  if (( w1 == 1 ) && ( w2 == 1 ))
    GraphicsCanvas_DrawLine( aCanvas, aClip, EwMovePointPos( _this->Super1.Point1, 
    aOffset ), EwMovePointPos( _this->Super1.Point2, aOffset ), c1, c2, aBlend );
  else
  {
    XFloat fw1 = (XFloat)w1 / 2.000000f;
    XFloat fw2 = (XFloat)w2 / 2.000000f;
    XFloat fp1X = (XFloat)p1.X;
    XFloat fp1Y = (XFloat)p1.Y;
    XFloat fp2X = (XFloat)p2.X;
    XFloat fp2Y = (XFloat)p2.Y;
    XFloat dirX = fp2X - fp1X;
    XFloat dirY = fp2Y - fp1Y;
    XFloat len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));
    dirX = dirX / len;
    dirY = dirY / len;
    GraphicsCanvas_FillPolygon( aCanvas, aClip, fp1X + ( dirY * fw1 ), fp1Y - ( 
    dirX * fw1 ), 1.000000f, fp2X + ( dirY * fw2 ), fp2Y - ( dirX * fw2 ), 1.000000f, 
    fp2X - ( dirY * fw2 ), fp2Y + ( dirX * fw2 ), 1.000000f, fp1X - ( dirY * fw1 
    ), fp1Y + ( dirX * fw1 ), 1.000000f, c1, c2, c2, c1, aBlend );
  }
}

/* The method GetExtent() returns the position and the size of the view relative 
   to the origin of its @Owner. In case of views with a non rectangular shape the 
   method returns the rectangular boundary area enclosing the entire shape. */
XRect ViewsLine_GetExtent( ViewsLine _this )
{
  XInt32 w1 = _this->Width1;
  XInt32 w2 = _this->Width2;
  XPoint p1 = _this->Super1.Point1;
  XPoint p2 = _this->Super1.Point2;
  XFloat fw1;
  XFloat fw2;
  XFloat fp1X;
  XFloat fp1Y;
  XFloat fp2X;
  XFloat fp2Y;
  XFloat dirX;
  XFloat dirY;
  XFloat len;
  XFloat c1x;
  XFloat c1y;
  XFloat c2x;
  XFloat c2y;
  XFloat c3x;
  XFloat c3y;
  XFloat c4x;
  XFloat c4y;
  XFloat left;
  XFloat right;
  XFloat top;
  XFloat bottom;
  XRect r;

  if ((( w1 == 1 ) && ( w2 == 1 )) || !EwCompPoint( p1, p2 ))
    return CoreLineView_GetExtent((CoreLineView)_this );

  fw1 = (XFloat)w1 / 2.000000f;
  fw2 = (XFloat)w2 / 2.000000f;
  fp1X = (XFloat)p1.X;
  fp1Y = (XFloat)p1.Y;
  fp2X = (XFloat)p2.X;
  fp2Y = (XFloat)p2.Y;
  dirX = fp2X - fp1X;
  dirY = fp2Y - fp1Y;
  len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));
  dirX = dirX / len;
  dirY = dirY / len;
  c1x = fp1X + ( dirY * fw1 );
  c1y = fp1Y - ( dirX * fw1 );
  c2x = fp2X + ( dirY * fw2 );
  c2y = fp2Y - ( dirX * fw2 );
  c3x = fp2X - ( dirY * fw2 );
  c3y = fp2Y + ( dirX * fw2 );
  c4x = fp1X - ( dirY * fw1 );
  c4y = fp1Y + ( dirX * fw1 );
  left = c1x;
  right = c1x;
  top = c1y;
  bottom = c1y;

  if ( c2x < left )
    left = c2x;

  if ( c3x < left )
    left = c3x;

  if ( c4x < left )
    left = c4x;

  if ( c2x > right )
    right = c2x;

  if ( c3x > right )
    right = c3x;

  if ( c4x > right )
    right = c4x;

  if ( c2y < top )
    top = c2y;

  if ( c3y < top )
    top = c3y;

  if ( c4y < top )
    top = c4y;

  if ( c2y > bottom )
    bottom = c2y;

  if ( c3y > bottom )
    bottom = c3y;

  if ( c4y > bottom )
    bottom = c4y;

  r = EwNewRect((XInt32)left, (XInt32)top, (XInt32)right, (XInt32)bottom );
  r.Point2 = EwMovePointPos( r.Point2, _Const0001 );
  return r;
}

/* 'C' function for method : 'Views::Line.observerSlot()' */
void ViewsLine_observerSlot( ViewsLine _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::Line.OnSetWidth2()' */
void ViewsLine_OnSetWidth2( ViewsLine _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if ( value == _this->Width2 )
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Width2 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if ((( value != 1 ) || ( _this->Width1 != 1 )) && ( _this->whiteBitmap == 0 ))
  {
    _this->whiteBitmap = EwLoadResource( &ResourcesWhiteBitmap, ResourcesBitmap 
    );

    if ( _this->whiteBitmap->Mutable )
      EwAttachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );
  }

  if ((( value == 1 ) && ( _this->Width1 == 1 )) && ( _this->whiteBitmap != 0 ))
  {
    if ( _this->whiteBitmap->Mutable )
      EwDetachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );

    _this->whiteBitmap = 0;
  }
}

/* 'C' function for method : 'Views::Line.OnSetWidth1()' */
void ViewsLine_OnSetWidth1( ViewsLine _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if ( value == _this->Width1 )
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Width1 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if ((( value != 1 ) || ( _this->Width2 != 1 )) && ( _this->whiteBitmap == 0 ))
  {
    _this->whiteBitmap = EwLoadResource( &ResourcesWhiteBitmap, ResourcesBitmap 
    );

    if ( _this->whiteBitmap->Mutable )
      EwAttachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );
  }

  if ((( value == 1 ) && ( _this->Width2 == 1 )) && ( _this->whiteBitmap != 0 ))
  {
    if ( _this->whiteBitmap->Mutable )
      EwDetachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );

    _this->whiteBitmap = 0;
  }
}

/* 'C' function for method : 'Views::Line.OnSetWidth()' */
void ViewsLine_OnSetWidth( ViewsLine _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if (( value == _this->Width1 ) && ( value == _this->Width2 ))
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Width1 = value;
  _this->Width2 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if (( value != 1 ) && ( _this->whiteBitmap == 0 ))
  {
    _this->whiteBitmap = EwLoadResource( &ResourcesWhiteBitmap, ResourcesBitmap 
    );

    if ( _this->whiteBitmap->Mutable )
      EwAttachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );
  }

  if (( value == 1 ) && ( _this->whiteBitmap != 0 ))
  {
    if ( _this->whiteBitmap->Mutable )
      EwDetachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );

    _this->whiteBitmap = 0;
  }
}

/* 'C' function for method : 'Views::Line.OnSetColor()' */
void ViewsLine_OnSetColor( ViewsLine _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color1 ) && !EwCompColor( value, _this->Color2 
      ))
    return;

  _this->Color1 = value;
  _this->Color2 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::Line.OnGetVisible()' */
XBool ViewsLine_OnGetVisible( ViewsLine _this )
{
  return (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
    );
}

/* 'C' function for method : 'Views::Line.OnSetVisible()' */
void ViewsLine_OnSetVisible( ViewsLine _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
}

/* Variants derived from the class : 'Views::Line' */
EW_DEFINE_CLASS_VARIANTS( ViewsLine )
EW_END_OF_CLASS_VARIANTS( ViewsLine )

/* Virtual Method Table (VMT) for the class : 'Views::Line' */
EW_DEFINE_CLASS( ViewsLine, CoreLineView, "Views::Line" )
  CoreLineView_initLayoutContext,
  CoreView_GetRoot,
  ViewsLine_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreLineView_ArrangeView,
  CoreLineView_MoveView,
  ViewsLine_GetExtent,
  CoreView_ChangeViewState,
EW_END_OF_CLASS( ViewsLine )

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

/* 'C' function for method : 'Views::Rectangle.OnSetVisible()' */
void ViewsRectangle_OnSetVisible( ViewsRectangle _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
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

/* Initializer for the class 'Views::Border' */
void ViewsBorder__Init( ViewsBorder _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsBorder );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Width = 1;
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
}

/* Re-Initializer for the class 'Views::Border' */
void ViewsBorder__ReInit( ViewsBorder _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Border' */
void ViewsBorder__Done( ViewsBorder _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsBorder );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Border' */
void ViewsBorder__Mark( ViewsBorder _this )
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
void ViewsBorder_Draw( ViewsBorder _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
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
    GraphicsCanvas_DrawBorder( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->Width, ctl, ctr, cbr, cbl, aBlend );
  }
  else
    GraphicsCanvas_DrawBorder( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->Width, _this->ColorTL, _this->ColorTR, _this->ColorBR, _this->ColorBL, 
    aBlend );
}

/* 'C' function for method : 'Views::Border.OnSetWidth()' */
void ViewsBorder_OnSetWidth( ViewsBorder _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Width )
    return;

  _this->Width = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Border.OnSetColor()' */
void ViewsBorder_OnSetColor( ViewsBorder _this, XColor value )
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

/* Variants derived from the class : 'Views::Border' */
EW_DEFINE_CLASS_VARIANTS( ViewsBorder )
EW_END_OF_CLASS_VARIANTS( ViewsBorder )

/* Virtual Method Table (VMT) for the class : 'Views::Border' */
EW_DEFINE_CLASS( ViewsBorder, CoreRectView, "Views::Border" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsBorder_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsBorder )

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
    area, aOffset ), EwNewRect2Point( _Const0002, size ), ctl, ctr, cbr, cbl, aBlend, 
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

/* 'C' function for method : 'Views::Image.OnSetVisible()' */
void ViewsImage_OnSetVisible( ViewsImage _this, XBool value )
{
  if ( value )
    CoreView__ChangeViewState( _this, CoreViewStateVisible, 0 );
  else
    CoreView__ChangeViewState( _this, 0, CoreViewStateVisible );
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
    return _Const0003;

  align = _this->Alignment;
  size = _this->Bitmap->FrameSize;
  rd = _this->Super1.Bounds;
  rs = rd;

  if (( size.X == 0 ) || ( size.Y == 0 ))
    return _Const0003;

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
  EwMarkObject( _this->SlideHandler );
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

/* 'C' function for method : 'Views::Text.onSlideSlot()' */
void ViewsText_onSlideSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetScrollOffset( _this, _this->SlideHandler->Offset );
}

/* 'C' function for method : 'Views::Text.onStartSlideSlot()' */
void ViewsText_onStartSlideSlot( ViewsText _this, XObject sender )
{
  XRect area;
  XPoint origin;
  XPoint offset;
  XPoint minOffset;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  area = ViewsText_GetContentArea( _this );
  origin = _this->Super1.Bounds.Point1;

  if ( area.Point1.X > origin.X )
    area.Point1.X = origin.X;

  if ( area.Point1.Y > origin.Y )
    area.Point1.Y = origin.Y;

  offset = EwMovePointNeg( area.Point1, _this->Super1.Bounds.Point1 );
  minOffset = EwMovePointNeg( EwGetRectSize( _this->Super1.Bounds ), EwGetRectSize( 
  area ));

  if ( minOffset.X > 0 )
    minOffset.X = 0;

  if ( minOffset.Y > 0 )
    minOffset.Y = 0;

  _this->SlideHandler->Offset = _this->ScrollOffset;
  _this->SlideHandler->MinOffset = EwMovePointNeg( EwMovePointPos( _this->ScrollOffset, 
  minOffset ), offset );
  _this->SlideHandler->MaxOffset = EwMovePointNeg( _this->ScrollOffset, offset );
}

/* 'C' function for method : 'Views::Text.reparseSlot()' */
void ViewsText_reparseSlot( ViewsText _this, XObject sender )
{
  XPoint area;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( _this->flowString, 0 ) != 0 )
    return;

  area = _Const0004;

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

  _this->textSize = _Const0002;

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
    ellipStr = EwLoadString( &_Const0005 );
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

/* 'C' function for method : 'Views::Text.OnSetRowDistance()' */
void ViewsText_OnSetRowDistance( ViewsText _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->RowDistance == value )
    return;

  _this->RowDistance = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  if ( _this->Ellipsis )
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ( _this->AutoSize && ( EwCompString( _this->flowString, 0 ) != 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsText_GetContentArea( _this 
    ), _this->ScrollOffset ));

  if ( EwCompString( _this->flowString, 0 ) != 0 )
    EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this 
      ));
}

/* 'C' function for method : 'Views::Text.OnSetOnUpdate()' */
void ViewsText_OnSetOnUpdate( ViewsText _this, XSlot value )
{
  if ( !EwCompSlot( value, _this->OnUpdate ))
    return;

  _this->OnUpdate = value;

  if (( _this->WrapWidth == 0 ) || ( value.Object != 0 ))
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateFastReshape;
  else
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateFastReshape;
}

/* 'C' function for method : 'Views::Text.OnSetSlideHandler()' */
void ViewsText_OnSetSlideHandler( ViewsText _this, CoreSlideTouchHandler value )
{
  if ( value == _this->SlideHandler )
    return;

  if (( value != 0 ) && ( value->privateOnSlide.Object != 0 ))
  {
    EwTrace( "%s%*%s", EwLoadString( &_Const0006 ), value, EwLoadString( &_Const0007 
      ));

    {
      EwThrow( EwLoadString( &_Const0008 ));
      return;
    }
  }

  if ( _this->SlideHandler != 0 )
  {
    _this->SlideHandler->privateOnStart = EwNullSlot;
    _this->SlideHandler->privateOnSlide = EwNullSlot;
  }

  _this->SlideHandler = value;

  if ( value != 0 )
  {
    value->privateOnStart = EwNewSlot( _this, ViewsText_onStartSlideSlot );
    value->privateOnSlide = EwNewSlot( _this, ViewsText_onSlideSlot );
  }
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

/* 'C' function for method : 'Views::Text.OnSetWrapWidth()' */
void ViewsText_OnSetWrapWidth( ViewsText _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->WrapWidth )
    return;

  _this->WrapWidth = value;

  if ( _this->WrapText && ( EwCompString( _this->flowString, 0 ) != 0 ))
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if (( value == 0 ) && _this->WrapText )
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateFastReshape;
  else
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateFastReshape;
}

/* 'C' function for method : 'Views::Text.OnSetWrapText()' */
void ViewsText_OnSetWrapText( ViewsText _this, XBool value )
{
  if ( value == _this->WrapText )
    return;

  _this->WrapText = value;

  if ( EwCompString( _this->flowString, 0 ) != 0 )
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ( value && ( _this->WrapWidth == 0 ))
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateFastReshape;
  else
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateFastReshape;
}

/* 'C' function for method : 'Views::Text.OnSetScrollOffset()' */
void ViewsText_OnSetScrollOffset( ViewsText _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->ScrollOffset ))
    return;

  _this->ScrollOffset = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  if ( EwCompString( _this->flowString, 0 ) != 0 )
    EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this 
      ));
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

/* 'C' function for method : 'Views::Text.OnGetColor()' */
XColor ViewsText_OnGetColor( ViewsText _this )
{
  return _this->ColorTL;
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

/* The method StringIndex2RowCol() tries to determine a row/column position which 
   does correspond to a sign from the origin string @String identified by the index 
   aIndex. Within the @String the first sign has the index 0, the second 1, and 
   so far. The returned value defines the row/column position where the sign is 
   displayed. This value contains in 'x' the number of the column and in 'y' the 
   number of the row. The first row/column has the number 0, the second the number 
   1, and so far.
   Please note, that control signs like the hyphen or the '%' escape sign are usually 
   not visible and thus there is no way to determine their row/column position. 
   In such case the position of the next following (visible) sign is returned.
   The method is useful if e.g. a text fragment corresponding to a given string 
   index should be determined. The typical application case could be a text editor. */
XPoint ViewsText_StringIndex2RowCol( ViewsText _this, XInt32 aIndex )
{
  XInt32 noOfRows;
  XInt32 inx;
  XInt32 start;
  XInt32 row;
  XInt32 col;
  XString orgString;
  XInt32 orgLength;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0002;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  inx = 1;
  start = 0;
  row = 0;
  col = 0;
  orgString = _this->String;
  orgLength = EwGetStringLength( orgString );

  if ( _this->Font == 0 )
    return _Const0002;

  if ( aIndex >= orgLength )
    aIndex = orgLength - 1;

  if ( aIndex < 0 )
    aIndex = 0;

  while (( row < ( noOfRows - 1 )) && (( start + EwGetStringChar( _this->flowString, 
         inx + 1 )) <= aIndex ))
  {
    start = start + EwGetStringChar( _this->flowString, inx + 1 );
    inx = inx + EwGetStringChar( _this->flowString, inx );
    row = row + 1;
  }

  while ( aIndex > start )
  {
    XChar ch = EwGetStringChar( orgString, start );

    while ((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD ))
    {
      start = start + 1;
      ch = EwGetStringChar( orgString, start );
    }

    if ( ch == '%' )
      start = start + 1;

    if ( aIndex > start )
    {
      col = col + 1;
      start = start + 1;
    }
  }

  return EwNewPoint( col, row );
}

/* The method RowCol2StringIndex() tries to determine from a row/column position 
   the corresponding index in the origin string @String. The position is specified 
   in the parameter aRowCol. This parameter contains in 'x' the number of the column 
   and in 'y' the number of the row. The first row/column has the number 0, the 
   second the number 1, and so far.
   The returned index refers within @String the sign which is shown on the specified 
   row/column position. If the sign is introduced with a '%' escape sign, the returned 
   index will refer to this escape sign. All signs which are not visible like the 
   hyphen or the eliminated terminal blanks are ignored by the method.
   The method is useful if e.g. a text fragment lying on the given row/column position 
   should be modified. The typical application case could be a text editor. */
XInt32 ViewsText_RowCol2StringIndex( ViewsText _this, XPoint aRowCol )
{
  XInt32 noOfRows;
  XInt32 row;
  XInt32 col;
  XInt32 inx;
  XInt32 start;
  XString rowString;
  XInt32 rowLength;
  XString orgString;
  XChar ch;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return 0;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  row = aRowCol.Y;
  col = aRowCol.X;
  inx = 1;
  start = 0;

  if ( _this->Font == 0 )
    return -1;

  if ( row >= noOfRows )
  {
    row = noOfRows - 1;
    col = EwGetStringLength( _this->flowString );
  }

  if ( row < 0 )
  {
    row = 0;
    col = 0;
  }

  rowString = ViewsText_GetRowString( _this, row );
  rowLength = EwGetStringLength( rowString );

  if ( col >= rowLength )
    col = rowLength - 1;

  if ( col < 0 )
    col = 0;

  while ( row > 0 )
  {
    start = start + EwGetStringChar( _this->flowString, inx + 1 );
    inx = inx + EwGetStringChar( _this->flowString, inx );
    row = row - 1;
  }

  orgString = _this->String;
  inx = -1;

  while ( inx < col )
  {
    ch = EwGetStringChar( orgString, start );

    while ((( ch == '^' ) || ( ch == '~' )) || ( ch == 0x00AD ))
    {
      start = start + 1;
      ch = EwGetStringChar( orgString, start );
    }

    inx = inx + 1;

    if ( inx < col )
    {
      if ( ch == '%' )
        start = start + 1;

      start = start + 1;
    }
  }

  return start;
}

/* The method Position2RowCol() tries to determine the number of the text row and 
   column for the specified pixel position aPoint. The position aPoint is expressed 
   in coordinates relative to the top-left corner of the view's @Owner. The method 
   takes in account all properties which do affect the position and the alignment 
   of the text, e.g. @Alignment, @ScrollOffset, @WrapText, etc.
   The returned value contains in 'x' the column number and in 'y' the row number. 
   The first row/column has the number 0, the second has the number 1, and so far. 
   This method is useful, if e.g. a text fragment touched by the user should be 
   determined. */
XPoint ViewsText_Position2RowCol( ViewsText _this, XPoint aPoint )
{
  XInt32 noOfRows;
  XRect area;
  ResourcesFont font;
  XInt32 width;
  XInt32 leading;
  XInt32 rowHeight;
  XInt32 row;
  XRect rowArea;
  XString rowString;
  XInt32 rowLength;
  XInt32 stretchFac;
  XInt32 stretchAcc;
  XBool newLine;
  XInt32 x;
  XInt32 col;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0002;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  area = ViewsText_GetContentArea( _this );
  font = _this->Font;
  width = EwGetRectW( _this->Super1.Bounds );

  if ( EwIsRectEmpty( area ))
    return _Const0002;

  if ( aPoint.Y < area.Point1.Y )
    aPoint.Y = area.Point1.Y;

  if ( aPoint.Y >= area.Point2.Y )
    aPoint.Y = ( area.Point2.Y - 1 );

  leading = font->Leading;

  if ( _this->RowDistance > 0 )
    leading = ( _this->RowDistance - font->Ascent ) - font->Descent;

  rowHeight = ( font->Ascent + font->Descent ) + leading;
  row = ( aPoint.Y - area.Point1.Y ) / rowHeight;
  rowArea = ViewsText_GetRowArea( _this, row );
  rowString = ViewsText_GetRowString( _this, row );
  rowLength = EwGetStringLength( rowString );
  stretchFac = 0;
  stretchAcc = 32768;
  newLine = (XBool)(( rowLength > 0 ) && ( EwGetStringChar( rowString, rowLength 
  - 1 ) == 0x000A ));

  if (((( _this->Alignment & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
      ) && ( row < ( noOfRows - 1 ))) && !newLine )
  {
    XInt32 blanks = 0;
    XInt32 inx1 = EwStringFindChar( rowString, 0x0020, 0 );
    XInt32 inx2 = EwStringFindChar( rowString, 0x00A0, 0 );
    XInt32 rowLength2 = rowLength;
    XInt32 w;

    while ( inx1 >= 0 )
    {
      blanks = blanks + 1;
      inx1 = EwStringFindChar( rowString, 0x0020, inx1 + 1 );
    }

    while ( inx2 >= 0 )
    {
      blanks = blanks + 1;
      inx2 = EwStringFindChar( rowString, 0x00A0, inx2 + 1 );
    }

    if ( newLine )
      rowLength2 = rowLength2 - 1;

    w = width - ResourcesFont_GetTextExtent( font, rowString, 0, rowLength2 ).Point2.X;

    if (( blanks > 0 ) && ( w > 0 ))
      stretchFac = ( w << 16 ) / blanks;
  }

  x = aPoint.X - rowArea.Point1.X;
  col = 0;

  while (( col < ( rowLength - 1 )) && ( x > 0 ))
  {
    XChar ch = EwGetStringChar( rowString, col );
    XInt32 adv = ResourcesFont_GetGlyphAdvance( font, ch );

    if (( stretchFac != 0 ) && (( ch == 0x0020 ) || ( ch == 0x00A0 )))
    {
      stretchAcc = stretchAcc + stretchFac;
      adv = adv + ( stretchAcc >> 16 );
      stretchAcc = stretchAcc & 65535;
    }

    if ( x >= (( adv / 2 ) + 1 ))
      col = col + 1;

    x = x - adv;
  }

  return EwNewPoint( col, row );
}

/* The method RowCol2Position() returns the baseline-position where the view will 
   draw the glyph for the row and column specified in the parameter aRowCol. This 
   parameter contains in 'x' the number of the column and in 'y' the number of the 
   row. The first row/column has the number 0, the second the number 1, and so far.
   The returned position is expressed in coordinates relative to the top-left corner 
   of the view's @Owner. The method takes in account all properties which do affect 
   the position and the alignment of the text, e.g. @Alignment, @ScrollOffset, @WrapText, 
   etc.
   This method is useful, if e.g. additional decoration should be drawn around the 
   glyph like a blinking caret in a text editor, etc. */
XPoint ViewsText_RowCol2Position( ViewsText _this, XPoint aRowCol )
{
  XInt32 noOfRows;
  ResourcesFont font;
  XInt32 row;
  XInt32 col;
  XInt32 width;
  XRect rowArea;
  XString rowString;
  XInt32 rowLength;
  XBool newLine;
  XInt32 x;
  XInt32 y;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0002;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  font = _this->Font;
  row = aRowCol.Y;
  col = aRowCol.X;
  width = EwGetRectW( _this->Super1.Bounds );

  if ( font == 0 )
    return _Const0002;

  if ( row >= noOfRows )
  {
    row = noOfRows - 1;
    col = EwGetStringLength( _this->flowString );
  }

  if ( row < 0 )
  {
    row = 0;
    col = 0;
  }

  rowArea = ViewsText_GetRowArea( _this, row );
  rowString = ViewsText_GetRowString( _this, row );
  rowLength = EwGetStringLength( rowString );
  newLine = (XBool)(( rowLength > 0 ) && ( EwGetStringChar( rowString, rowLength 
  - 1 ) == 0x000A ));

  if ( col >= rowLength )
    col = rowLength - 1;

  if ( col < 0 )
    col = 0;

  x = rowArea.Point1.X + ResourcesFont_GetTextAdvance( font, rowString, 0, col );
  y = rowArea.Point1.Y + font->Ascent;

  if ((( _this->Alignment & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
      ))
  {
    XInt32 inx1 = EwStringFindChar( rowString, 0x0020, 0 );
    XInt32 inx2 = EwStringFindChar( rowString, 0x00A0, 0 );

    if (((( inx1 >= 0 ) || ( inx2 >= 0 )) && ( row < ( noOfRows - 1 ))) && !newLine )
    {
      XInt32 totalBlanks = 0;
      XInt32 precBlanks = 0;
      XInt32 w;

      while ( inx1 >= 0 )
      {
        if ( inx1 < col )
          precBlanks = precBlanks + 1;

        inx1 = EwStringFindChar( rowString, 0x0020, inx1 + 1 );
        totalBlanks = totalBlanks + 1;
      }

      while ( inx2 >= 0 )
      {
        if ( inx2 < col )
          precBlanks = precBlanks + 1;

        inx2 = EwStringFindChar( rowString, 0x00A0, inx2 + 1 );
        totalBlanks = totalBlanks + 1;
      }

      if ( newLine )
        rowLength = rowLength - 1;

      w = width - ResourcesFont_GetTextExtent( font, rowString, 0, rowLength ).Point2.X;

      if ( w > 0 )
        x = x + ((( w * precBlanks ) + ( totalBlanks / 2 )) / totalBlanks );
    }
  }

  return EwNewPoint( x, y );
}

/* The method GetRowArea() returns the position and the size of an area where the 
   view will show a text row. The number of the text row is specified in the parameter 
   aRow. The first row has the number 0, the second 1, and so far. If the row is 
   not available, an empty area is returned.
   The returned area is expressed in coordinates relative to the top-left corner 
   of the view's @Owner. The method takes in account all properties which do affect 
   the position and the alignment of the text, e.g. @Alignment, @ScrollOffset, @WrapText, 
   etc. */
XRect ViewsText_GetRowArea( ViewsText _this, XInt32 aRow )
{
  XInt32 noOfRows;
  ResourcesFont font;
  XSet align;
  XPoint size;
  XString rowString;
  XInt32 rowLength;
  XBool newLine;
  XInt32 leading;
  XRect r;
  XInt32 rowWidth;
  XInt32 rowHeight;
  XInt32 textHeight;
  XInt32 y;
  XInt32 x;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0003;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  font = _this->Font;
  align = _this->Alignment;
  size = EwGetRectSize( _this->Super1.Bounds );

  if ((( font == 0 ) || ( aRow < 0 )) || (( aRow >= noOfRows ) && ( aRow > 0 )))
    return _Const0003;

  rowString = ViewsText_GetRowString( _this, aRow );
  rowLength = EwGetStringLength( rowString );
  newLine = (XBool)(( rowLength > 0 ) && ( EwGetStringChar( rowString, rowLength 
  - 1 ) == 0x000A ));

  if ( newLine )
    rowLength = rowLength - 1;

  leading = font->Leading;

  if ( _this->RowDistance > 0 )
    leading = ( _this->RowDistance - font->Ascent ) - font->Descent;

  r = ResourcesFont_GetTextExtent( font, rowString, 0, rowLength );
  rowWidth = EwGetRectW( r );
  rowHeight = font->Ascent + font->Descent;
  textHeight = ( noOfRows * (( font->Ascent + font->Descent ) + leading )) - leading;

  if ( r.Point1.X > 0 )
    rowWidth = rowWidth + r.Point1.X;

  if ( noOfRows == 0 )
    textHeight = rowHeight;

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
      ))
  {
    XInt32 blank1 = EwStringFindChar( rowString, 0x0020, 0 );
    XInt32 blank2 = EwStringFindChar( rowString, 0x00A0, 0 );

    if (((( blank1 >= 0 ) || ( blank2 >= 0 )) && ( aRow < ( noOfRows - 1 ))) && 
        !newLine )
      rowWidth = size.X;
  }

  y = aRow * (( font->Ascent + font->Descent ) + leading );
  x = 0;

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
      ))
    ;
  else
    if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight 
        ))
      x = size.X - rowWidth;
    else
      if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter 
          ))
        x = ( size.X - rowWidth ) / 2;

  if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom 
      ))
    y = y + ( size.Y - textHeight );
  else
    if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter 
        ))
      y = y + (( size.Y - textHeight ) / 2 );

  return EwMoveRectPos( EwMoveRectPos( EwNewRect( x, y, x + rowWidth, y + rowHeight 
    ), _this->Super1.Bounds.Point1 ), _this->ScrollOffset );
}

/* The method GetRowString() returns the content of the row with the number specified 
   in the parameter aRow. The first row has the number 0, the second 1, and so far. 
   If the row is not available, an empty string is returned.
   The returned string is already processed --> it contains only the visible signs. 
   Any control signs, like the hyphen sign or the '%' escape sign as well as any 
   superfluous terminal space signs are removed from the string. In other words, 
   the returned string corresponds to the text displayed in the row. */
XString ViewsText_GetRowString( ViewsText _this, XInt32 aRow )
{
  XInt32 noOfRows;
  XInt32 inx;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return 0;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  noOfRows = EwGetStringChar( _this->flowString, 0 );
  inx = 1;

  if ((( _this->Font == 0 ) || ( aRow < 0 )) || ( aRow >= noOfRows ))
    return 0;

  while ( aRow > 0 )
  {
    inx = inx + EwGetStringChar( _this->flowString, inx );
    aRow = aRow - 1;
  }

  return EwStringMiddle( _this->flowString, inx + 2, EwGetStringChar( _this->flowString, 
    inx ) - 2 );
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
    return _Const0003;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( !EwCompString( _this->flowString, 0 ))
    return _Const0003;

  if ( !EwCompPoint( _this->textSize, _Const0002 ))
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

/* Initializer for the class 'Views::WarpView' */
void ViewsWarpView__Init( ViewsWarpView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreQuadView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsWarpView );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super2.viewState = CoreViewStateAlphaBlended | CoreViewStateVisible;
  _this->oldUpdateCase = 0x0000;
  _this->newUpdateCase = 0x0000;
  _this->Shininess = 5.000000f;
  _this->LightingEffect = 0.000000f;
  _this->Quality = 1;
}

/* Re-Initializer for the class 'Views::WarpView' */
void ViewsWarpView__ReInit( ViewsWarpView _this )
{
  /* At first re-initialize the super class ... */
  CoreQuadView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::WarpView' */
void ViewsWarpView__Done( ViewsWarpView _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsWarpView );

  /* Don't forget to deinitialize the super class ... */
  CoreQuadView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::WarpView' */
void ViewsWarpView__Mark( ViewsWarpView _this )
{
  EwMarkObject( _this->matrix );

  /* Give the super class a chance to mark its objects and references */
  CoreQuadView__Mark( &_this->_Super );
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint4()' */
void ViewsWarpView_OnSetPoint4( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point4 ))
    return;

  CoreQuadView_OnSetPoint4((CoreQuadView)_this, value );
  _this->vertices[ 3 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 3 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 3 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint3()' */
void ViewsWarpView_OnSetPoint3( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point3 ))
    return;

  CoreQuadView_OnSetPoint3((CoreQuadView)_this, value );
  _this->vertices[ 2 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 2 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 2 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint2()' */
void ViewsWarpView_OnSetPoint2( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point2 ))
    return;

  CoreQuadView_OnSetPoint2((CoreQuadView)_this, value );
  _this->vertices[ 1 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 1 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 1 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint1()' */
void ViewsWarpView_OnSetPoint1( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point1 ))
    return;

  CoreQuadView_OnSetPoint1((CoreQuadView)_this, value );
  _this->vertices[ 0 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 0 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 0 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.calculateLight()' */
void ViewsWarpView_calculateLight( ViewsWarpView _this )
{
  XFloat lx;
  XFloat ly;
  XFloat lz;
  XFloat ax;
  XFloat ay;
  XFloat az;
  XFloat bx;
  XFloat by;
  XFloat bz;
  XFloat nx;
  XFloat ny;
  XFloat nz;
  XFloat nlen;
  XInt32 i;

  if ( _this->LightingEffect == 0.000000f )
    return;

  lx = 400.000000f;
  ly = 400.000000f;
  lz = -10000000.000000f;
  ax = _this->vertices[ 1 ][ 0 ] - _this->vertices[ 0 ][ 0 ];
  ay = _this->vertices[ 1 ][ 1 ] - _this->vertices[ 0 ][ 1 ];
  az = _this->vertices[ 1 ][ 2 ] - _this->vertices[ 0 ][ 2 ];
  bx = _this->vertices[ 3 ][ 0 ] - _this->vertices[ 0 ][ 0 ];
  by = _this->vertices[ 3 ][ 1 ] - _this->vertices[ 0 ][ 1 ];
  bz = _this->vertices[ 3 ][ 2 ] - _this->vertices[ 0 ][ 2 ];
  nx = ( ay * bz ) - ( az * by );
  ny = ( az * bx ) - ( ax * bz );
  nz = ( ax * by ) - ( ay * bx );
  nlen = EwMathSqrt((( nx * nx ) + ( ny * ny )) + ( nz * nz ));

  if ( nlen > 0.000000f )
  {
    nlen = 1.000000f / nlen;
    nx = nx * nlen;
    ny = ny * nlen;
    nz = nz * nlen;
  }

  for ( i = 0; i < 4; i = i + 1 )
  {
    XFloat vlx = _this->vertices[ EwCheckIndex( i, 4 )][ 0 ] - lx;
    XFloat vly = _this->vertices[ EwCheckIndex( i, 4 )][ 1 ] - ly;
    XFloat vlz = _this->vertices[ EwCheckIndex( i, 4 )][ 2 ] - lz;
    XFloat vllen = EwMathSqrt((( vlx * vlx ) + ( vly * vly )) + ( vlz * vlz ));
    XFloat light;

    if ( vllen > 0.000000f )
    {
      vllen = 1.000000f / vllen;
      vlx = vlx * vllen;
      vly = vly * vllen;
      vlz = vlz * vllen;
    }

    light = (( vlx * nx ) + ( vly * ny )) + ( vlz * nz );

    if ( light < 0.000000f )
      light = -light;

    light = EwMathPow( light, _this->Shininess );
    light = (( _this->LightingEffect * light ) + 1.000000f ) - _this->LightingEffect;
    _this->lighting[ EwCheckIndex( i, 4 )] = (XInt32)( light * 257.000000f );

    if ( _this->lighting[ EwCheckIndex( i, 4 )] > 256 )
      _this->lighting[ EwCheckIndex( i, 4 )] = 256;
  }
}

/* 'C' function for method : 'Views::WarpView.update()' */
void ViewsWarpView_update( ViewsWarpView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->newUpdateCase == 0x0000 )
    return;

  if ( _this->newUpdateCase == 'E' )
  {
    GraphicsWarpMatrix m = EwNewObject( GraphicsWarpMatrix, 0 );
    m = GraphicsWarpMatrix_DeriveFromQuad( m, _this->vertices[ 0 ][ 0 ], _this->vertices[ 
    0 ][ 1 ], _this->vertices[ 1 ][ 0 ], _this->vertices[ 1 ][ 1 ], _this->vertices[ 
    2 ][ 0 ], _this->vertices[ 2 ][ 1 ], _this->vertices[ 3 ][ 0 ], _this->vertices[ 
    3 ][ 1 ]);

    if ( m != 0 )
    {
      GraphicsWarpMatrix_CalculateZ( m, 0.000000f, 0.000000f );
      _this->vertices[ 0 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 1.000000f, 0.000000f );
      _this->vertices[ 1 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 1.000000f, 1.000000f );
      _this->vertices[ 2 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 0.000000f, 1.000000f );
      _this->vertices[ 3 ][ 2 ] = m->Z * 240.000000f;
    }

    ViewsWarpView_calculateLight( _this );
  }

  if (((( _this->newUpdateCase == 'M' ) && ( _this->matrix != 0 )) && ( _this->bitmapSize.X 
      != 0 )) && ( _this->bitmapSize.Y != 0 ))
  {
    XRect sourceArea = EwIntersectRect2( _this->SourceArea, EwNewRect2Point( _Const0002, 
      _this->bitmapSize ));
    XPoint sourceAnchor = _this->SourceAnchor;
    XFloat l = (XFloat)( sourceArea.Point1.X - sourceAnchor.X );
    XFloat r = (XFloat)( sourceArea.Point2.X - sourceAnchor.X );
    XFloat t = (XFloat)( sourceArea.Point1.Y - sourceAnchor.Y );
    XFloat b = (XFloat)( sourceArea.Point2.Y - sourceAnchor.Y );
    GraphicsWarpMatrix_Project( _this->matrix, l, t );
    _this->vertices[ 0 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 0 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 0 ][ 2 ] = _this->matrix->Z;
    GraphicsWarpMatrix_Project( _this->matrix, r, t );
    _this->vertices[ 1 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 1 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 1 ][ 2 ] = _this->matrix->Z;
    GraphicsWarpMatrix_Project( _this->matrix, r, b );
    _this->vertices[ 2 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 2 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 2 ][ 2 ] = _this->matrix->Z;
    GraphicsWarpMatrix_Project( _this->matrix, l, b );
    _this->vertices[ 3 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 3 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 3 ][ 2 ] = _this->matrix->Z;

    if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
        ) == CoreViewStateVisible ))
      CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this 
      ));

    _this->Super1.Point1 = EwNewPoint((XInt32)( _this->vertices[ 0 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 0 ][ 1 ] + 0.500000f ));
    _this->Super1.Point2 = EwNewPoint((XInt32)( _this->vertices[ 1 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 1 ][ 1 ] + 0.500000f ));
    _this->Super1.Point3 = EwNewPoint((XInt32)( _this->vertices[ 2 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 2 ][ 1 ] + 0.500000f ));
    _this->Super1.Point4 = EwNewPoint((XInt32)( _this->vertices[ 3 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 3 ][ 1 ] + 0.500000f ));
    ViewsWarpView_calculateLight( _this );
  }

  _this->oldUpdateCase = _this->newUpdateCase;
  _this->newUpdateCase = 0x0000;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* Wrapper function for the virtual method : 'Views::WarpView.update()' */
void ViewsWarpView__update( void* _this, XObject sender )
{
  ((ViewsWarpView)_this)->_VMT->update((ViewsWarpView)_this, sender );
}

/* 'C' function for method : 'Views::WarpView.OnSetQuality()' */
void ViewsWarpView_OnSetQuality( ViewsWarpView _this, XBool value )
{
  if ( value == _this->Quality )
    return;

  _this->Quality = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetSourceArea()' */
void ViewsWarpView_OnSetSourceArea( ViewsWarpView _this, XRect value )
{
  if ( !EwCompRect( value, _this->SourceArea ))
    return;

  _this->SourceArea = value;

  if (((( _this->oldUpdateCase == 'E' ) && ( _this->newUpdateCase == 0x0000 )) && 
      ( _this->Super2.Owner != 0 )) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if (( _this->oldUpdateCase != 'E' ) && ( _this->newUpdateCase == 0x0000 ))
  {
    _this->newUpdateCase = _this->oldUpdateCase;
    EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
  }
}

/* Variants derived from the class : 'Views::WarpView' */
EW_DEFINE_CLASS_VARIANTS( ViewsWarpView )
EW_END_OF_CLASS_VARIANTS( ViewsWarpView )

/* Virtual Method Table (VMT) for the class : 'Views::WarpView' */
EW_DEFINE_CLASS( ViewsWarpView, CoreQuadView, "Views::WarpView" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  CoreView_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  ViewsWarpView_OnSetPoint4,
  ViewsWarpView_OnSetPoint3,
  ViewsWarpView_OnSetPoint2,
  ViewsWarpView_OnSetPoint1,
  ViewsWarpView_update,
EW_END_OF_CLASS( ViewsWarpView )

/* Initializer for the class 'Views::WarpImage' */
void ViewsWarpImage__Init( ViewsWarpImage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ViewsWarpView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsWarpImage );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Color4 = _Const0000;
  _this->Color3 = _Const0000;
  _this->Color2 = _Const0000;
  _this->Color1 = _Const0000;
  _this->Endless = 1;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::WarpImage' */
void ViewsWarpImage__ReInit( ViewsWarpImage _this )
{
  /* At first re-initialize the super class ... */
  ViewsWarpView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::WarpImage' */
void ViewsWarpImage__Done( ViewsWarpImage _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsWarpImage );

  /* Don't forget to deinitialize the super class ... */
  ViewsWarpView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::WarpImage' */
void ViewsWarpImage__Mark( ViewsWarpImage _this )
{
  EwMarkObject( _this->timer );
  EwMarkSlot( _this->OnFinished );
  EwMarkObject( _this->Bitmap );

  /* Give the super class a chance to mark its objects and references */
  ViewsWarpView__Mark( &_this->_Super );
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
void ViewsWarpImage_Draw( ViewsWarpImage _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = _this->FrameNumber;
  XColor c1;
  XColor c2;
  XColor c3;
  XColor c4;
  XInt32 opacity;
  XFloat ofsX;
  XFloat ofsY;
  XRect area;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  c1 = _this->Color1;
  c2 = _this->Color2;
  c3 = _this->Color3;
  c4 = _this->Color4;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  ofsX = (XFloat)aOffset.X;
  ofsY = (XFloat)aOffset.Y;
  area = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));
  aBlend = (XBool)( aBlend && (( _this->Super3.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    c1.Alpha = (XUInt8)(( c1.Alpha * opacity ) >> 8 );
    c2.Alpha = (XUInt8)(( c2.Alpha * opacity ) >> 8 );
    c3.Alpha = (XUInt8)(( c3.Alpha * opacity ) >> 8 );
    c4.Alpha = (XUInt8)(( c4.Alpha * opacity ) >> 8 );
  }

  if ( _this->Super1.LightingEffect > 0.000000f )
  {
    if ( _this->Super1.lighting[ 0 ] < 256 )
      c1.Alpha = (XUInt8)(( c1.Alpha * _this->Super1.lighting[ 0 ]) >> 8 );

    if ( _this->Super1.lighting[ 1 ] < 256 )
      c2.Alpha = (XUInt8)(( c2.Alpha * _this->Super1.lighting[ 1 ]) >> 8 );

    if ( _this->Super1.lighting[ 2 ] < 256 )
      c3.Alpha = (XUInt8)(( c3.Alpha * _this->Super1.lighting[ 2 ]) >> 8 );

    if ( _this->Super1.lighting[ 3 ] < 256 )
      c4.Alpha = (XUInt8)(( c4.Alpha * _this->Super1.lighting[ 3 ]) >> 8 );
  }

  aClip = EwIntersectRect2( aClip, EwMoveRectPos( _this->Super1.Clipping, aOffset 
  ));
  GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->Bitmap, frameNr, _this->Super1.vertices[ 
  0 ][ 0 ] + ofsX, _this->Super1.vertices[ 0 ][ 1 ] + ofsY, _this->Super1.vertices[ 
  0 ][ 2 ], _this->Super1.vertices[ 1 ][ 0 ] + ofsX, _this->Super1.vertices[ 1 ][ 
  1 ] + ofsY, _this->Super1.vertices[ 1 ][ 2 ], _this->Super1.vertices[ 2 ][ 0 ] 
  + ofsX, _this->Super1.vertices[ 2 ][ 1 ] + ofsY, _this->Super1.vertices[ 2 ][ 
  2 ], _this->Super1.vertices[ 3 ][ 0 ] + ofsX, _this->Super1.vertices[ 3 ][ 1 ] 
  + ofsY, _this->Super1.vertices[ 3 ][ 2 ], area, c1, c2, c3, c4, aBlend, _this->Super1.Quality 
  );
}

/* 'C' function for method : 'Views::WarpImage.observerSlot()' */
void ViewsWarpImage_observerSlot( ViewsWarpImage _this, XObject sender )
{
  XPoint oldBitmapSize;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldBitmapSize = _this->Super1.bitmapSize;

  if ( _this->Bitmap != 0 )
    _this->Super1.bitmapSize = _this->Bitmap->FrameSize;
  else
    _this->Super1.bitmapSize = _Const0002;

  if ((( !EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ) || (( _this->Super1.oldUpdateCase 
      == 'E' ) && ( _this->Super1.newUpdateCase == 0x0000 ))) && ( _this->Super3.Owner 
      != 0 )) && (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.oldUpdateCase != 'E' ) && ( _this->Super1.newUpdateCase == 
      0x0000 )) && EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ))
  {
    _this->Super1.newUpdateCase = _this->Super1.oldUpdateCase;
    EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::WarpImage.timerSlot()' */
void ViewsWarpImage_timerSlot( ViewsWarpImage _this, XObject sender )
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

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super3.Owner != 0 )) && 
      (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
    EwSignal( _this->OnFinished, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::WarpImage.OnSetAnimated()' */
void ViewsWarpImage_OnSetAnimated( ViewsWarpImage _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass 
    ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsWarpImage_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsWarpImage_timerSlot ), ((XObject)_this 
      ));
  }

  if (( _this->Super3.Owner != 0 ) && (( _this->Super3.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpImage.OnSetBitmap()' */
void ViewsWarpImage_OnSetBitmap( ViewsWarpImage _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpImage_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsWarpImage_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsWarpImage_OnSetAnimated( _this, 0 );
    ViewsWarpImage_OnSetAnimated( _this, 1 );
  }

  EwSignal( EwNewSlot( _this, ViewsWarpImage_observerSlot ), ((XObject)_this ));
}

/* Variants derived from the class : 'Views::WarpImage' */
EW_DEFINE_CLASS_VARIANTS( ViewsWarpImage )
EW_END_OF_CLASS_VARIANTS( ViewsWarpImage )

/* Virtual Method Table (VMT) for the class : 'Views::WarpImage' */
EW_DEFINE_CLASS( ViewsWarpImage, ViewsWarpView, "Views::WarpImage" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  ViewsWarpImage_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  ViewsWarpView_OnSetPoint4,
  ViewsWarpView_OnSetPoint3,
  ViewsWarpView_OnSetPoint2,
  ViewsWarpView_OnSetPoint1,
  ViewsWarpView_update,
EW_END_OF_CLASS( ViewsWarpImage )

/* Initializer for the class 'Views::WarpGroup' */
void ViewsWarpGroup__Init( ViewsWarpGroup _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ViewsWarpView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsWarpGroup );

  /* ... and initialize objects, variables, properties, etc. */
  _this->i11 = 1.000000f;
  _this->i22 = 1.000000f;
  _this->i33 = 1.000000f;
  _this->Opacity4 = 255;
  _this->Opacity3 = 255;
  _this->Opacity2 = 255;
  _this->Opacity1 = 255;
}

/* Re-Initializer for the class 'Views::WarpGroup' */
void ViewsWarpGroup__ReInit( ViewsWarpGroup _this )
{
  /* At first re-initialize the super class ... */
  ViewsWarpView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::WarpGroup' */
void ViewsWarpGroup__Done( ViewsWarpGroup _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsWarpGroup );

  /* Don't forget to deinitialize the super class ... */
  ViewsWarpView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::WarpGroup' */
void ViewsWarpGroup__Mark( ViewsWarpGroup _this )
{
  EwMarkObject( _this->cursorTargetView );
  EwMarkObject( _this->bitmap );
  EwMarkObject( _this->Group );

  /* Give the super class a chance to mark its objects and references */
  ViewsWarpView__Mark( &_this->_Super );
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
void ViewsWarpGroup_Draw( ViewsWarpGroup _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  XFloat ofsX;
  XFloat ofsY;
  XRect area;
  XColor c1;
  XColor c2;
  XColor c3;
  XColor c4;

  if ( _this->bitmap == 0 )
    return;

  ResourcesBitmap__Update( _this->bitmap );
  ofsX = (XFloat)aOffset.X;
  ofsY = (XFloat)aOffset.Y;
  area = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));
  aBlend = (XBool)( aBlend && (( _this->Super3.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;
  c1 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * _this->Opacity1 ) >> 8 ));
  c2 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * _this->Opacity2 ) >> 8 ));
  c3 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * _this->Opacity3 ) >> 8 ));
  c4 = EwNewColor( 255, 255, 255, (XUInt8)(( aOpacity * _this->Opacity4 ) >> 8 ));

  if ( _this->Super1.LightingEffect > 0.000000f )
  {
    if ( _this->Super1.lighting[ 0 ] < 256 )
      c1.Alpha = (XUInt8)(( c1.Alpha * _this->Super1.lighting[ 0 ]) >> 8 );

    if ( _this->Super1.lighting[ 1 ] < 256 )
      c2.Alpha = (XUInt8)(( c2.Alpha * _this->Super1.lighting[ 1 ]) >> 8 );

    if ( _this->Super1.lighting[ 2 ] < 256 )
      c3.Alpha = (XUInt8)(( c3.Alpha * _this->Super1.lighting[ 2 ]) >> 8 );

    if ( _this->Super1.lighting[ 3 ] < 256 )
      c4.Alpha = (XUInt8)(( c4.Alpha * _this->Super1.lighting[ 3 ]) >> 8 );
  }

  aClip = EwIntersectRect2( aClip, EwMoveRectPos( _this->Super1.Clipping, aOffset 
  ));
  GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->bitmap, 0, _this->Super1.vertices[ 
  0 ][ 0 ] + ofsX, _this->Super1.vertices[ 0 ][ 1 ] + ofsY, _this->Super1.vertices[ 
  0 ][ 2 ], _this->Super1.vertices[ 1 ][ 0 ] + ofsX, _this->Super1.vertices[ 1 ][ 
  1 ] + ofsY, _this->Super1.vertices[ 1 ][ 2 ], _this->Super1.vertices[ 2 ][ 0 ] 
  + ofsX, _this->Super1.vertices[ 2 ][ 1 ] + ofsY, _this->Super1.vertices[ 2 ][ 
  2 ], _this->Super1.vertices[ 3 ][ 0 ] + ofsX, _this->Super1.vertices[ 3 ][ 1 ] 
  + ofsY, _this->Super1.vertices[ 3 ][ 2 ], area, c1, c2, c3, c4, aBlend, _this->Super1.Quality 
  );
}

/* The method HandleEvent() is invoked automatically if the view has received an 
   event. For example, touching the view on the touch screen can cause the view 
   to receive a Core::CursorEvent event. Within this method the view can evaluate 
   the event and react to it.
   Whether the event has been handled by the view or not is determined by the return 
   value. To sign an event as handled HandleEvent() should return a valid object 
   (e.g. 'this'). If the event has not been handled, 'null' should be returned.
   Depending on the kind of the event, the framework can continue dispatching of 
   still unhandled events. For example, keyboard events (Core::KeyEvent class) are 
   automatically delivered to the superior @Owner of the receiver view if this view 
   has ignored the event.
   HandleEvent() is invoked automatically by the framework, so you never should 
   need to invoke it directly. However you can prepare and post new events by using 
   the methods DispatchEvent() and BroadcastEvent() of the application class Core::Root. */
XObject ViewsWarpGroup_HandleEvent( ViewsWarpGroup _this, CoreEvent aEvent )
{
  CoreCursorEvent event1;
  CoreDragEvent event2;
  XPoint offset;
  CoreGroup grp;
  CoreView view;

  if (( _this->Group == 0 ) || ( _this->cursorTargetView == 0 ))
    return 0;

  event1 = EwCastObject( aEvent, CoreCursorEvent );
  event2 = EwCastObject( aEvent, CoreDragEvent );

  if (( event1 == 0 ) && ( event2 == 0 ))
    return 0;

  offset = _Const0002;
  grp = _this->cursorTargetView->Owner;

  while (( grp != 0 ) && ( grp != _this->Group ))
  {
    offset = EwMovePointNeg( offset, grp->Super1.Bounds.Point1 );
    grp = grp->Super2.Owner;
  }

  view = _this->cursorTargetView;

  if (( event1 != 0 ) && !event1->Down )
    _this->cursorTargetView = 0;

  if ( event1 != 0 )
  {
    event1->CurrentPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event1->CurrentPos 
    ), offset );
    event1->HittingPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event1->HittingPos 
    ), offset );
    return CoreView__HandleEvent( view, ((CoreEvent)event1 ));
  }

  if ( event2 != 0 )
  {
    XPoint oldPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, EwMovePointNeg( 
      event2->CurrentPos, event2->Offset )), offset );
    event2->CurrentPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event2->CurrentPos 
    ), offset );
    event2->HittingPos = EwMovePointPos( ViewsWarpGroup_mapPosition( _this, event2->HittingPos 
    ), offset );
    event2->Offset = EwMovePointNeg( event2->CurrentPos, oldPos );
    return CoreView__HandleEvent( view, ((CoreEvent)event2 ));
  }

  return CoreView_HandleEvent((CoreView)_this, aEvent );
}

/* The method CursorHitTest() is invoked automatically in order to determine whether 
   the view is interested in the receipt of cursor events or not. This method will 
   be invoked immediately after the user has tapped the visible area of the view. 
   If the view is not interested in the cursor event, the framework repeats this 
   procedure for the next behind view until a willing view has been found or all 
   views are evaluated.
   In the implementation of the method the view can evaluate the passed aArea parameter. 
   It determines the place where the user has tapped the view with his fingertip 
   expressed in the coordinates of the views @Owner. The method can test e.g. whether 
   the tapped area does intersect any touchable areas within the view, etc. The 
   affected finger is identified in the parameter aFinger. The first finger (or 
   the first mouse device button) has the number 0.
   The parameter aStrikeCount determines how many times the same area has been tapped 
   in series. This is useful to detect series of multiple touches, e.g. in case 
   of the double click, aStrikeCount == 2.
   The parameter aDedicatedView, if it is not 'null', restricts the event to be 
   handled by this view only. If aDedicatedView == null, no special restriction 
   exists.
   This method is also invoked if during an existing grab cycle the current target 
   view has decided to resign and deflect the cursor events to another view. This 
   is usually the case after the user has performed a gesture the current target 
   view is not interested to process. Thereupon, the system looks for another view 
   willing to take over the cursor event processing after the performed gesture. 
   Which gesture has caused the operation, is specified in the parameter aRetargetReason.
   If the view is willing to process the event, the method should create, initialize 
   and return a new Core::CursorHit object. This object identify the willing view. 
   Otherwise the method should return 'null'.
   CursorHitTest() is invoked automatically by the framework, so you never should 
   need to invoke it directly. This method is predetermined for the hit-test only. 
   The proper processing of events should take place in the @HandleEvent() method 
   by reacting to Core::CursorEvent and Core::DragEvent events. */
CoreCursorHit ViewsWarpGroup_CursorHitTest( ViewsWarpGroup _this, XRect aArea, XInt32 
  aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
{
  XPoint pos;
  XRect srcArea;
  CoreCursorHit hit;

  if (( _this->Group == 0 ) || !(( _this->Group->Super2.viewState & ( CoreViewStateEnabled 
      | CoreViewStateTouchable )) == ( CoreViewStateEnabled | CoreViewStateTouchable 
      )))
    return 0;

  pos = EwGetRectCenter( aArea );

  if ( !EwIsRectEmpty( _this->Super1.Clipping ) && !EwIsPointInRect( _this->Super1.Clipping, 
      pos ))
    return 0;

  pos = ViewsWarpGroup_mapPosition( _this, pos );
  srcArea = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));

  if ( !EwIsPointInRect( srcArea, pos ))
    return 0;

  hit = CoreView__CursorHitTest( _this->Group, EwMoveRectPos( EwMoveRectPos( EwGetRectORect( 
  aArea ), pos ), _this->Group->Super1.Bounds.Point1 ), aFinger, aStrikeCount, aDedicatedView, 
  aRetargetReason );

  if ( hit != 0 )
    _this->cursorTargetView = hit->View;
  else
    _this->cursorTargetView = 0;

  if ( _this->cursorTargetView != 0 )
    return CoreCursorHit_Initialize( EwNewObject( CoreCursorHit, 0 ), ((CoreView)_this 
      ), _Const0002 );

  return 0;
}

/* 'C' function for method : 'Views::WarpGroup.update()' */
void ViewsWarpGroup_update( ViewsWarpGroup _this, XObject sender )
{
  ViewsWarpView_update((ViewsWarpView)_this, sender );
  _this->invMatrixValid = 0;
}

/* 'C' function for method : 'Views::WarpGroup.updateInvMatrix()' */
void ViewsWarpGroup_updateInvMatrix( ViewsWarpGroup _this )
{
  XFloat x1 = _this->Super1.vertices[ 0 ][ 0 ];
  XFloat y1 = _this->Super1.vertices[ 0 ][ 1 ];
  XFloat x2 = _this->Super1.vertices[ 1 ][ 0 ];
  XFloat y2 = _this->Super1.vertices[ 1 ][ 1 ];
  XFloat x3 = _this->Super1.vertices[ 2 ][ 0 ];
  XFloat y3 = _this->Super1.vertices[ 2 ][ 1 ];
  XFloat x4 = _this->Super1.vertices[ 3 ][ 0 ];
  XFloat y4 = _this->Super1.vertices[ 3 ][ 1 ];
  XFloat deltaX1 = x2 - x3;
  XFloat deltaY1 = y2 - y3;
  XFloat deltaX2 = x4 - x3;
  XFloat deltaY2 = y4 - y3;
  XFloat sumX = (( x1 - x2 ) + x3 ) - x4;
  XFloat sumY = (( y1 - y2 ) + y3 ) - y4;
  XFloat det = ( deltaX1 * deltaY2 ) - ( deltaY1 * deltaX2 );
  XFloat g;
  XFloat h;
  XFloat i;
  XFloat a;
  XFloat b;
  XFloat c;
  XFloat d;
  XFloat e;
  XFloat f;

  if ( det == 0.000000f )
    return;

  g = (( sumX * deltaY2 ) - ( sumY * deltaX2 )) / det;
  h = (( deltaX1 * sumY ) - ( deltaY1 * sumX )) / det;
  i = 1.000000f;
  a = ( x2 - x1 ) + ( g * x2 );
  b = ( x4 - x1 ) + ( h * x4 );
  c = x1;
  d = ( y2 - y1 ) + ( g * y2 );
  e = ( y4 - y1 ) + ( h * y4 );
  f = y1;
  _this->i11 = ( e * i ) - ( f * h );
  _this->i12 = ( c * h ) - ( b * i );
  _this->i13 = ( b * f ) - ( c * e );
  _this->i21 = ( f * g ) - ( d * i );
  _this->i22 = ( a * i ) - ( c * g );
  _this->i23 = ( c * d ) - ( a * f );
  _this->i31 = ( d * h ) - ( e * g );
  _this->i32 = ( b * g ) - ( a * h );
  _this->i33 = ( a * e ) - ( b * d );
  _this->invMatrixValid = 1;
}

/* 'C' function for method : 'Views::WarpGroup.mapPosition()' */
XPoint ViewsWarpGroup_mapPosition( ViewsWarpGroup _this, XPoint aPos )
{
  XFloat xd;
  XFloat yd;
  XFloat xs;
  XFloat ys;
  XFloat qs;
  XRect srcArea;

  if ( !_this->invMatrixValid )
    ViewsWarpGroup_updateInvMatrix( _this );

  xd = (XFloat)aPos.X;
  yd = (XFloat)aPos.Y;
  xs = (( xd * _this->i11 ) + ( yd * _this->i12 )) + _this->i13;
  ys = (( xd * _this->i21 ) + ( yd * _this->i22 )) + _this->i23;
  qs = (( xd * _this->i31 ) + ( yd * _this->i32 )) + _this->i33;

  if ( qs != 0.000000f )
  {
    xs = xs / qs;
    ys = ys / qs;
  }

  srcArea = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));
  xs = xs * (XFloat)EwGetRectW( srcArea );
  ys = ys * (XFloat)EwGetRectH( srcArea );
  return EwMovePointPos( EwNewPoint((XInt32)xs, (XInt32)ys ), srcArea.Point1 );
}

/* 'C' function for method : 'Views::WarpGroup.observerSlot()' */
void ViewsWarpGroup_observerSlot( ViewsWarpGroup _this, XObject sender )
{
  XPoint oldBitmapSize;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldBitmapSize = _this->Super1.bitmapSize;

  if ( _this->Group != 0 )
    _this->bitmap = ((ResourcesBitmap)_this->Group->buffer );
  else
    _this->bitmap = 0;

  if ( _this->bitmap != 0 )
    _this->Super1.bitmapSize = _this->bitmap->FrameSize;
  else
    _this->Super1.bitmapSize = _Const0002;

  if ((( !EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ) || (( _this->Super1.oldUpdateCase 
      == 'E' ) && ( _this->Super1.newUpdateCase == 0x0000 ))) && ( _this->Super3.Owner 
      != 0 )) && (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.oldUpdateCase != 'E' ) && ( _this->Super1.newUpdateCase == 
      0x0000 )) && EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ))
  {
    _this->Super1.newUpdateCase = _this->Super1.oldUpdateCase;
    EwPostSignal( EwNewSlot( _this, ViewsWarpView__update ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::WarpGroup.OnSetOpacity()' */
void ViewsWarpGroup_OnSetOpacity( ViewsWarpGroup _this, XInt32 value )
{
  if (((( value == _this->Opacity1 ) && ( value == _this->Opacity2 )) && ( value 
      == _this->Opacity3 )) && ( value == _this->Opacity4 ))
    return;

  _this->Opacity1 = value;
  _this->Opacity2 = value;
  _this->Opacity3 = value;
  _this->Opacity4 = value;

  if (( _this->Super3.Owner != 0 ) && (( _this->Super3.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpGroup.OnSetGroup()' */
void ViewsWarpGroup_OnSetGroup( ViewsWarpGroup _this, CoreGroup value )
{
  if ( value == _this->Group )
    return;

  if (( value != 0 ) && ( value == _this->Super3.Owner ))
  {
    EwThrow( EwLoadString( &_Const0009 ));
    return;
  }

  if ( _this->Group != 0 )
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpGroup_observerSlot ), (XObject)_this->Group, 
      0 );
    _this->bitmap = 0;
  }

  _this->Group = value;

  if ( value != 0 )
  {
    EwAttachObjObserver( EwNewSlot( _this, ViewsWarpGroup_observerSlot ), (XObject)value, 
      0 );
    _this->bitmap = ((ResourcesBitmap)value->buffer );
  }

  EwSignal( EwNewSlot( _this, ViewsWarpGroup_observerSlot ), ((XObject)_this ));
}

/* Variants derived from the class : 'Views::WarpGroup' */
EW_DEFINE_CLASS_VARIANTS( ViewsWarpGroup )
EW_END_OF_CLASS_VARIANTS( ViewsWarpGroup )

/* Virtual Method Table (VMT) for the class : 'Views::WarpGroup' */
EW_DEFINE_CLASS( ViewsWarpGroup, ViewsWarpView, "Views::WarpGroup" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  ViewsWarpGroup_Draw,
  ViewsWarpGroup_HandleEvent,
  ViewsWarpGroup_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  ViewsWarpView_OnSetPoint4,
  ViewsWarpView_OnSetPoint3,
  ViewsWarpView_OnSetPoint2,
  ViewsWarpView_OnSetPoint1,
  ViewsWarpGroup_update,
EW_END_OF_CLASS( ViewsWarpGroup )

/* Embedded Wizard */
