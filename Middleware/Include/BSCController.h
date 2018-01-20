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
 *   ProcessBSCController
 *   BSCWriteConfiguration
 *   GetFormattedTime
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

/****************************************************************************
* SECTION: #define
****************************************************************************/

#define NWELLX		0
#define NWELLY		1

#define ZDOWN		2
#define ZUP			3

#define WELLZEROX	4
#define WELLZEROY	5
#define WELLENDX	6
#define WELLENDY	7

#define NORIGINS	8

#define WAISTPOSX 9
#define WAISTPOSZ 10

const char * const ConfigSyntaxWords[] = { "NWELLX", "NWELLY", "ZDOWN",
"ZUP", "WELLZEROX", "WELLZEROY", "WELLENDX",
"WELLENDY", "NORIGINS", "WAISTPOSX",  "WAISTPOSZ", NULL };

/****************************************************************************
* SECTION: typedef
****************************************************************************/

/****************************************************************************
 * TYPE: BSCConfig
 *
 * DESCRIPTION:
 *   Configruation type that keeps all values that the BSCController and some
 *   classes beneath need. To add another value, you have to add it in the
 *   BSCConfig type, the array and the #define with the corresponding index
 *   and the switch/case statement
 ****************************************************************************/

typedef struct BSCConfig {
	int NWellX;
	int NWellY;

	double ZDown;
	double ZUp;

	double WellZeroX;
	double WellZeroY;

	double WellEndX;
	double WellEndY;

	double WaistPosX;
	double WaistPosY;
	double WaistPosZ;

	int NOrigins;
} TBSCConfig;



typedef struct BSCController {
	TBSCConfig* Configuration;
	TWellData** Well;
	TOrderController* Orders;
	TSampler* Sampler;
	DeviceDeviceClass EwDeviceObject;
} TBSCController;




#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
* FUNCTION: newBSCController
*
* DESCRIPTION:
*   Initializes a new BSC Controller
* RETURN:
Returns the new Address of the BSController
****************************************************************************/

PUBLIC TBSCController *
newBSCController ( void );


/****************************************************************************
* FUNCTION: BSCReadConfiguration
*
* DESCRIPTION:
*   Sends a Command to the Plotter
****************************************************************************/

PUBLIC void
BSCReadConfiguration (
  TBSCConfig * aConfiguration,
  char *       fileDirectory );


/****************************************************************************
 * FUNCTION: ProcessBSCController
 ****************************************************************************/

PUBLIC void
ProcessBSCController (
  TBSCController * aBSCController );


/****************************************************************************
 * FUNCTION: BSCWriteConfiguration
 *
 *   DESCRIPTION:
 *     Writes the Configuration into the File Directory given.
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
  time_t aTimeStamp,
  char * aBuffer );



#ifdef __cplusplus
  }
#endif

#endif /* BSCCONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
