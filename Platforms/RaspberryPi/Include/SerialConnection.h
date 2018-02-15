/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: SerialConnection.h
 *
 * PUBLIC FUNCTIONS:
 *   newSerialConnection
 *   destroySerialConnection
 *   SerialSendBytes
 *   SerialReadBytes
 ****************************************************************************/

#ifndef SERIALCONNECTION_H
#define SERIALCONNECTION_H



  /****************************************************************************
   * SECTION: #include
   ****************************************************************************/
#include "HtlStdDef.h"
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <poll.h>
#include <unistd.h>
#include <getopt.h>
#include <time.h>
#include <linux/serial.h>
#include <errno.h>

   /****************************************************************************
	* SECTION: typedef
	****************************************************************************/
typedef struct pollfd TPollfd;

typedef struct
{
	TPollfd * serial_poll;
	char* Port;
} TSerialConnection;



#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newSerialConnection
 *
 *   DESCRIPTION:
 *     Initializes the Serial interface
 *
 *   PARAMETER:
 ****************************************************************************/

PUBLIC TSerialConnection *
newSerialConnection (
  char * aPort,
  int    aBaud );


/****************************************************************************
 * FUNCTION: destroySerialConnection
 ****************************************************************************/

PUBLIC TBoolean
destroySerialConnection ( void );


/****************************************************************************
 * FUNCTION: SerialSendBytes
 *
 *   DESCRIPTION:
 *     Sends a Null Terminated String
 ****************************************************************************/

PUBLIC void
SerialSendBytes (
  TSerialConnection * aStream,
  char *              aString );


/****************************************************************************
 * FUNCTION: SerialReadBytes
 *
 * DESCRIPTION:
 *   Reads up to 255 characters into the Buffer array if there are any RX
 *   Bytes in the Stream
 * PARAMETER:
 *   aStream	- The Stream the Receive aRelayState - The State that the Relay
 *   of the Hydroport should have after function. e.g.
 *   IEMiddlewareRelayStateON
 ****************************************************************************/

PUBLIC int
SerialReadBytes (
  TSerialConnection * aStream,
  char *              aBuffer,
  int                 aSize );



#ifdef __cplusplus
  }
#endif

#endif /* SERIALCONNECTION_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
