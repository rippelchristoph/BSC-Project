/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Order.h
 *
 * DESCRIPTION:
 *   This File handles a UART Connection
 *
 * PUBLIC FUNCTIONS:
 *   newOrder
 *   destroyOrder
 *   orderProcess
 ****************************************************************************/

#ifndef ORDER_H
#define ORDER_H


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
  int aOrigin,
  int aInterval );


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
  TOrder * aOrder );



#ifdef __cplusplus
  }
#endif

#endif /* ORDER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
