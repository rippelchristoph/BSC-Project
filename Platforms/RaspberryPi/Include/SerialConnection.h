/****************************************************************************
*
* Copyright (c) 2017 TARA Systems GmbH, Munich.
* All rights reserved.
*
****************************************************************************
* FILE: SerialConnection.h
*
* DESCRIPTION:
*   All  classes are derived from this base class.
*
* PUBLIC FUNCTIONS:

****************************************************************************/

#ifndef SERIALCONNECTION_H
#define SERIALCONNECTION_H



/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HCTypes.h"
#include "HCHardware.h"
#include "HCHardwareTimer.h"

/****************************************************************************
* SECTION: #define
****************************************************************************/

/****************************************************************************
* SECTION: typedef
****************************************************************************/
/****************************************************************************
* TYPE_: IEMiddlewareRelayState
****************************************************************************/
typedef enum IEMiddlewareRelayState
{
	IEMiddlewareRelayStateON = 1,
	IEMiddlewareRelayStateOFF = 0
} IEMiddlewareRelayState;

/****************************************************************************
* TYPE_: IEMiddlewareHydroPort
****************************************************************************/
typedef struct
{
	HCHardwareRelay relay;
	uint32_t ADCChannel;
	IEMiddlewareRelayState relayState;
} IEMiddlewareHyrdoPort;





#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortSetRelay
*
* DESCRIPTION:
*   Sets the Relay of the HydroPort
*
* PARAMETER:
*   aHydroPort	-The HydroPort where the Relay should be set.
*   aRelay - The Relay of the type HCHardwareRelay (HARDWARE_RELAY_0 to
*            HARDWARE_RELAY_3)
****************************************************************************/

PUBLIC void
IEMiddlewareHydroPortSetRelay(
	IEMiddlewareHyrdoPort * aHydroPort,
	HCHardwareRelay         aRelay);


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortGetRelay
*
* DESCRIPTION:
*   Returns the Relay of the HydroPort
****************************************************************************/

PUBLIC HCHardwareRelay
IEMiddlewareHydroPortGetRelay(
	IEMiddlewareHyrdoPort * aHydroPort);


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortSetRelayState
*
* DESCRIPTION:
*   Sets the Relay State of the HydroPort
*
* PARAMETER:
*   aHydroPort	-The HydroPort where the Relay should be set.
*   aRelayState - The State that the Relay of the Hydroport should have
*                 after function. e.g. IEMiddlewareRelayStateON
****************************************************************************/

PUBLIC void
IEMiddlewareHydroPortSetRelayState(
	IEMiddlewareHyrdoPort * aHydroPort,
	IEMiddlewareRelayState  aRelayState);


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortGetRelayState
*
* DESCRIPTION:
*   Returns the Relay State of the HydroPort
****************************************************************************/

PUBLIC HCHardwareRelay
IEMiddlewareHydroPortGetRelayState(
	IEMiddlewareHyrdoPort * aHydroPort);


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortGetADCChannel
*
* DESCRIPTION:
*   Returns the current Set ADCChannel
****************************************************************************/

PUBLIC uint32_t
IEMiddlewareHydroPortGetADCChannel(
	IEMiddlewareHyrdoPort * aHydroPort);


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortSetADCChannel
*
* DESCRIPTION:
*   Sets the Relay State of the HydroPort
*
* PARAMETER:
*   aHydroPort	-The HydroPort where the ADC Channel should be set.
*   aADCChannel	-The channel of the ADC where the Sensor is connected
****************************************************************************/

PUBLIC void
IEMiddlewareHydroPortSetADCChannel(
	IEMiddlewareHyrdoPort * aHydroPort,
	uint32_t                aADCChannel);


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortProcess
*
* DESCRIPTION:
*   Calls the Functions of the HCHardware.h file depending on the RelayState
*   and the Relay
*
* PARAMETER:
*   aHydroPort	-The HydroPort that should be processed
****************************************************************************/

PUBLIC void
IEMiddlewareHydroPortProcess(
	IEMiddlewareHyrdoPort * aHydroPort);


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortGetHumidity
*
* DESCRIPTION:
*   Calls a Function of HCHardware to find out the ADC Value Then it divides
*   it by the MAX Value so the Humidity reaches from 0.0 - 100.0
*
* PARAMETER:
*   aHydroPort	-The HydroPort of which the Humidity should be returned
****************************************************************************/

PUBLIC double
IEMiddlewareHydroPortGetHumidity(
	IEMiddlewareHyrdoPort * aHydroPort);



#ifdef __cplusplus
  }
#endif

#endif /* SERIALCONNECTION_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
