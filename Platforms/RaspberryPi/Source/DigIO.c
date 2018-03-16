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
#include "softPwm.h"
#include "DigIO.h"
#define TemperaturePinI 28
#define TemperaturePinU 27
#define PeltierMaxI 8.0

/****************************************************************************
 * This Array declarates the wiringPi Pin the valves are assigned to
 * The First index is the Circuit Number (1-3)
 * The Second index is:
 *		0 - The bigger valve that can disrupt the primary circuit or 
 *		1 - The smaller valve that leads to the Well
 ****************************************************************************/
#define NCircuits 6
const int ValveOutputPins[NCircuits][2] =	{	{0,2},
												{12,13},
												{4,5},
												{14,21},
												{22,23},
												{24,25}
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
 * DESCRIPTION:
 *   This Function sets the Defaults for the DigIO Pins. This means, that all
 *   circuits are cloed and the Peltier is set to 0.
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
 *   Sets up the Digital IO Pins including the setup of the wiringPi Library.
 *   Then it sets the Pins to their Default values
 * RETURN:
 *   Returns whether the Setup was successful. EFALSE if Succesfull, ETRUE if
 *   not.
 ****************************************************************************/
PUBLIC TBoolean
setupDigIO ( void )
{
	int i = 0;
	wiringPiSetup();
	//Set Valve Pins Output
	for (i = 0; i < NCircuits; i++) {
		pinMode(ValveOutputPins[i][0], OUTPUT);
		pinMode(ValveOutputPins[i][1], OUTPUT);
	}

	//Set Peltier Pins PWM
	if (softPwmCreate(TemperaturePinU, 0, 100) != 0) {
		//Something Wrong
	}
	
	if (softPwmCreate(TemperaturePinI, 0, 100) != 0) {
		//Do something
	}

	DigIOSetDefault();
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: DigIOOpenCircuit
 * DESCRIPTION:
 *   Opens the Circuit with the corresponding CircuitNumber. Opening means
 *   that a probe can be filled
 * RETURN:
 *   Returns whether it was successful. EFALSE if yes, ETRUE if not.
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
 * DESCRIPTION:
 *   Closes the Circuit with the corresponding CircuitNumber. Closing means
 *   that the primary circuit is flowing and no probe is filled.
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
	int UValue = 0;
	int IValue = 0;

	if (aValue > 0.1) {
		UValue = (int)(100.0* 15.0 / 18.0);
		IValue = (int)(aValue* 100.0*(PeltierMaxI/20.0));
	} 

	softPwmWrite(TemperaturePinU, UValue);
	softPwmWrite(TemperaturePinU, UValue);
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