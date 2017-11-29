/****************************************************************************
*
* FILE: PlotterController.h
*
* DESCRIPTION:
*   This File handles a UART Connection
*
* PUBLIC FUNCTIONS:
* 
*
****************************************************************************/

#ifndef PLOTTERCONTROLLER_H
#define PLOTTERCONTROLLER_H


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




#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
* FUNCTION: newPlotter
*
* DESCRIPTION:
*   Initializes a new Plotter
*
****************************************************************************/

PUBLIC TPlotter* newPlotter();


/****************************************************************************
* FUNCTION: PLTSendCommand
*
* DESCRIPTION:
*   Sends a Command to the Plotter
****************************************************************************/

PUBLIC void
PLTSendCommand(TPlotter* aPlotter, char* aCommand);


/****************************************************************************
* FUNCTION: PLTSendCommandAndOK
*
* DESCRIPTION:
*   Sends a Command to the Plotter and waits until it returns "ok"
*	if something else is returned the Function returns False
****************************************************************************/

PUBLIC void
PLTSendCommandAndOK(TPlotter* aPlotter, char* aCommand);


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
PLTHomeAxis(TPlotter* aPlotter);



#ifdef __cplusplus
  }
#endif

#endif /* PLOTTERCONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
