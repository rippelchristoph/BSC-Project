/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: SerialConnection.h
 *
 * PUBLIC FUNCTIONS:
 *   newUART
 *   UARTSendBytes
 *   UARTReceiveBytes
 ****************************************************************************/

#ifndef SERIALCONNECTION_H
#define SERIALCONNECTION_H



/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"
#include "wiringSerial.h"

/****************************************************************************
* SECTION: typedef
****************************************************************************/
typedef int UARTFilestream;



#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newUART
 *
 *   DESCRIPTION:
 *     Initializes the UART interface
 *
 *   PARAMETER:
 ****************************************************************************/

PUBLIC UARTFilestream *
newUART ( void );


/****************************************************************************
 * FUNCTION: UARTSendBytes
 *
 *   DESCRIPTION:
 *     Sends an Array of Bytes
 ****************************************************************************/

PUBLIC void
UARTSendBytes (
  UARTFilestream* aStream,
  char *         aCharArra,
  int            aLength );


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

PUBLIC void
UARTReceiveBytes (
  UARTFilestream  aStream,
  unsigned char * aBuffer );



#ifdef __cplusplus
  }
#endif

#endif /* SERIALCONNECTION_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
