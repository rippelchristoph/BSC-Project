/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Logger.h
 *
 * PUBLIC FUNCTIONS:
 *   newLogger
 *   destroyLogger
 *   LoggerNewWell
 *   LoggerAddSample
 ****************************************************************************/

#ifndef LOGGER_H
#define LOGGER_H

 /****************************************************************************
  * SECTION: Include
  ****************************************************************************/
#include "HtlStdDef.h"

  /****************************************************************************
   * SECTION: typedef
   ****************************************************************************/
typedef struct Logger {
	char* WorkingDirectory;
	char* CurrentLogFile;
} TLogger;



#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newLogger
 ****************************************************************************/

PUBLIC TLogger *
newLogger (
  char * aWorkingDirectory );


/****************************************************************************
 * FUNCTION: destroyLogger
 ****************************************************************************/

PUBLIC TBoolean
destroyLogger (
  TLogger * aLogger );


/****************************************************************************
 * FUNCTION: LoggerNewWell
 ****************************************************************************/

PUBLIC TBoolean
LoggerNewWell (
  TLogger * aLogger );


/****************************************************************************
 * FUNCTION: LoggerAddSample
 ****************************************************************************/

PUBLIC TBoolean
LoggerAddSample (
  TLogger * aLogger,
  int       aOrigin,
  int       aWellX,
  int       aWellY );



#ifdef __cplusplus
  }
#endif

#endif /* LOGGER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
