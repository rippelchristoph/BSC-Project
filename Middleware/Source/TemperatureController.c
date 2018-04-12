/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: TemperatureController.c
 *
 * PUBLIC FUNCTIONS:
 *   newTemperatureController
 *   destroyTemperatureController
 *   ProcessTemperatureController
 ****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "DigIO.h"

/** HEADER ******************************************************************
 */
#ifndef  TEMPERATURECONTROLLER_H

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"
#include "BSCCommonTypes.h"
#include "TemperatureReader.h"

/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
typedef struct TemperatureController {
	TTemperatureReader* TempReader;
	double Hysteresis;
	double SetValue;
}TTemperatureController;
#endif // !TEMPERATURECONTROLLER_H

/****************************************************************************
 * FUNCTION: newTemperatureController
 * DESCRIPTION:
 *   Allocates memory for the TemperatureController Object and initializes
 *   it.
 * PARAMETER:
 *   aSensorAddress- The I2C Address of the Temperature Sensor
 *   aHysteresis - The Hysteresis for Controlling the Peltier Element [°C]
 *   aSetValue - The desired Temperature [°C]
 * RETURN:
 *   The Address of the initialized Object
 ****************************************************************************/

PUBLIC TTemperatureController *
newTemperatureController (
  unsigned char aSensorAddress,
  double        aHysteresis,
  double        aSetValue )
{
	printf("TC Init\n");
	TTemperatureController* retPtr = malloc(sizeof(TTemperatureController));
	retPtr->TempReader = newTemperatureReader(aSensorAddress);
	retPtr->Hysteresis = aHysteresis;
	retPtr->SetValue = aSetValue;

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyTemperatureController
 ****************************************************************************/
PUBLIC TBoolean
destroyTemperatureController (
  TTemperatureController * aTempContr )
{
	if (aTempContr != NULL) {
		destroyTemperatureReader(aTempContr->TempReader);
		free(aTempContr);
	}
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: ProcessTemperatureController
 * DESCRIPTION:
 *   Sets the Peltier to 1.0 if the Temperature is too low, otherwise set it
 *   to 0.0
 ****************************************************************************/
PUBLIC TBoolean
ProcessTemperatureController (
  TTemperatureController * aTempContr )
{
	double Temp = TemperatureReaderGetTemperature(aTempContr->TempReader);
	
	if (Temp > (aTempContr->SetValue + aTempContr->Hysteresis)) {
		DigIOSetPeltier(0.0f);
	}

	if (Temp < (aTempContr->SetValue - aTempContr->Hysteresis)) {
		DigIOSetPeltier(1.0f);
	}

	return EFALSE;
}