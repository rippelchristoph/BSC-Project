/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: TemperatureReader.h
 *
 * PUBLIC FUNCTIONS:
 *   newTemperatureReader
 *   destroyTemperatureReader
 *   TemperatureReaderGetTemperature
 ****************************************************************************/

#ifndef TEMPERATUREREADER_H
#define TEMPERATUREREADER_H


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


#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newTemperatureReader
 ****************************************************************************/

PUBLIC TTemperatureReader *
newTemperatureReader ( unsigned char aSensorAddress );


/****************************************************************************
 * FUNCTION: destroyTemperatureReader
 ****************************************************************************/

PUBLIC TBoolean
destroyTemperatureReader (
  TTemperatureReader * aTempReader );


/****************************************************************************
 * FUNCTION: TemperatureReaderGetTemperature
 ****************************************************************************/

PUBLIC double
TemperatureReaderGetTemperature (
  TTemperatureReader * TempReader );



#ifdef __cplusplus
  }
#endif

#endif /* TEMPERATUREREADER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
