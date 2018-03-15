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
 * PUBLIC FUNCTIONS:
 *   newI2C
 *   destroyI2C
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
#include <string.h>

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
PUBLIC TI2C *
newI2C (
  unsigned char aAddr,
  int           aI2CNumber )
{
	TI2C* retPtr = malloc(sizeof(TI2C));
	
	//----- OPEN THE I2C BUS -----
	char filename[50];
	switch (aI2CNumber)
	{
	case 0:
		strcpy(filename, "/dev/i2c-1");
		break;
	case 1:
		strcpy(filename, "/dev/i2c-2"); //-2 Nicht sicher???
		break;
	default:
		free(retPtr);
		return NULL;
	}

	if ((retPtr->file = open(filename, O_RDWR)) < 0)
	{
		//ERROR HANDLING: you can check errno to see what went wrong
		free(retPtr);
		return NULL;
	}

	if (ioctl(retPtr->file, I2C_SLAVE, aAddr) < 0)
	{
		//ERROR HANDLING; you can check errno to see what went wrong
		free(retPtr);
		return NULL;
	}

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyI2C
 ****************************************************************************/
PUBLIC TBoolean
destroyI2C (
  TI2C * aI2C )
{
	if (aI2C != NULL) {
		close(aI2C->file);
		free(aI2C);
	}

	return ETRUE;
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
	//read() returns the number of bytes actually read, 
	//if it doesn't match then an error occurred (e.g. no response from the device)
	if (read(aI2C->file, aBuffer, aLength) != aLength)		
	{
		return EFALSE;
	}
	else
	{
		return ETRUE;
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
		return EFALSE;
	}

	return ETRUE;
}


/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/








