/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: List.h
 *
 * DESCRIPTION:
 *   This is a Common Type. With the functions you can set up a Singly Linked
 *   List The 'ReadPointer' in the header is used to save time when
 *   itterating over every single element. It can NOT be assured that the
 *   readPointer stays the same after calling a different function
 *
 *   The functions do NOT handle the storage allocation of the Node Data
 *   Fields
 *
 * PUBLIC FUNCTIONS:
 *   newList
 *   destroyList
 *   ListAdd
 *   ListSetReadPointer
 *   ListGetNext
 *   ListRemoveByIndex
 *   ListRemoveByDataPointer
 *   ListIsNotEmty
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
*	_TYPE: TListNode
****************************************************************************/
typedef struct ListNode {
	void* Data;
	struct ListNode* Next;
} TListNode;

/****************************************************************************
*	_TYPE: TListHeader
****************************************************************************/
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
 *   Initializes a new List by creating a Header.
 * RETURN:
 *   Returns the Pointer of the new allocated TListHeader
 ****************************************************************************/

PUBLIC TListHeader *
newList ( void );


/****************************************************************************
 * FUNCTION: destroyList
 *
 * DESCRIPTION:
 *   Before calling this function all Nodes have to be deleted by repeatedly
 *   calling ListRemove(TListHeader*, 0) until it
 *   returns NULL
 * PARAMETER:
 *   aList - The Adress of the TListHeader that should be destroyed
 ****************************************************************************/

PUBLIC void
destroyList (
  TListHeader * aList );


/****************************************************************************
 * FUNCTION: ListAdd
 *
 * DESCRIPTION:
 *   Adds a new Node to the End of the List
 * PARAMETER:
 *   aList - The List Header
 *   aData - The Pointer that will be written into the Data Field of the new
 *           Node
 * RETURN:
 *   Returns the Address of the new Node
 ****************************************************************************/

PUBLIC TListNode *
ListAdd (
  TListHeader * aList,
  void *        aData );


/****************************************************************************
 * FUNCTION: ListSetReadPointer
 *
 * DESCRIPTION:
 *   Function sets The ReadPointer to the given Index
 * PARAMETER:
 *   aList  - The Pointer of the List Header
 *   aIndex - The Index to which the ReadPointer is set
 * RETURN:
 *   Returns the new ReadPointer
 ****************************************************************************/

PUBLIC TListNode *
ListSetReadPointer (
  TListHeader * aList,
  int           aIndex );


/****************************************************************************
 * FUNCTION: ListGetNext
 *
 * DESCRIPTION:
 *   This Function is for itterations over the List. It uses the ReadPointer,
 *   that always points on the next node of which the data is returned. If
 *   another List Function is called between calling the GetNext Function
 *   twice, it is undefined if the ReadPointer is still on the same Spot.
 * PARAMETER:
 *   aList - a List of which the next Node is returned
 * RETURN:
 *   Function Returns the Data Pointer of the Node on which the ReadPointer
 *   points. If the List is at its end the Function will return NULL
 ****************************************************************************/

PUBLIC void *
ListGetNext (
  TListHeader * aList );


/****************************************************************************
 * FUNCTION: ListRemoveByIndex
 *
 * DESCRIPTION:
 *   Deletes a single Node out of the List and returns the Pointer that was
 *   saved in the Data field of the Node The malloc of the Node is free´d but
 *   not the Data pointer. The Node is selected by its Index in the List
 * PARAMETER:
 *   aList  - The Pointer of the List Header
 *   aIndex - The Index of the Node that should be removed
 * RETURN:
 *   Returns the Data Pointer of the Removed Node.
 ****************************************************************************/

PUBLIC void *
ListRemoveByIndex (
  TListHeader * aList,
  int           aIndex );


/****************************************************************************
 * FUNCTION: ListRemoveByDataPointer
 *
 *   DESCRIPTION:
 *     Deletes a single Node out of the List and returns the Pointer that was
 *     saved in the Data field of the Node The malloc of the Node is free´d
 *     but not the Data pointer The Node is selected by comparing its Data
 *     Pointer with the Parameter. A maximum of one Node will be deleted
 * PARAMETER:
 *   aList        - The Pointer of the List Header
 *   aDataPointer - The Pointer which is compared with the DataFields of the
 *                  Nodes
 * RETURN:
 *   Returns the Data Pointer of the Removed Node.
 ****************************************************************************/

PUBLIC void *
ListRemoveByDataPointer (
  TListHeader * aList,
  void *        aDataPointer );


/****************************************************************************
 * FUNCTION: ListIsNotEmty
 *
 * DESCRIPTION:
 *   Function checks if the List is Empty
 * PARAMETER:
 *   aList - The Adress of the List Header
 * RETURN:
 *   Returns TRUE if the List is not empty, FALSE if the List is empty
 ****************************************************************************/

PUBLIC TBoolean
ListIsNotEmty (
  TListHeader * aList );



#ifdef __cplusplus
  }
#endif

#endif /* LIST_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
