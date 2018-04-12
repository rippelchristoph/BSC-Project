/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: TemperatureReader.c
 *
 * PUBLIC FUNCTIONS:
 *   newTemperatureReader
 *   destroyTemperatureReader
 *   TemperatureReaderGetTemperature
 ****************************************************************************/

#include <stdlib.h>
#include <time.h>

#ifndef TEMPERATUREREADER_H

/****************************************************************************
 * SECTION: Include
 ****************************************************************************/
#include "i2c.h"
/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
typedef struct TemperatureReader {
	TI2C* I2CConnection;
	time_t Timeout;
	double ReadVal;
}TTemperatureReader;
#endif // !TEMPERATUREREADER_H


/****************************************************************************
 * FUNCTION: newTemperatureReader
 ****************************************************************************/

PUBLIC TTemperatureReader *
newTemperatureReader (
  unsigned char aSensorAddress )
{
	TTemperatureReader* retPtr = malloc(sizeof(TTemperatureReader));
	retPtr->I2CConnection = newI2C(0x4F, 0);
	retPtr->Timeout = 0;	//Some Timestamp long ago

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyTemperatureReader
 ****************************************************************************/
PUBLIC TBoolean
destroyTemperatureReader (
  TTemperatureReader * aTempReader )
{
	if (aTempReader != NULL) {
		destroyI2C(aTempReader->I2CConnection);
		free(aTempReader);
	}
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: TemperatureReaderGetTemperature
 * DESCRIPTION:
 *   Returns the current Temperature, that is read every 5 seconds.
 * PARAMETER:
 *   TempReader-The Address of the temperature Reader
 * RETURN:
 *   The Current Temperature Value in °C
 ****************************************************************************/
PUBLIC double
TemperatureReaderGetTemperature (
  TTemperatureReader * TempReader )
{
	time_t now = time(NULL);
	unsigned char byteAdd[] = { 0x00 };
	unsigned char buffer[2];
	float updateVal = 0;
	short complement;
	int decValue;

	//Read New Value only if last value was 5 seconds ago
	if (now > (TempReader->Timeout + 3)) {		
		TI2C* dataStream = newI2C(0x4F, 0);
		I2CWriteBytes(dataStream, byteAdd, 1);
		I2CReadBytes(dataStream, buffer, 2);

		if ((buffer[0] & (1 << 7)) == 0) { //Positiv
			decValue = buffer[0] << 3 | buffer[1] >> 5;
			updateVal = (float)decValue * 0.125f;
		}
		else {
			complement = buffer[0] << 3 | buffer[1] >> 5;
			complement ^= 0x7FF;
			updateVal = -1.0 * ((float)complement) * 0.125f;
		}

		TempReader->ReadVal = updateVal;
		destroyI2C(dataStream);
	}

	return TempReader->ReadVal;
}