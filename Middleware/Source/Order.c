/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Order.c
 *
 * DESCRIPTION:
 *   This File handles a UART Connection
 *
 * PUBLIC FUNCTIONS:
 *   newOrder
 *   destroyOrder
 *   orderProcess
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/

#include <stdlib.h>

/** HEADER ******************************************************************
 */
#ifndef  ORDER_H

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"

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
 *
 * DESCRIPTION:
 *   Initializes a new Order and allocates Storage for it
 ****************************************************************************/
PUBLIC TOrder *
newOrder (
  int aOrigin,
  int aInterval )
{
	TOrder* retPtr;
	retPtr = (TOrder*)malloc(sizeof(TOrder));
	retPtr->Origin = aOrigin;
	retPtr->interval = aInterval;
	time(&retPtr->lastExe);	//No Probe at Beginning
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
	int retVal = aOrder->Origin;
	free(aOrder);
	return retVal;
}

/****************************************************************************
 * FUNCTION: orderProcess
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
orderProcess (
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
