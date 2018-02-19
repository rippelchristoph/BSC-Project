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
 ****************************************************************************/

PUBLIC TTemperatureController *
newTemperatureController (
  unsigned char aSensorAddress,
  double        aHysteresis,
  double        aSetValue )
{
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
}

/****************************************************************************
 * FUNCTION: ProcessTemperatureController
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
}