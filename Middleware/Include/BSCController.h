/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: BSCController.h
 *
 *   DESCRIPTION:
 *
 *
 *   PUBLIC FUNCTIONS:
 *
 * PUBLIC FUNCTIONS:
 *   newBSCController
 *   destroyBSCController
 *   BSCReadConfiguration
 *   BSCWriteConfiguration
 *   ProcessBSCController
 *   BSCShutdown
 *   GetFormattedTime
 *   BSCAddOrder
 *   BSCRemoveOrder
 ****************************************************************************/

#ifndef BSCCONTROLLER_H
#define BSCCONTROLLER_H


  /****************************************************************************
  * SECTION: #include
  ****************************************************************************/
#include "HtlStdDef.h"
#include "BSCCommonTypes.h"
#include "Device.h"
#include "OrderController.h"
#include "Sampler.h"
#include "Logger.h"
#include <time.h>


  /****************************************************************************
  * SECTION: typedef
  ****************************************************************************/

typedef struct BSCController {
	TBSCConfig* Configuration;
	TLogger* Logger;
	TWellData** Well;
	TOrderController* Orders;
	TSampler* Sampler;
	DeviceDeviceClass EwDeviceObject;
	time_t LastUpdate;
	char* WorkingDirectory;
} TBSCController;

/****************************************************************************
 * SECTION: Declaration of Global Variables
 ****************************************************************************/
TBoolean ShutdownBSCController;
TBSCController* BSCController;


#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newBSCController
 *
 * DESCRIPTION:
 *   Initializes a new BSC Controller
 * RETURN:
 *   Returns the new Address of the BSController
 ****************************************************************************/

PUBLIC TBSCController *
newBSCController ( void );


/****************************************************************************
 * FUNCTION: destroyBSCController
 ****************************************************************************/

PUBLIC void
destroyBSCController (
  TBSCController * aController );


/****************************************************************************
 * FUNCTION: BSCReadConfiguration
 *
 *   DESCRIPTION:
 *     Sends a Command to the Plotter
 ****************************************************************************/

PUBLIC void
BSCReadConfiguration (
  TBSCConfig * aConfiguration,
  char *       fileDirectory );


/****************************************************************************
 * FUNCTION: BSCWriteConfiguration
 *
 * DESCRIPTION:
 *   Writes the Configuration into the File Directory given.
 * PARAMETER:
 *   aConfiguration - The Configuration that is written
 *   aFilePath      - The Drectory the Configuration is written to e.g:
 *                    "C:\Data\Configuration.txt"
 ****************************************************************************/

PUBLIC void
BSCWriteConfiguration (
  TBSCConfig * aConfiguration,
  char *       aFilePath );


/****************************************************************************
 * FUNCTION: ProcessBSCController
 ****************************************************************************/

PUBLIC int
ProcessBSCController (
  TBSCController * aBSCController );


/****************************************************************************
 * FUNCTION: BSCShutdown
 ****************************************************************************/

PUBLIC void
BSCShutdown ( void );


/****************************************************************************
 * FUNCTION: GetFormattedTime
 * DESCRIPTION:
 *   Writes the given Timestamp formatted as a string into the Buffer.
 *   Format: DD.MM.YYYY HH.MM.SS
 * PARAMETER:
 *   aTimeStamp - The Timestamp that should be formatted aBuffer - Address of
 *                already allocated Storage. There should be at least space
 *                for 20 characters
 ****************************************************************************/

PUBLIC void
GetFormattedTime (
  time_t * aTimeStamp,
  char *   aBuffer );


/****************************************************************************
 * FUNCTION: BSCAddOrder
 * DESCRIPTION:
 *   Wrapper function to add an Order to the OrderController of the
 *   BSCController
 ****************************************************************************/

PUBLIC void
BSCAddOrder (
  int aInterval,
  int aOrigin );


/****************************************************************************
 * FUNCTION: BSCRemoveOrder
 * DESCRIPTION:
 *   Wrapper function to add an Order to the OrderController of the
 *   BSCController
 ****************************************************************************/

PUBLIC void
BSCRemoveOrder (
  int aInterval,
  int aOrigin );



#ifdef __cplusplus
  }
#endif

#endif /* BSCCONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
