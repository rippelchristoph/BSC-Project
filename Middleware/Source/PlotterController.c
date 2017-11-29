/****************************************************************************
*
* FILE: PlotterController.c
*
* DESCRIPTION:
*   This File handles a UART Connection
*
* PUBLIC FUNCTIONS:
* 
*
****************************************************************************/

/****************************************************************************
* SECTION: #include
****************************************************************************/

#include <stdlib.h>
#include <string.h>

/** HEADER ******************************************************************
*/
#ifndef  PLOTTERCONTROLLER_H

/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"
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
	UARTFilestream filestream
		



} TPlotter;


#endif

/*** HEADER ****************************************************************/



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
* DESCRIPTION:
*   Initializes a new Plotter
*
****************************************************************************/
PUBLIC TPlotter* newPlotter()
{
	TPlotter* retPlot = malloc(sizeof(TPlotter));
	retPlot->filestream = newUART();

	PLTSendCommand(retPlot, SET_UNIT_MM);

	return retPlot;
}

/****************************************************************************
* FUNCTION: PLTSendCommand
*
* DESCRIPTION:
*   Sends a Command to the Plotter
****************************************************************************/
PUBLIC void
PLTSendCommand(TPlotter* aPlotter, char* aCommand)
{
	char sendString[30];
	strcpy(sendString, aCommand);
	strcat(sendString, "\r\n");

	UARTSendBytes(aPlotter->filestream, sendString, strlen(sendString));
}

/****************************************************************************
* FUNCTION: PLTSendCommandAndOK
*
* DESCRIPTION:
*   Sends a Command to the Plotter and waits until it returns "ok"
*	if something else is returned the Function returns False
****************************************************************************/

PUBLIC void
PLTSendCommandAndOK(TPlotter* aPlotter, char* aCommand)
{
	char aString[30];
	PLTSendCommand(aPlotter, aCommand);
	UARTReceiveBytes(aPlotter->filestream, aString);

}

/****************************************************************************
* FUNCTION: PLTHomeAxis
*
* DESCRIPTION:
*   Homes All Axis in this order: X Y Z
*
* PARAMETER:
*   aStream	- The Stream the Receive
*   aRelayState - The State that the Relay of the Hydroport should have
*                 after function. e.g. IEMiddlewareRelayStateON
****************************************************************************/
PUBLIC TBoolean
PLTHomeAxis(TPlotter* aPlotter)
{
	PLTSendCommand(aPlotter, HOMEX);

}



/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
