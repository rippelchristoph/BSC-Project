/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: SerialConnection.c
 *
 * PUBLIC FUNCTIONS:
 *   newSerialConnection
 *   destroySerialConnection
 *   SerialSendBytes
 *   SerialReadBytes
 *
 * PRIVATE FUNCTIONS:
 *   setupSerialPort
 *   setBaudDivisor
 ****************************************************************************/


 /****************************************************************************
  * SECTION: #include
  ****************************************************************************/

#include "SerialConnection.h"

#ifndef  SERIALCONNECTION_H


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

#endif

/****************************************************************************
* SECTION: #define
****************************************************************************/
/****************************************************************************
 * SECTION: Declaration of private functions
 ****************************************************************************/

PRIVATE void
setupSerialPort (
  char *                        aPort,
  int *                         aFd,
  int                           aBaud );

PRIVATE void
setBaudDivisor (
  int                           aBaud,
  int                           aFd );


/****************************************************************************
 * FUNCTION: newSerialConnection
 *
 * DESCRIPTION:
 *   Initializes the Serial interface
 * PARAMETER:
 *   aPort-The Port that should be used to initialize the Connection
 *   aBaud-The Baud Rate of the Connection
 ****************************************************************************/
PUBLIC TSerialConnection *
newSerialConnection (
  char * aPort,
  int    aBaud )
{
	TSerialConnection* retPtr = malloc(sizeof(TSerialConnection));
	retPtr->serial_poll = malloc(sizeof(TPollfd));

	retPtr->Port = strdup(aPort);
	//Setup mit Standard Baudrate
	setupSerialPort(retPtr->Port, &(retPtr->serial_poll->fd), B38400);
	setBaudDivisor(aBaud, retPtr->serial_poll->fd);


	//In Enablen
	retPtr->serial_poll->events |= POLLIN;
	//Out Enablen
	retPtr->serial_poll->events |= POLLOUT;

	//File Descriptor Testen:
	int retval = poll(retPtr->serial_poll, 1, 200); //Timeout 200, 1 File Descriptor
	if (retval == -1) {	//Error
		//TODO: Error melden FileDescriptor
		printf("Error while initializing SerialConnection\n");
	}
	else if (!retval) {
		//No filedescriptor ready
		printf("File Descriptor not ready!\n");
	}
	else if (retval && (retPtr->serial_poll->revents & POLLOUT)) {
		//everything is fine and write is available
		printf("Filedescriptor succesfully initialised: Write is available\n");
	}

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroySerialConnection
 ****************************************************************************/

PUBLIC TBoolean
destroySerialConnection (
  TSerialConnection * aSerialConnection )
{
	if (aSerialConnection != NULL) {
		tcdrain(aSerialConnection->serial_poll->fd);		//Flush Tx
		tcflush(aSerialConnection->serial_poll->fd, TCIOFLUSH);	//Discard Rx
	

		if(aSerialConnection->Port!=NULL)
			free(aSerialConnection->Port);
		
		if (aSerialConnection->serial_poll != NULL)
			free(aSerialConnection->serial_poll);
	}
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: SerialSendBytes
 *
 *   DESCRIPTION:
 *     Sends a Null Terminated String
 ****************************************************************************/
PUBLIC void
SerialSendBytes (
  TSerialConnection * aStream,
  char *              aString )
{
	int retval = poll(aStream->serial_poll, 1, 200); //Timeout 200
	int writeSize = strlen(aString);

	if ((retval != 0) && (retval != -1) && ((aStream->serial_poll->revents) & POLLOUT)) {

		int c = write(aStream->serial_poll->fd, aString, writeSize);

		if (c < 0) {
			printf("write failed (%d)\n", errno);
		}
		if (c != writeSize) {
			printf("Write was not completely Successful: WriteSize = %d, Return = %d", writeSize, c);
		}
	}
}

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
  unsigned char *     aBuffer,
  int                 aSize )
{
	int c=0;
	int retval = poll(aStream->serial_poll, 1, 200);
	if (retval == -1) {
		printf("An Error Occured while executing poll function\n");
		return -2;
	}
	if (retval == 0) {
		printf("The Filedescriptor is not ready!\n");
		return -1;
	}
	else if (aStream->serial_poll->revents & POLLIN) {
		c = read(aStream->serial_poll->fd, &aBuffer, aSize);
		printf("Read Command Executed!\n");
		if (c <= 0) {
			printf("c = %d\n", c);
		}
	}
	else {
		printf("Nothing to Read! c=%d\n", c);
		//strcpy(aBuffer, "");
		return 0;
	}
	return c;
}



/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
/****************************************************************************
 * FUNCTION: setupSerialPort
 ****************************************************************************/
PRIVATE void
setupSerialPort (
  char * aPort,
  int *  aFd,
  int    aBaud )
{
	struct termios newtio;

	*aFd = open(aPort, O_RDWR | O_NONBLOCK);

	if (*aFd < 0) {
		printf("Error opening serial port \n");
		free(aPort);
		exit(1);
	}

	bzero(&newtio, sizeof(newtio)); /* clear struct for new port settings */

									/* man termios get more info on below settings */
	newtio.c_cflag = aBaud | CS8 | CLOCAL | CREAD;

	//if (_cl_rts_cts) {	//Keine RTS/CTS Flow Control
	//	newtio.c_cflag |= CRTSCTS;
	//}

	//if (_cl_2_stop_bit) { //Keine 2 Stop Bits
	//	newtio.c_cflag |= CSTOPB;
	//}

	//if (_cl_parity) {		//Kein Parity Bit
	//	newtio.c_cflag |= PARENB;
	//	if (_cl_odd_parity) {
	//		newtio.c_cflag |= PARODD;
	//	}
	//	if (_cl_stick_parity) {
	//		newtio.c_cflag |= CMSPAR;
	//	}
	//}

	newtio.c_iflag = 0;
	newtio.c_oflag = 0;
	newtio.c_lflag = 0;

	// block for up till 128 characters
	newtio.c_cc[VMIN] = 128;

	// 0.5 seconds read timeout
	newtio.c_cc[VTIME] = 5;

	/* now clean the modem line and activate the settings for the port */
	tcflush(*aFd, TCIOFLUSH);
	tcsetattr(*aFd, TCSANOW, &newtio);
}

/****************************************************************************
 * FUNCTION: setBaudDivisor
 ****************************************************************************/
PRIVATE void
setBaudDivisor (
  int aBaud,
  int aFd )
{
	// default baud was not found, so try to set a custom divisor
	struct serial_struct ss;
	if (ioctl(aFd, TIOCGSERIAL, &ss) != 0) {
		//TODO: Fehler melden TIOCGSERIAL failed melden
		exit(1);
	}

	ss.flags = (ss.flags & ~ASYNC_SPD_MASK) | ASYNC_SPD_CUST;
	ss.custom_divisor = (ss.baud_base + (aBaud / 2)) / aBaud;
	int closest_speed = ss.baud_base / ss.custom_divisor;

	if (closest_speed < aBaud * 98 / 100 || closest_speed > aBaud * 102 / 100) {
		//TODO: Fehler melden: divisor nicht moeglich
		exit(1);
	}

	if (ioctl(aFd, TIOCSSERIAL, &ss) < 0) {
		//TODO: Fehler melden: TIOCSSERIAL failed
		exit(1);
	}
}