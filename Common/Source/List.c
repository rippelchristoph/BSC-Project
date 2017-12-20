/****************************************************************************
*
* FILE: List.c
*
* DESCRIPTION:
*   This File handles a UART Connection
*
* PUBLIC FUNCTIONS:
*
*
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


#endif

/*** HEADER ****************************************************************/

/****************************************************************************
* SECTION: Declaration of private functions
****************************************************************************/
PRIVATE TListNode* makeNode(void* aData, TListNode* aNext);

PRIVATE void* freeNode(TListNode* aNode);
/****************************************************************************
* SECTION: Implementation of public functions
****************************************************************************/

/****************************************************************************
* FUNCTION: newList
*
* DESCRIPTION:
*   Initializes a new Plotter
*
****************************************************************************/
PUBLIC TListHeader* newList()
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
* FUNCTION: ListAdd
*
* DESCRIPTION:
*	Adds a new Node to the End of the List
*
****************************************************************************/
PUBLIC TListNode *ListAdd(TListHeader* aList, void* aData) {
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
*
*
****************************************************************************/
PUBLIC TListNode *ListSetReadPointer(TListHeader* aList, int aIndex) {
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
*
*
****************************************************************************/
PUBLIC void* ListGetNext(TListHeader* aList) {

	TListNode* retPtr;
	retPtr = aList->ReadPointer;
	aList->ReadPointer = aList->ReadPointer->Next;

	return retPtr->Data;
}

/****************************************************************************
* FUNCTION: ListIndexOf
*
* DESCRIPTION:
*
*
****************************************************************************/
PUBLIC int ListIndexOf(TListHeader* aList, void* aData) {
	ListSetReadPointer(aList, 0);

	for (int i = 0; i < aList->Len; i++) {
		if (ListGetNext(aList) == aData) {
			return i;
		}
	}
}
/****************************************************************************
* FUNCTION: ListRemove
*
* DESCRIPTION:
*	Deletes a single Node out of the List and returns the Pointer
*		that was saved in the Data field of the Node
*	
*
****************************************************************************/
PUBLIC void* ListRemove(TListHeader* aList, int aIndex) {

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

PRIVATE TListNode* makeNode(void* aData, TListNode* aNext) {
	TListNode *newPtr;    /* Zeiger auf zugewiesenen Speicher */

	if ((newPtr = (TListHeader *)malloc(sizeof(TListNode))) != NULL) {
		newPtr->Next = aNext;
	}

	return newPtr;
}

PRIVATE void* freeNode(TListNode* aNode) {

	void* retPtr = aNode->Data;
	free(aNode);

	return retPtr;
}