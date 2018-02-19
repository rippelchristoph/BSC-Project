/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: TemperatureController.h
 *
 * PUBLIC FUNCTIONS:
 *   newTemperatureController
 *   destroyTemperatureController
 *   ProcessTemperatureController
 ****************************************************************************/

#ifndef TEMPERATURECONTROLLER_H
#define TEMPERATURECONTROLLER_H


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


#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newTemperatureController
 ****************************************************************************/

PUBLIC TTemperatureController *
newTemperatureController (
  unsigned char aSensorAddress,
  double        aHysteresis,
  double        aSetValue );


/****************************************************************************
 * FUNCTION: destroyTemperatureController
 ****************************************************************************/

PUBLIC TBoolean
destroyTemperatureController (
  TTemperatureController * aTempContr );


/****************************************************************************
 * FUNCTION: ProcessTemperatureController
 ****************************************************************************/

PUBLIC TBoolean
ProcessTemperatureController (
  TTemperatureController * aTempContr );



#ifdef __cplusplus
  }
#endif

#endif /* TEMPERATURECONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
