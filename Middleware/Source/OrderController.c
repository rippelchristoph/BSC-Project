/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Orders.c
 *
 *   DESCRIPTION:
 *     This File handles the List of Orders and among other tasks, checks if
 *     any of the Orders due.
 *
 * PUBLIC FUNCTIONS:
 *   newOrderController
 *   destroyOrderController
 *   ProcessOrderController
 *   OrderControllerAddOrder
 *   OrderControllerRemoveOrder
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** HEADER ******************************************************************
 */
#ifndef  ORDERCONTROLLER_H

  /****************************************************************************
  * SECTION: #include
  ****************************************************************************/
#include "HtlStdDef.h"
#include "BSCCommonTypes.h"
#include "List.h"
#include "Order.h"



  /****************************************************************************
  * SECTION: typedef
  ****************************************************************************/

typedef struct OrderController {
	TListHeader* OrderList;

}TOrderController;

#endif

/*
 ** HEADER ******************************************************************/

 /****************************************************************************
  * SECTION: Declaration of private functions
  ****************************************************************************/


/****************************************************************************
 * SECTION: Implementation of public functions
 ****************************************************************************/

/****************************************************************************
 * FUNCTION: newOrderController
 *
 *   DESCRIPTION:
 *     Initializes a new OrderController and allocates storage for its
 *     variables.
 * RETURN:
 *   Returns the Pointer of the new OrderController
 ****************************************************************************/
PUBLIC TOrderController *
newOrderController ( void )
{
	printf("OC Init\n");
	TOrderController* retPtr;
	retPtr = (TOrderController*)malloc(sizeof(TOrderController));
	retPtr->OrderList = newList();

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyOrderController
 *
 *   DESCRIPTION:
 *     Destroys the OrderController by firstly removing all Orders, then
 *     removing the list and finally deallocating the storage
 * PARAMETERS:
 *   aController - The Controller that should be destroyed
 ****************************************************************************/
PUBLIC void
destroyOrderController (
  TOrderController * aController )
{
	if (aController != NULL) {
		//Remove and destroy all Orders
		while (destroyOrder(ListRemoveByIndex(aController->OrderList, 0)) != -1)
			;

		//Destroy Now Empty List
		destroyList(aController->OrderList);

		free(aController);
	}
}


/****************************************************************************
 * FUNCTION: ProcessOrderController
 * DESCRIPTION:
 *   Processes all Orders and returns the Origin of a new Probe if Ready.
 *   This should be called Repeatedly but not too often as all TimeStamps are
 *   calculated in whole seconds
 * PARAMETER:
 *   aOrderController - The Pointer of the OrderController to be Processed
 * RETURN:
 *   Returns an Origin, if an Order is ready. if not it returns -1
 ****************************************************************************/
PUBLIC int
ProcessOrderController (
  TOrderController * aOrderController )
{
	TOrder* testOrder;
	int retOrg = -1;
	ListSetReadPointer(aOrderController->OrderList, 0);

	while ((testOrder = ListGetNext(aOrderController->OrderList)) != NULL)
	{
		if ((retOrg = ProcessOrder(testOrder)) != -1) {
			testOrder->lastExe = time(NULL);
			return retOrg;
		}
	}

	return -1;
}

/****************************************************************************
 * FUNCTION: OrderControllerAddOrder
 * DESCRIPTION:
 *   Adds a new Order to the OrderList
 * PARAMETER:
 *   aOrderController - The Pointer of the OrderController
 *   aInterval        - The Interval of the new Order [s]
 *   aOrigin          - The Origin of the new Order [0..5]
 ****************************************************************************/
PUBLIC void
OrderControllerAddOrder (
  TOrderController * aOrderController,
  time_t             aInterval,
  int                aOrigin )
{
	TOrder* addOrder = newOrder(aOrigin, aInterval);
	ListAdd(aOrderController->OrderList, addOrder);
}

/****************************************************************************
 * FUNCTION: OrderControllerRemoveOrder
 * DESCRIPTION:
 *   Removes all Orders of the given Origin
 * PARAMETER:
 *   aOrderController - The Pointer of the OrderController
 *   aOrigin          - The Origin of which all orders should be removed
 *                      [0..5]
 ****************************************************************************/
PUBLIC void
OrderControllerRemoveOrder (
  TOrderController * aOrderController,
  int                aOrigin )
{
	TOrder* testOrder;
	ListSetReadPointer(aOrderController->OrderList, 0);

	while ((testOrder = ListGetNext(aOrderController->OrderList))!=NULL)
	{
		if (testOrder->Origin == aOrigin) {
			destroyOrder(ListRemoveByDataPointer(aOrderController->OrderList, testOrder));
		}
	}
}
