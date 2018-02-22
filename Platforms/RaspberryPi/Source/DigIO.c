/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: DigIO.c
 *
 * PUBLIC FUNCTIONS:
 *   DigIOSetDefault
 *   setupDigIO
 *   DigIOOpenCircuit
 *   DigIOCloseCircuit
 *   DigIOSetPeltier
 *
 * PRIVATE FUNCTIONS:
 *   DigIOSetCircuit
 ****************************************************************************/

#include "wiringPi.h"
#include "DigIO.h"
#define TemperaturePin 7

/****************************************************************************
 * This Array declarates the wiringPi Pin the valves are assigned to
 * The First index is the Circuit Number (1-3)
 * The Second index is:
 *		0 - The bigger valve that can disrupt the primary circuit or 
 *		1 - The smaller valve that leads to the Well
 ****************************************************************************/
#define NCircuits 3
const int ValveOutputPins[NCircuits][2] =	{	{0,2},
												{12,13},
												{4,5}
											};


#ifndef DIGIO_H

#include "HtlStdDef.h"
#include "BSCCommonTypes.h"

/****************************************************************************
 * SECTION: Declaration of Types
 ****************************************************************************/
/****************************************************************************
 * TYPE: ECircuitStatus
 * DESCRIPTION:
 *   Indicates the Status of the Valves of a single Circuit. If the Status is
 *   "OPEN" the Valves are set so the Primary Circuit is Open and a Probe can
 *   be taken. The status "CLOSED" means that the Primary Circuit is closed
 *   and the small valve is closed
 ****************************************************************************/

typedef enum {
	CIRCUIT_OPEN,
	CIRCUIT_CLOSED
}ECircuitStatus;

#endif // !DIGIO_H

/****************************************************************************
 * SECTION: Declaration of private functions
 ****************************************************************************/

PRIVATE TBoolean
DigIOSetCircuit (
  int                           aCircuitNumber,
  ECircuitStatus                aCircuitStatus );


/****************************************************************************
 * SECTION: Declaration of public functions
 ****************************************************************************/
/****************************************************************************
 * FUNCTION: DigIOSetDefault
 ****************************************************************************/
PUBLIC void
DigIOSetDefault ( void )
{
	int i = 0;
	for (i = 0; i < NCircuits; i++) {
		DigIOSetCircuit(i, CIRCUIT_CLOSED);
	}
	DigIOSetPeltier(0.0f);
}

/****************************************************************************
 * FUNCTION: setupDigIO
 * DESCTIPTION:
 *   Sets up the Digital IO Pins including the setup of the wiringPi Library
 ****************************************************************************/
PUBLIC TBoolean
setupDigIO ( void )
{
	int i = 0;
	wiringPiSetup();

	for (i = 0; i < NCircuits; i++) {
		pinMode(ValveOutputPins[i][0], OUTPUT);
		pinMode(ValveOutputPins[i][1], OUTPUT);
	}
	pinMode(TemperaturePin, OUTPUT);
	DigIOSetDefault();
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: DigIOOpenCircuit
 ****************************************************************************/
PUBLIC TBoolean
DigIOOpenCircuit (
  int aCircuitNumber )
{
	DigIOSetCircuit(aCircuitNumber, CIRCUIT_OPEN);
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: DigIOCloseCircuit
 ****************************************************************************/
PUBLIC TBoolean
DigIOCloseCircuit (
  int aCircuitNumber )
{
	DigIOSetCircuit(aCircuitNumber, CIRCUIT_CLOSED);
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: DigIOSetPeltier
 ****************************************************************************/
PUBLIC TBoolean
DigIOSetPeltier (
  float aValue )
{
	if (aValue >= 1.0f) {
		digitalWrite(TemperaturePin, HIGH);
	}
	else {
		digitalWrite(TemperaturePin, LOW);
	}
	return EFALSE;
}

/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
/****************************************************************************
 * FUNCTION: DigIOSetCircuit
 * DESCRIPTION:
 *   Sets the valves of a single Circuit according to the status.
 * PARAMETER:
 *   aCircuitNumber - The Index of the Circuit
 *   aCircuitStatus - The status that the Valves should be set to.
 ****************************************************************************/
PRIVATE TBoolean
DigIOSetCircuit (
  int            aCircuitNumber,
  ECircuitStatus aCircuitStatus )
{
	if (aCircuitStatus == CIRCUIT_OPEN) {
		digitalWrite(ValveOutputPins[aCircuitNumber-1][0], HIGH);
		digitalWrite(ValveOutputPins[aCircuitNumber-1][1], LOW);
	}

	if (aCircuitStatus == CIRCUIT_CLOSED) {
		digitalWrite(ValveOutputPins[aCircuitNumber-1][0], LOW);
		digitalWrite(ValveOutputPins[aCircuitNumber-1][1], HIGH);
	}

	return EFALSE;
}