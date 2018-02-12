/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: DigIO.h
 *
 * PUBLIC FUNCTIONS:
 *   DigIOSetDefault
 *   setupDigIO
 *   DigIOOpenCircuit
 *   DigIOCloseCircuit
 *   DigIOSetPeltier
 ****************************************************************************/

#ifndef DIGIO_H
#define DIGIO_H


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



#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: DigIOSetDefault
 ****************************************************************************/

PUBLIC void
DigIOSetDefault ( void );


/****************************************************************************
 * FUNCTION: setupDigIO
 * DESCTIPTION:
 *   Sets up the Digital IO Pins including the setup of the wiringPi Library
 ****************************************************************************/

PUBLIC TBoolean
setupDigIO ( void );


/****************************************************************************
 * FUNCTION: DigIOOpenCircuit
 ****************************************************************************/

PUBLIC TBoolean
DigIOOpenCircuit (
  int aCircuitNumber );


/****************************************************************************
 * FUNCTION: DigIOCloseCircuit
 ****************************************************************************/

PUBLIC TBoolean
DigIOCloseCircuit (
  int aCircuitNumber );


/****************************************************************************
 * FUNCTION: DigIOSetPeltier
 ****************************************************************************/

PUBLIC TBoolean
DigIOSetPeltier (
  float aValue );



#ifdef __cplusplus
  }
#endif

#endif /* DIGIO_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
