/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Logger.c
 *
 * PUBLIC FUNCTIONS:
 *   newLogger
 *   destroyLogger
 *   LoggerNewWell
 *   LoggerAddSample
 *
 * PRIVATE FUNCTIONS:
 *   LoggerCloseWell
 ****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


#ifndef LOGGER_H
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

#endif // !LOGGER_H

/****************************************************************************
 * SECTION: Declaration of private functions
 ****************************************************************************/

PRIVATE TBoolean
LoggerCloseWell (
  TLogger *                     aLogger );


/****************************************************************************
 * FUNCTION: newLogger
 ****************************************************************************/
PUBLIC TLogger *
newLogger (
  char * aWorkingDirectory )
{
	printf("Logger Init");
	TLogger* retPtr = malloc(sizeof(TLogger));
	if (retPtr == NULL) {
		return NULL;
	}

	retPtr->WorkingDirectory = strdup(aWorkingDirectory);
	if (retPtr->WorkingDirectory == NULL) {
		free(retPtr);
		return NULL;
	}

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyLogger
 ****************************************************************************/
PUBLIC TBoolean
destroyLogger (
  TLogger * aLogger )
{
	if (aLogger != NULL) {
		LoggerCloseWell(aLogger);
		free(aLogger->WorkingDirectory);
		free(aLogger);
	}
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: LoggerNewWell
 ****************************************************************************/
PUBLIC TBoolean
LoggerNewWell (
  TLogger * aLogger )
{
	time_t now = time(NULL);
	struct tm* formatTime = localtime(&now);
	FILE* filePointer;
	LoggerCloseWell(aLogger);

	char fileName[150];
	sprintf(fileName,  "%s/%d-%02d-%02d_%02d-%02d.txt",
		aLogger->WorkingDirectory,
		formatTime->tm_year + 1900,
		formatTime->tm_mon + 1,
		formatTime->tm_mday,
		formatTime->tm_hour,
		formatTime->tm_min);

	aLogger->CurrentLogFile = strdup(fileName);
	filePointer = fopen(aLogger->CurrentLogFile, "w");
	sprintf(fileName, "Started at %d.%02d.%02d, %02d:%02d:%02d\n",
		formatTime->tm_mday,
		formatTime->tm_mon + 1,
		formatTime->tm_year + 1900,
		formatTime->tm_hour,
		formatTime->tm_min,
		formatTime->tm_sec);

	fputs(fileName, filePointer);
	fclose(filePointer);
	return EFALSE;
}



/****************************************************************************
 * FUNCTION: LoggerAddSample
 ****************************************************************************/
PUBLIC TBoolean
LoggerAddSample (
  TLogger * aLogger,
  int       aOrigin,
  int       aWellX,
  int       aWellY )
{
	FILE* filePointer;
	time_t now = time(NULL);
	struct tm * formatTime = localtime(&now);
	char line[150];

	filePointer = fopen(aLogger->CurrentLogFile, "a");
	sprintf(line, "%c%i, Circuit: %i, %02d.%02d-%02d:%02d",
		(char)('A' + aWellX),
		aWellY,
		aOrigin,
		formatTime->tm_mday,
		formatTime->tm_mon + 1,
		formatTime->tm_hour,
		formatTime->tm_min);

	fputs(line, filePointer);
	return EFALSE;
}
/****************************************************************************
 * SECTION: Implementation of private functions
 ****************************************************************************/
/****************************************************************************
 * FUNCTION: LoggerCloseWell
 ****************************************************************************/
PRIVATE TBoolean
LoggerCloseWell (
  TLogger * aLogger )
{
	FILE* filePointer;
	char line[150];
	time_t now = time(NULL);
	struct tm* formatTime = localtime(&now);

	if (aLogger->CurrentLogFile != NULL) {
		//Add End Messge to last Log
		filePointer = fopen(aLogger->CurrentLogFile, "a"); //Append
		sprintf(line, "\n\nThis is the End of the Log File for this Well\nIt was closed on %02d.%02d.%d, %02d:%02d:%02d\n",
			formatTime->tm_mday,
			formatTime->tm_mon + 1,
			formatTime->tm_year + 1900,
			formatTime->tm_hour,
			formatTime->tm_min,
			formatTime->tm_sec);

		fputs(line, filePointer);
		fclose(filePointer);
		free(aLogger->CurrentLogFile);
	}

	return EFALSE;
}