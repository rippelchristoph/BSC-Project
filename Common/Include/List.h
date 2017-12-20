/****************************************************************************
*
* FILE: List.h
*
* DESCRIPTION:
*   This File handles a UART Connection
*
* PUBLIC FUNCTIONS:
*
*
****************************************************************************/

#ifndef LIST_H
#define LIST_H


/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"



/****************************************************************************
* SECTION: typedef
****************************************************************************/
/****************************************************************************
*
****************************************************************************/
typedef struct ListNode {
	void* Data;
	struct ListNode* Next

} TListNode;

typedef struct ListHeader {
	int Len;
	TListNode* First;
	TListNode* Last;
	TListNode* ReadPointer;
}TListHeader;




#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
* FUNCTION: newList
*
* DESCRIPTION:
*   Initializes a new Plotter
*
****************************************************************************/

PUBLIC TListHeader* newList();


/****************************************************************************
* FUNCTION: ListAdd
*
* DESCRIPTION:
*
*
****************************************************************************/

PUBLIC TListNode *ListAdd(TListHeader* aList, void* aData);


/****************************************************************************
* FUNCTION: ListSetReadPointer
*
* DESCRIPTION:
*
*
****************************************************************************/

PUBLIC TListNode *ListSetReadPointer(TListHeader* aList, int aIndex);


/****************************************************************************
* FUNCTION: ListGetNext
*
* DESCRIPTION:
*
*
****************************************************************************/

PUBLIC void* ListGetNext(TListHeader* aList);


/****************************************************************************
* FUNCTION: ListIndexOf
*
* DESCRIPTION:
*
*
****************************************************************************/

PUBLIC int ListIndexOf(TListHeader* aList, void* aData);


/****************************************************************************
* FUNCTION: ListRemove
*
* DESCRIPTION:
*
*
****************************************************************************/

PUBLIC void* ListRemove(TListHeader* aList, int aIndex);



#ifdef __cplusplus
  }
#endif

#endif /* LIST_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
