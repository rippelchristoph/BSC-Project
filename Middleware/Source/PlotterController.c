/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: PlotterController.c
 *
 *   DESCRIPTION:
 *     This File operates the Connection to the Plotter and sends the
 *     Commands to it
 *
 * PUBLIC FUNCTIONS:
 *   newPlotter
 *   PLTSendCommand
 *   PLTHomeAxis
 *   PLTHomeYAxis
 *   PLTGoTo
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/

#include <stdlib.h>
#include <string.h>
#include "PlotterController.h"

/** HEADER ******************************************************************
 */
#ifndef  PLOTTERCONTROLLER_H

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"
#include "BSCCommonTypes.h"
#include "SerialConnection.h"


/****************************************************************************
* SECTION: #define
****************************************************************************/
#define HOMEX "G28 X"
#define HOMEY "G28 Y"
#define HOMEZ "G28 Z"
#define SET_UNIT_MM "G21"
#define ABSOLUTE_POS "G90"
#define RELATIVE_POS "G91"
#define DISABLE_STEPPERS "M18"


#define CONTROLLED_MOVEMENT "G1"
#define GET_POSITION "M114"


/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
/****************************************************************************
 * General Comments to the Plotter Type:
* Z Axis is the vertical Axis
* X Axis is in the direction of the moving head of the Plotter
* Y Axis is the axis in which the ground Plate is moving
****************************************************************************/
typedef struct Plotter {
	TSerialConnection* filestream;
	TBSCConfig* aConfiguration;
} TPlotter;


#endif

/*
 ** HEADER ******************************************************************/



/****************************************************************************
 * SECTION: #define
 ****************************************************************************/


/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/


/****************************************************************************
 * SECTION: Declaration of private functions
 ****************************************************************************/


/****************************************************************************
 * SECTION: Implementation of public functions
 ****************************************************************************/

/****************************************************************************
 * FUNCTION: newPlotter
 *
 *   DESCRIPTION:
 *     Initializes a new Plotter
 ****************************************************************************/
PUBLIC TPlotter *
newPlotter ( void )
{
	TPlotter* retPlot = malloc(sizeof(TPlotter));
	retPlot->filestream = newSerialConnection("/dev/ttyUSB0", 256000);

	PLTSendCommand(retPlot, SET_UNIT_MM);
	PLTSendCommand(retPlot, ABSOLUTE_POS);
	PLTSendCommand(retPlot, HOMEX);
	PLTSendCommand(retPlot, HOMEY);
	PLTSendCommand(retPlot, HOMEZ);


	return retPlot;
}

/****************************************************************************
 * FUNCTION: PLTSendCommand
 *
 *   DESCRIPTION:
 *     Sends a Command to the Plotter
 ****************************************************************************/
PUBLIC void
PLTSendCommand (
  TPlotter * aPlotter,
  char *     aCommand )
{
	char sendString[100];
	strcpy(sendString, aCommand);
	strcat(sendString, "\r\n");

	SerialSendBytes(aPlotter->filestream, sendString);
}

/****************************************************************************
 * FUNCTION: PLTHomeAxis
 *
 *   DESCRIPTION:
 *     Homes All Axis in this order: X Y Z
 *
 *   PARAMETER:
 *     aStream	- The Stream the Receive aRelayState - The State that the
 *     Relay of the Hydroport should have after function. e.g.
 *     IEMiddlewareRelayStateON
 ****************************************************************************/
PUBLIC void
PLTHomeAxis (
  TPlotter * aPlotter )
{
	PLTSendCommand(aPlotter, HOMEY);
	PLTSendCommand(aPlotter, HOMEX);
	PLTSendCommand(aPlotter, HOMEZ);
}

/****************************************************************************
 * FUNCTION: PLTHomeYAxis
 ****************************************************************************/
PUBLIC void
PLTHomeYAxis (
  TPlotter * aPlotter )
{
	PLTSendCommand(aPlotter, HOMEY);
}

/****************************************************************************
 * FUNCTION: PLTGoTo
 ****************************************************************************/
PUBLIC void
PLTGoTo (
  TPlotter * aPlotter,
  double     aX,
  double     aY,
  double     aZ )
{
	
	char cmd[100];
	char exp[50];
	strcpy(cmd, CONTROLLED_MOVEMENT);
	if (aX >= 0.0) {
		sprintf(exp, " X%lf", aX);
		strcat(cmd, exp);
	}
	if (aY >= 0.0) {
		sprintf(exp, " Y%lf", aY);
		strcat(cmd, exp);
	}
	if (aZ >= 0.0) {
		sprintf(exp, " Z%lf", aZ);
		strcat(cmd, exp);
	}
	//printf("Plotter Command: <%s>len=%d\n", cmd, strlen(cmd));
	PLTSendCommand(aPlotter, cmd);
}

/****************************************************************************
 * SECTION: Implementation of private functions
 ****************************************************************************/
