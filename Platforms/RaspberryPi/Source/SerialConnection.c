/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: SerialConnection.c
 *
 * PUBLIC FUNCTIONS:
 *   newUART
 *   UARTSendBytes
 *   UARTReceiveBytes
 ****************************************************************************/


/****************************************************************************
* SECTION: #include
****************************************************************************/
#include <stdlib.h>


#ifndef  SERIALCONNECTION_H


/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"
#include "wiringSerial.h"

/****************************************************************************
* SECTION: typedef
****************************************************************************/
typedef int UARTFilestream;

#endif




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
 * FUNCTION: newUART
 *
 *   DESCRIPTION:
 *     Initializes the UART interface
 *
 *   PARAMETER:
 ****************************************************************************/
PUBLIC UARTFilestream *
newUART ( void )
{
	UARTFilestream* aUart = malloc(sizeof(int));

	*aUart = serialOpen("serial", 230400);
	return aUart;
}

/****************************************************************************
 * FUNCTION: UARTSendString
 *
 *   DESCRIPTION:
 *     Sends a Null Terminated String
 ****************************************************************************/
PUBLIC void
UARTSendBytes (
  UARTFilestream aStream,
  char *           aString)
{
	int i = 0;
	
	serialPuts(aStream, aString);
}

/****************************************************************************
 * FUNCTION: UARTReceiveBytes
 *
 *   DESCRIPTION:
 *     Reads up to 255 characters into the Buffer array if there are any RX
 *     Bytes in the Stream
 *
 *   PARAMETER:
 *     aStream	- The Stream the Receive aRelayState - The State that the
 *     Relay of the Hydroport should have after function. e.g.
 *     IEMiddlewareRelayStateON
 ****************************************************************************/
PUBLIC int
UARTReceiveBytes (
  UARTFilestream  aStream,
  char * aBuffer )
{
	int getChar = 0;
	int i = 0;
	if (serialDataAvail(aStream) > 0) {
		while ((getChar = serialGetchar(aStream)) != -1) {
			if (i < 256) {
				aBuffer[i] = (char)getChar;
			}
			else {
				return -2;
			}
		}
	}
}



/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
