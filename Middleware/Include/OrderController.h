/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Orders.h
 *
 *   DESCRIPTION:
 *     This File handles the List of Orders and among other tasks, checks if
 *     any of the Orders due.
 *
 * PUBLIC FUNCTIONS:
 *   newOrderController
 *   destroyOrderController
 *   addOrder
 *   ProcessOrderController
 *   OrderControllerAddOrder
 *   OrderControllerRemoveOrder
 ****************************************************************************/

#ifndef ORDERCONTROLLER_H
#define ORDERCONTROLLER_H


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



#ifdef __cplusplus
  extern "C" {
#endif



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
newOrderController ( void );


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
  TOrderController * aController );


/****************************************************************************
 * FUNCTION: addOrder
 * DESCRIPTION:
 *   The Function creates another Order according to the Parameters and adds
 *   it to the OrderList
 * PARAMETER:
 *   aOrderController - The Order Controller the Order should be added to
 *   aOrigin          - The Origin the Order should be taken From starting
 *                      with 1
 *   aInterval        - The Interval of the new Order in seconds
 ****************************************************************************/

PUBLIC TBoolean
addOrder (
  TOrderController * aOrderController,
  int                aOrigin,
  int                aInterval );


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
  TOrderController * aOrderController );


/****************************************************************************
 * FUNCTION: OrderControllerAddOrder
 * DESCRIPTION:
 *   Adds a new Order to the OrderList
 * PARAMETER:
 *   aOrderController - The Pointer of the OrderController
 *   aInterval        - The Interval of the new Order
 *   aOrigin          - The Origin of the new Order
 ****************************************************************************/

PUBLIC void
OrderControllerAddOrder (
  TOrderController * aOrderController,
  time_t             aInterval,
  int                aOrigin );


/****************************************************************************
 * FUNCTION: OrderControllerRemoveOrder
 * DESCRIPTION:
 *   Removes all Orders of the given Origin
 * PARAMETER:
 *   aOrderController - The Pointer of the OrderController
 *   aOrigin          - The Origin of which all orders should be removed
 *                      (beginning with 1)
 ****************************************************************************/

PUBLIC void
OrderControllerRemoveOrder (
  TOrderController * aOrderController,
  int                aOrigin );



#ifdef __cplusplus
  }
#endif

#endif /* ORDERCONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
