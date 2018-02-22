/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: PlotterController.h
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

#ifndef PLOTTERCONTROLLER_H
#define PLOTTERCONTROLLER_H


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




#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newPlotter
 *
 *   DESCRIPTION:
 *     Initializes a new Plotter
 ****************************************************************************/

PUBLIC TPlotter *
newPlotter ( void );


/****************************************************************************
 * FUNCTION: PLTSendCommand
 *
 *   DESCRIPTION:
 *     Sends a Command to the Plotter
 ****************************************************************************/

PUBLIC void
PLTSendCommand (
  TPlotter * aPlotter,
  char *     aCommand );


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
  TPlotter * aPlotter );


/****************************************************************************
 * FUNCTION: PLTHomeYAxis
 ****************************************************************************/

PUBLIC void
PLTHomeYAxis (
  TPlotter * aPlotter );


/****************************************************************************
 * FUNCTION: PLTGoTo
 ****************************************************************************/

PUBLIC void
PLTGoTo (
  TPlotter * aPlotter,
  double     aX,
  double     aY,
  double     aZ );



#ifdef __cplusplus
  }
#endif

#endif /* PLOTTERCONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
