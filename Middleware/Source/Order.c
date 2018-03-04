/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Order.c
 *
 * DESCRIPTION:
 *   This File represents a single Order
 *
 * PUBLIC FUNCTIONS:
 *   newOrder
 *   destroyOrder
 *   OrderGetNextExecution
 *   OrderGetRemainingTime
 *   ProcessOrder
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/

#include <stdlib.h>
#include <stdio.h>

/** HEADER ******************************************************************
 */
#ifndef  ORDER_H

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"
#include <time.h>

/****************************************************************************
* SECTION: typedef
****************************************************************************/

typedef struct Order {
	int Origin;
	time_t lastExe;
	time_t interval;
}TOrder;

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
 * FUNCTION: newOrder
 * DESCRIPTION:
 *   Initializes a new Order and allocates Storage for it.
 * PARAMETER:
 *   aOrigin   - The Circutinumber of the Order [0..5]
 *   aInterval - The Interval of the Order in seconds
 ****************************************************************************/
PUBLIC TOrder *
newOrder (
  int    aOrigin,
  time_t aInterval )
{
	TOrder* retPtr;
	retPtr = (TOrder*)malloc(sizeof(TOrder));
	if (retPtr == NULL) {
		return NULL;
	}

	retPtr->Origin = aOrigin;
	retPtr->interval = aInterval;
	retPtr->lastExe = time(NULL);

	printf("New Order: CN: aOrigin = %i, aInterval = %i", aOrigin, (int) aInterval);
	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyOrder
 *
 * DESCRIPTION:
 *   Destroys the order and frees the allocated storage. This has to be
 *   called.
 * PARAMETER:
 *   aOrder - The Order that should be destroyed
 * RETURN:
 *   It returns the Origin that was saved in the Order
 ****************************************************************************/
PUBLIC int
destroyOrder (
  TOrder * aOrder )
{
	if (aOrder != NULL) {
		int retVal = aOrder->Origin;
		free(aOrder);
		return retVal;
	} else {
		return -1;
	}
}

/****************************************************************************
 * FUNCTION: OrderGetNextExecution
 *
 * DESCRIPTION:
 *   Returns the timestamp of the Next time the Order will be executed
 * PARAMETER:
 *   aOrder - The Adress of Order
 * RETURN:
 *   Returns the absolute Time stamp of the Next Execution in seconds
 ****************************************************************************/
PUBLIC time_t
OrderGetNextExecution (
  TOrder * aOrder )
{
	return aOrder->lastExe + aOrder->interval;
}

/****************************************************************************
 * FUNCTION: OrderGetRemainingTime
 *
 * DESCRIPTION:
 *   Returns the remaining Time of an Order until its next Activated
 * PARAMETER:
 *   aOrder - The Adress of Order
 * RETURN:
 *   Returns the Remaining time until the next Execution of the Order in
 *   Seconds
 ****************************************************************************/
PUBLIC time_t
OrderGetRemainingTime (
  TOrder * aOrder )
{
	time_t now = time(NULL);

	return OrderGetNextExecution(aOrder) - now;
}

/****************************************************************************
 * FUNCTION: ProcessOrder
 *
 * DESCRIPTION:
 *   Processes an Order. Therefore it has to be called periodically.
 * PARAMETER:
 *   aOrder - The Order that should be processed
 * RETURN:
 *   If an Order is ready, the Function returns the corresponding Origin. If
 *   there is nothing to do, the function returns '-1'
 ****************************************************************************/
PUBLIC int
ProcessOrder (
  TOrder * aOrder )
{
	time_t now = time(NULL);

	if ((aOrder->lastExe + aOrder->interval) <= now) {
		aOrder->lastExe = now;
		return aOrder->Origin;
	}
	else {
		return -1;
	}
}
/****************************************************************************
 * SECTION: Implementation of private functions
 ****************************************************************************/
