/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Order.h
 *
 * DESCRIPTION:
 *   This File represents a single Order
 *
 * PUBLIC FUNCTIONS:
 *   newOrder
 *   destroyOrder
 *   OrderGetRemainingTime
 *   OrderGetNextExecution
 *   ProcessOrder
 ****************************************************************************/

#ifndef ORDER_H
#define ORDER_H


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



#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newOrder
 *
 * DESCRIPTION:
 *   Initializes a new Order and allocates Storage for it
 ****************************************************************************/

PUBLIC TOrder *
newOrder (
  int    aOrigin,
  time_t aInterval );


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
  TOrder * aOrder );


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
  TOrder * aOrder );


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
  TOrder * aOrder );


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
  TOrder * aOrder );



#ifdef __cplusplus
  }
#endif

#endif /* ORDER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
