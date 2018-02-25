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
 * DESCRIPTION:
 *   This Function creates a new Logger by allocating storage for it.
 * PARAMETER:
 *   aWorkingDirectory - The Directory in which the files should be created.
 *                       The Storage of the String has to be allocated
 *                       somewhere else and must not be freed before
 *                       destroying the logger.
 ****************************************************************************/

PUBLIC TLogger *
newLogger (
  char * aWorkingDirectory );


/****************************************************************************
 * FUNCTION: destroyLogger
 * DESCRIPTION:
 *   This function destroyes the Logger and deallocates the storage. It also
 *   finishes the last Well-File and closes it.
 * PARAMETER:
 *   aLogger - The Address of the Logger
 ****************************************************************************/

PUBLIC TBoolean
destroyLogger (
  TLogger * aLogger );


/****************************************************************************
 * FUNCTION: LoggerNewWell
 * DESCRIPTION:
 *   After adding a short footnote to the Well-File before (if existing),
 *   This Function creates a new file named according to the time of its
 *   creation. Then it writes a short header into the file.
 * PARAMETER:
 *   aLogger - The Address of the Logger
 ****************************************************************************/

PUBLIC TBoolean
LoggerNewWell (
  TLogger * aLogger );


/****************************************************************************
 * FUNCTION: LoggerAddSample
 * DESCRIPTION:
 *   This Function adds a line to the current File.
 * PARAMETER:
 *   aLogger - The Address of the Logger
 *   aOrigin - The Number of the Circuit it was taken from (Starting with 0)
 *   aWellX  - The Index of the Hole in the Well (X-Axis, Starting with 0)
 *   aWellY  - The Index of the Hole in the Well (Y-Axis, Starting with 0)
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
