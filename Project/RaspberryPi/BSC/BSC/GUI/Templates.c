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
#include "_TemplatesDeviceClass.h"
#include "_TemplatesNumKeyboard.h"
#include "_TemplatesTextEditor.h"
#include "Templates.h"

/* Initializer for the class 'Templates::TextEditor' */
void TemplatesTextEditor__Init( TemplatesTextEditor _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( TemplatesTextEditor );
}

/* Re-Initializer for the class 'Templates::TextEditor' */
void TemplatesTextEditor__ReInit( TemplatesTextEditor _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Templates::TextEditor' */
void TemplatesTextEditor__Done( TemplatesTextEditor _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( TemplatesTextEditor );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Templates::TextEditor' */
void TemplatesTextEditor__Mark( TemplatesTextEditor _this )
{
  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* Variants derived from the class : 'Templates::TextEditor' */
EW_DEFINE_CLASS_VARIANTS( TemplatesTextEditor )
EW_END_OF_CLASS_VARIANTS( TemplatesTextEditor )

/* Virtual Method Table (VMT) for the class : 'Templates::TextEditor' */
EW_DEFINE_CLASS( TemplatesTextEditor, CoreGroup, "Templates::TextEditor" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( TemplatesTextEditor )

/* Initializer for the class 'Templates::NumKeyboard' */
void TemplatesNumKeyboard__Init( TemplatesNumKeyboard _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( TemplatesNumKeyboard );
}

/* Re-Initializer for the class 'Templates::NumKeyboard' */
void TemplatesNumKeyboard__ReInit( TemplatesNumKeyboard _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Templates::NumKeyboard' */
void TemplatesNumKeyboard__Done( TemplatesNumKeyboard _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( TemplatesNumKeyboard );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Templates::NumKeyboard' */
void TemplatesNumKeyboard__Mark( TemplatesNumKeyboard _this )
{
  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* Variants derived from the class : 'Templates::NumKeyboard' */
EW_DEFINE_CLASS_VARIANTS( TemplatesNumKeyboard )
EW_END_OF_CLASS_VARIANTS( TemplatesNumKeyboard )

/* Virtual Method Table (VMT) for the class : 'Templates::NumKeyboard' */
EW_DEFINE_CLASS( TemplatesNumKeyboard, CoreGroup, "Templates::NumKeyboard" )
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
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( TemplatesNumKeyboard )

/* Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Init( TemplatesDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( TemplatesDeviceClass );
}

/* Re-Initializer for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__ReInit( TemplatesDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Done( TemplatesDeviceClass _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Templates::DeviceClass' */
void TemplatesDeviceClass__Mark( TemplatesDeviceClass _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* Variants derived from the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( TemplatesDeviceClass )
EW_END_OF_CLASS_VARIANTS( TemplatesDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Templates::DeviceClass' */
EW_DEFINE_CLASS( TemplatesDeviceClass, XObject, "Templates::DeviceClass" )
EW_END_OF_CLASS( TemplatesDeviceClass )

/* Embedded Wizard */
