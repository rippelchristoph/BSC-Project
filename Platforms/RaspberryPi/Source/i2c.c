/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: i2c.c
 *
 *   DESCRIPTION:
 *
 *
 *   PUBLIC FUNCTIONS: UARTInit(); UARTTransmit(); UARTReceive();
 *
 * PUBLIC FUNCTIONS:
 *   newI2C
 *   I2CReadBytes
 *   I2CWriteBytes
 ****************************************************************************/


/****************************************************************************
* SECTION: #include
****************************************************************************/

#include <unistd.h>				//Needed for I2C port
#include <fcntl.h>				//Needed for I2C port
#include <sys/ioctl.h>			//Needed for I2C port
#include <linux/i2c-dev.h>		//Needed for I2C port
#include <stdlib.h>

/** HEADER ******************************************************************
 */
#ifndef  I2C_H


/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"
/****************************************************************************
* SECTION: #define
****************************************************************************/

/****************************************************************************
* SECTION: typedef
****************************************************************************/
typedef struct I2C {
	int file;
}TI2C;
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
 * FUNCTION: newI2C
 ****************************************************************************/
PUBLIC TBoolean
newI2C (
  unsigned char aAddr )
{
	TI2C* retPtr = malloc(sizeof(TI2C));
	
	//----- OPEN THE I2C BUS -----
	char *filename = (char*)"/dev/i2c-1";
	if ((retPtr->file = open(filename, O_RDWR)) < 0)
	{
		//ERROR HANDLING: you can check errno to see what went wrong
		printf("Failed to open the i2c bus");
		return;
	}

	        //<<<<<The I2C address of the slave
	if (ioctl(retPtr->file, I2C_SLAVE, aAddr) < 0)
	{
		printf("Failed to acquire bus access and/or talk to slave.\n");
		//ERROR HANDLING; you can check errno to see what went wrong
		return;
	}
}

/****************************************************************************
 * FUNCTION: I2CReadBytes
 ****************************************************************************/

PUBLIC TBoolean
I2CReadBytes (
  TI2C *          aI2C,
  unsigned char * aBuffer,
  int             aLength )
{
	//----- READ BYTES -----
	if (read(aI2C->file, aBuffer, aLength) != aLength)		//read() returns the number of bytes actually read, if it doesn't match then an error occurred (e.g. no response from the device)
	{
		//ERROR HANDLING: i2c transaction failed
		//printf("Failed to read from the i2c bus.\n");
	}
	else
	{
		//printf("Data read: %s\n", aBuffer);
	}
}

/****************************************************************************
 * FUNCTION: I2CWriteBytes
 ****************************************************************************/
PUBLIC TBoolean
I2CWriteBytes (
  TI2C *          aI2C,
  unsigned char * aBuffer,
  int             aLength )
{
	//----- WRITE BYTES -----

	if (write(aI2C->file, aBuffer, aLength) != aLength)		//write() returns the number of bytes actually written, if it doesn't match then an error occurred (e.g. no response from the device)
	{
		/* ERROR HANDLING: i2c transaction failed */
		//printf("Failed to write to the i2c bus.\n");
	}
}


/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/







