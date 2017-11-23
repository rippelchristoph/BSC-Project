/****************************************************************************
*
* Copyright (c) 2017 TARA Systems GmbH, Munich.
* All rights reserved.
*
****************************************************************************
* FILE: SerialConnection.c
*
* DESCRIPTION:
*   All  classes are derived from this base class.
*
* PUBLIC FUNCTIONS:

****************************************************************************/


/****************************************************************************
* SECTION: #include
****************************************************************************/

#include <stdio.h>
#include <unistd.h>			//Used for UART
#include <fcntl.h>			//Used for UART
#include <termios.h>		//Used for UART

/** HEADER ******************************************************************
*/
#ifndef  SERIALCONNECTION_H


/****************************************************************************
* SECTION: #include
****************************************************************************/
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
	HCHardwareRelay         aRelay)
{
	aHydroPort->relay = aRelay;
}

/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortGetRelay
*
* DESCRIPTION:
*   Returns the Relay of the HydroPort
****************************************************************************/
PUBLIC HCHardwareRelay
IEMiddlewareHydroPortGetRelay(
	IEMiddlewareHyrdoPort * aHydroPort)
{
	return aHydroPort->relay;
}

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
	IEMiddlewareRelayState  aRelayState)
{

	aHydroPort->relayState = aRelayState;
	IEMiddlewareHydroPortProcess(aHydroPort);
}

/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortGetRelayState
*
* DESCRIPTION:
*   Returns the Relay State of the HydroPort
****************************************************************************/
PUBLIC HCHardwareRelay
IEMiddlewareHydroPortGetRelayState(
	IEMiddlewareHyrdoPort * aHydroPort)
{
	return aHydroPort->relayState;
}


/****************************************************************************
* FUNCTION: IEMiddlewareHydroPortGetADCChannel
*
* DESCRIPTION:
*   Returns the current Set ADCChannel
****************************************************************************/
PUBLIC uint32_t
IEMiddlewareHydroPortGetADCChannel(
	IEMiddlewareHyrdoPort * aHydroPort)
{
	return aHydroPort->ADCChannel;
}

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
	uint32_t                aADCChannel)
{
	aHydroPort->ADCChannel = aADCChannel;
}

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
	IEMiddlewareHyrdoPort * aHydroPort)
{
	HCHardwareRelaySetValue(IEMiddlewareHydroPortGetRelay(aHydroPort),
		IEMiddlewareHydroPortGetRelayState(aHydroPort));
}

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
	IEMiddlewareHyrdoPort * aHydroPort)
{
	int ADCValue;
	ADCValue = HCHardwareAdcMeasure(IEMiddlewareHydroPortGetADCChannel(aHydroPort));

	double relativeHumidity = (double)((double)ADCValue / 4095.0);
	return relativeHumidity;
}


/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
