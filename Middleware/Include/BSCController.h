/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: BSCController.h
 *
 * DESCRIPTION:
 *   This Class is the top-class, that handles all subcomponents. It is the
 *   Interface to the GUI.
 *
 * PUBLIC FUNCTIONS:
 *   newBSCController
 *   destroyBSCController
 *   BSCReadConfiguration
 *   BSCWriteConfiguration
 *   ProcessBSCController
 *   BSCShutdown
 *   BSCAddOrder
 *   BSCRemoveOrder
 *   BSCSetSampleVolume
 *   BSCSetFlowSpeed
 *   BSCSetWasteVolume
 *   BSCSetNeedleGap
 *   BSCSetNumHolesX
 *   BSCSetNumHolesY
 *   BSCSetPosition
 *   BSCSetCurrentPosition
 *   BSCStartConfig
 *   BSCStopConfig
 *   BSCNewWellStart
 *   BSCNewWellStop
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
#include "TemperatureController.h"
#include <time.h>

#define CONFIG_STARTPOS 0
#define CONFIG_ENDPOS 1
#define CONFIG_WASTEPOS 2
#define CONFIG_MOVINGPOS 3


  /****************************************************************************
  * SECTION: typedef
  ****************************************************************************/

typedef struct BSCController {
	TBSCConfig* Configuration;
	TTemperatureController* TempContr;
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

//Define Object of BSCController in Header, so EmWi Functions are easier
TBSCController* ControllerObj;


#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newBSCController
 *
 * DESCRIPTION:
 *   Initializes a new BSC Controller and all it´s Components
 * RETURN:
 *   Returns the new Address of the BSController
 ****************************************************************************/

PUBLIC TBSCController *
newBSCController ( void );


/****************************************************************************
 * FUNCTION: destroyBSCController
 * DESCRIPTION:
 *   Deinitializes the BSCController and all its sub-components. It also
 *   frees all allocated Storage
 * PARAMETER:
 *   aController - The Pointer of the Controller
 * RETURN:
 *   EFALSE if it was successful and ETRUE if the function was not successful
 ****************************************************************************/

PUBLIC void
destroyBSCController (
  TBSCController * aController );


/****************************************************************************
 * FUNCTION: BSCReadConfiguration
 *
 * DESCRIPTION:
 *   Reads a Configuration from a .txt File to the Address that is given. If
 *   the File cannot be found/opened the Function will not change the
 *   Configuration.
 * PARAMETER:
 *   aConfiguration - The Address of the Configuaration which the values of
 *                    the file should be assigned to.
 * RETURN:
 *   ETRUE if the File was not found and the Configuration was not changed.
 *   EFALSE if the File was opened successful.
 ****************************************************************************/

PUBLIC TBoolean
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
 *                    "/Data/Configuration.txt"
 * RETURN:
 *   ETRUE if the File was not found and the Configuration was not changed.
 *   EFALSE if the File was opened successful.
 ****************************************************************************/

PUBLIC TBoolean
BSCWriteConfiguration (
  TBSCConfig * aConfiguration,
  char *       aFilePath );


/****************************************************************************
 * FUNCTION: ProcessBSCController
 * DESCRIPTION:
 *   This function is called periodically and processes all Components of the
 *   BSCController.
 * RETURN:
 *   The Function returns a Boolean Variable that, when returned ETRUE, will
 *   shut down the MainLoop of the EmWi Application
 ****************************************************************************/

PUBLIC int
ProcessBSCController (
  TBSCController * aBSCController );


/****************************************************************************
 * FUNCTION: BSCShutdown
 * DESCRIPTION:
 *   The Variable set in this function will shut down the EmWi - MainLoop
 ****************************************************************************/

PUBLIC void
BSCShutdown ( void );


/****************************************************************************
 * FUNCTION: BSCAddOrder
 * DESCRIPTION:
 *   Wrapper function to add an Order to the OrderController of the
 *   BSCController
 * PARAMETER:
 *   aInterval - The Interval of the Order in minutes. If the Interval is 0,
 *               the Order will not be added to the OrderController, but is
 *               added to the Queue of the Sampler.
 *   aOrigin   - The CircuitNumber of which the Probes should be collected
 *               [0..5]
 ****************************************************************************/

PUBLIC void
BSCAddOrder (
  int aInterval,
  int aOrigin );


/****************************************************************************
 * FUNCTION: BSCRemoveOrder
 * DESCRIPTION:
 *   Wrapper function to remove an Order to the OrderController of the
 *   BSCController
 * PARAMETER:
 *   aOrigin - The CircuitNumber of which all Orders will be removed.
 ****************************************************************************/

PUBLIC void
BSCRemoveOrder (
  int aOrigin );


/****************************************************************************
 * FUNCTION: BSCSetSampleVolume
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Volume
 *   of a Single Sampler [µl].
 * PARAMETER:
 *   aSamplerVolUL - The Volume of a Sample in µl
 ****************************************************************************/

PUBLIC void
BSCSetSampleVolume (
  int aSampleVolUL );


/****************************************************************************
 * FUNCTION: BSCSetFlowSpeed
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Flow
 *   Speed with which the serum flows [µl/s]
 * PARAMETER:
 *   aSpeedULPS - The Flow Speed
 ****************************************************************************/

PUBLIC void
BSCSetFlowSpeed (
  int aSpeedULPS );


/****************************************************************************
 * FUNCTION: BSCSetWasteVolume
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Volume
 *   that is wasted before taking a probe [µl].
 * PARAMETER:
 *   aWastVolUL - The Volume that is wasted.
 ****************************************************************************/

PUBLIC void
BSCSetWasteVolume (
  int aWastVolUL );


/****************************************************************************
 * FUNCTION: BSCSetNeedleGap
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Distance
 *   between the needles. The Distance between the Needles have to be the
 *   same between every needle.
 * PARAMETER:
 *   aNeedleGapum - The Distance between two Needles [µl].
 ****************************************************************************/

PUBLIC void
BSCSetNeedleGap (
  int aNeedleGapum );


/****************************************************************************
 * FUNCTION: BSCSetNumHolesX
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Number
 *   of holes in the well in X-Direction
 * PARAMETER:
 *   aNumHolesX - Number of holes in x-Direction
 ****************************************************************************/

PUBLIC void
BSCSetNumHolesX (
  int aNumHolesX );


/****************************************************************************
 * FUNCTION: BSCSetNumHolesY
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Number
 *   of holes in the well in Y-Direction
 * PARAMETER:
 *   aNumHolesX - Number of holes in Y-Direction
 ****************************************************************************/

PUBLIC void
BSCSetNumHolesY (
  int aNumHolesY );


/****************************************************************************
 * FUNCTION: BSCSetPosition
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets a Position
 *   of the Configuration
 * PARAMETER:
 *   aIndex - The index indicates which Position is set: CONFIG_STARTPOS 0,
 *            CONFIG_ENDPOS 1, CONFIG_WASTEPOS 2, CONFIG_MOVINGPOS 3
 *   aX     - The absolute X-Position
 *   aY     - The absolute Y-Position
 *   aZ     - The absolute Z-Position
 ****************************************************************************/

PUBLIC void
BSCSetPosition (
  int aIndex,
  int aX,
  int aY,
  int aZ );


/****************************************************************************
 * FUNCTION: BSCSetCurrentPosition
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It is used, to
 *   operate the Plotter manually and by that be possible to set the
 *   Positions of the Configuration. Before Calling this Function, the
 *   StartConfig-Function has to be called.
 * PARAMETER:
 *   aX - The absolute X-Position
 *   aY - The absolute Y-Position
 *   aZ - The absolute Z-Position
 ****************************************************************************/

PUBLIC void
BSCSetCurrentPosition (
  int aX,
  int aY,
  int aZ );


/****************************************************************************
 * FUNCTION: BSCStartConfig
 * DESCRIPTION:
 *   This Function Starts the Configuration Process. It sets the State of the
 *   Sampler to "Config" and by that enables the manual Control of the
 *   Plotter.
 ****************************************************************************/

PUBLIC void
BSCStartConfig ( void );


/****************************************************************************
 * FUNCTION: BSCStopConfig
 * DESCRIPTION:
 *   This Function Ends the Configuration Process. It Ends the Config State
 *   of the Sampler and writes the Configuration to a txt file. It is written
 *   to <WorkingDirectory>/Configuration.txt
 ****************************************************************************/

PUBLIC void
BSCStopConfig ( void );


/****************************************************************************
 * FUNCTION: BSCNewWellStart
 ****************************************************************************/

PUBLIC void
BSCNewWellStart ( void );


/****************************************************************************
 * FUNCTION: BSCNewWellStop
 ****************************************************************************/

PUBLIC void
BSCNewWellStop ( void );



#ifdef __cplusplus
  }
#endif

#endif /* BSCCONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
