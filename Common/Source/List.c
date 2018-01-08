/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: List.c
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
 *   ListRemove
 *
 * PRIVATE FUNCTIONS:
 *   makeNode
 *   freeNode
 ****************************************************************************/

/****************************************************************************
* SECTION: #include
****************************************************************************/

#include <stdlib.h>

/** HEADER ******************************************************************
 */
#ifndef  LIST_H

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
	struct ListNode* Next
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


#endif

/*
 ** HEADER ******************************************************************/

/****************************************************************************
 * SECTION: Declaration of private functions
 ****************************************************************************/

PRIVATE TListNode *
makeNode (
  void *                        aData,
  TListNode *                   aNext );

PRIVATE void *
freeNode (
  TListNode *                   aNode );


/****************************************************************************
 * FUNCTION: newList
 *
 * DESCRIPTION:
 *   Initializes a new List by creating a Header.
 * RETURN:
 *   Returns the Pointer of the new allocated TListHeader
 ****************************************************************************/
PUBLIC TListHeader *
newList ( void )
{
	TListHeader * aList;
	if ((aList = (TListHeader*) malloc(sizeof(TListHeader))) != NULL) {
		aList->Len = 0;
		aList->First = aList->Last = NULL;
	}

	aList->ReadPointer = aList->First;
	return aList;
}

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
  TListHeader * aList )
{
	if (aList->Len!=NULL)
	{
		//TODO: Mimimi
	}

	free(aList);

	return;
}

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
  void *        aData )
{
	TListNode *newPtr;
	if ((newPtr = makeNode(aData, (TListNode*)NULL)) != NULL)
	{
		if (aList->Len != 0)  /* -- Liste nicht leer ? */
			aList->Last->Next = newPtr;
		else
			aList->First = newPtr;

		aList->Last = newPtr;

		aList->Len++;
	}

	return newPtr;
}


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
  int           aIndex )
{
	int i = 0;
	aList->ReadPointer = aList->First;

	for (int i = 0; i < aIndex; i++) {
		if (i >= aList->Len) {
			return NULL;
		}
		aList->ReadPointer = aList->ReadPointer->Next;
	}

	return aList->ReadPointer;
}

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
  TListHeader * aList )
{
	//List Empty?
	if (aList->Len <= 0) {
		return NULL;
	}

	//List at the End?
	if (aList->ReadPointer == NULL) {
		return NULL;
	}

	TListNode* retPtr;
	retPtr = aList->ReadPointer;
	
	//Last time that retPtr->Data is returned. Next Time -> NULL
	if (retPtr == aList->Last) {
		aList->ReadPointer = NULL;
	}
	else {
		//Go to Next Node for next iteration
		aList->ReadPointer = aList->ReadPointer->Next;
	}

	return retPtr->Data;
}

/****************************************************************************
 * FUNCTION: ListRemove
 *
 * DESCRIPTION:
 *   Deletes a single Node out of the List and returns the Pointer that was
 *   saved in the Data field of the Node The malloc of the Node is free´d but
 *   not the Data pointer
 * PARAMETER:
 *   aList  - The Pointer of the List Header
 *   aIndex - The Index of the Node that should be removed
 * RETURN:
 *   Returns the Data Pointer of the Removed Node.
 ****************************************************************************/
PUBLIC void *
ListRemove (
  TListHeader * aList,
  int           aIndex )
{

	TListNode* delNode;

	//Not Empty
	if (aList->Len == 0)	
		return NULL;

	//Last One Remaining
	if (aList->Len == 1) {	
		delNode = aList->First;
		aList->First = NULL;
		aList->Last = NULL;
		aList->Len = 0;
		aList->ReadPointer = NULL;
		return freeNode(delNode);
	}

	//Delete First
	if (aIndex == 0) {	
		delNode = aList->First;
		aList->First = aList->First->Next;
		aList->Len--;
		return freeNode(delNode);
	}

	//Delete Last
	if (aIndex == aList->Len - 1) {	
		delNode = aList->Last;

		ListSetReadPointer(aList, aList->Len - 2);	//Node before the Last One
		aList->ReadPointer->Next = NULL;			
		aList->Last = aList->ReadPointer;			
		aList->Len--;
		return freeNode(delNode);
		
	}

	//Node before the one to delete
	ListSetReadPointer(aList, aIndex - 1);

	delNode = aList->ReadPointer->Next;	//Keep Pointer to free the Node
	aList->ReadPointer->Next = aList->ReadPointer->Next->Next; 
										//Now Pointers skip the Deleted Node

	return freeNode(delNode);
}

/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
/****************************************************************************
 * FUNCTION: makeNode
 *
 * DESCRIPTION:
 *   Allocates the Storage for a new Node and initializes the Data and Next
 *   field of it with the Paramters given PARAMETER: aData - Data Pointer
 *   aNext - Next Pointer
 * PARAMETER:
 *   aData - The Data Pointer for the new Node
 *   aNext - A Next Pointer for the new Node
 * RETURN:
 *   Returns the Pointer of the new Node
 ****************************************************************************/
PRIVATE TListNode *
makeNode (
  void *      aData,
  TListNode * aNext )
{
	TListNode *newPtr;    /* Zeiger auf zugewiesenen Speicher */

	if ((newPtr = (TListHeader *)malloc(sizeof(TListNode))) != NULL) {
		newPtr->Next = aNext;
	}

	return newPtr;
}
/****************************************************************************
 * FUNCTION: freeNode
 *
 * DESCRIPTION:
 *   Calls the free Function for the Node. PARAMETER: aNode - Pointer of the
 *   node that should be destroyed
 * PARAMETER:
 *   aNode - The node which should be desroyed
 * RETURN:
 *   Returns the Pointer of the Data Field of the Node because the storage
 *   allocation of this Field is not handled by this Type
 ****************************************************************************/
PRIVATE void *
freeNode (
  TListNode * aNode )
{
	void* retPtr = aNode->Data;
	free(aNode);
	return retPtr;
}