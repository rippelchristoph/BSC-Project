/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: BSCController.c
 *
 *   DESCRIPTION:
 *
 *
 *   PUBLIC FUNCTIONS:
 *
 * PUBLIC FUNCTIONS:
 *   ProcessBSCController
 *   BSCWriteConfiguration
 *   GetFormattedTime
 *
 * PRIVATE FUNCTIONS:
 *   UpdateRemainingTimes
 *   UpdateTemperature
 *   getConfigByIndex
 ****************************************************************************/

/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "BSCController.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i2c.h"
#include "Device.h"


/** HEADER ******************************************************************
 */
#ifndef  BSCCONTROLLER_H

/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"
#include "BSCCommonTypes.h"
#include "Device.h"
#include "OrderController.h"
#include "Sampler.h"

/****************************************************************************
* SECTION: #define
****************************************************************************/

#define NWELLX		0
#define NWELLY		1

#define ZDOWN		2
#define ZUP			3

#define WELLZEROX	4
#define WELLZEROY	5
#define WELLENDX	6
#define WELLENDY	7

#define NORIGINS	8

#define WAISTPOSX 9
#define WAISTPOSZ 10

const char * const ConfigSyntaxWords[] = { "NWELLX", "NWELLY", "ZDOWN",
"ZUP", "WELLZEROX", "WELLZEROY", "WELLENDX",
"WELLENDY", "NORIGINS", "WAISTPOSX",  "WAISTPOSZ", NULL };

/****************************************************************************
* SECTION: typedef
****************************************************************************/

/****************************************************************************
 * TYPE: BSCConfig
 *
 * DESCRIPTION:
 *   Configruation type that keeps all values that the BSCController and some
 *   classes beneath need. To add another value, you have to add it in the
 *   BSCConfig type, the array and the #define with the corresponding index
 *   and the switch/case statement
 ****************************************************************************/

typedef struct BSCConfig {
	int NWellX;
	int NWellY;

	double ZDown;
	double ZUp;

	double WellZeroX;
	double WellZeroY;

	double WellEndX;
	double WellEndY;

	double WaistPosX;
	double WaistPosY;
	double WaistPosZ;

	int NOrigins;
} TBSCConfig;



typedef struct BSCController {
	TBSCConfig* Configuration;
	TWellData** Well;
	TOrderController* Orders;
	TSampler* Sampler;
	DeviceDeviceClass* EwDeviceObject;
} TBSCController;


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

PRIVATE void
UpdateRemainingTimes (
  TBSCController *              aController );

PRIVATE void
UpdateTemperature (
  TBSCController *              aController );

PRIVATE void *
getConfigByIndex (
  TBSCConfig *                  aConfiguration,
  int                           aIndex );


/****************************************************************************
 * SECTION: Implementation of public functions
 ****************************************************************************/

/****************************************************************************
* FUNCTION: newBSCController
*
* DESCRIPTION:
*   Initializes a new BSC Controller
* RETURN:
Returns the new Address of the BSController
****************************************************************************/
PUBLIC TBSCController *
newBSCController ( void )
{
	TBSCController* retPtr;
	retPtr = malloc(sizeof(TBSCController));
	retPtr->Orders = newOrderController();
	retPtr->Sampler = newSampler();
	
	BSCReadConfiguration(retPtr->Configuration, NULL); //TODO: Configuration Path
	
	//Allocate Storage for multidimensional array
	retPtr->Well = malloc(retPtr->Configuration->NWellX * sizeof(TWellData*));
	for (int i = 0; i < retPtr->Configuration->NWellX; i++) {
		retPtr->Well[i] = malloc(retPtr->Configuration->NWellY * sizeof(TWellData));
		for (int j = 0; j < retPtr->Configuration->NWellY) {
			retPtr->Well[i][j].Status = EMPTY;
		}
	}

	//TODO: EwDeviceObject Initialisieren
	retPtr->EwDeviceObject = EwGetAutoObject(&DeviceDevice, _DeviceDeviceClass_);


	return retPtr;
}

/****************************************************************************
* FUNCTION: BSCReadConfiguration
*
* DESCRIPTION:
*   Sends a Command to the Plotter
****************************************************************************/
PUBLIC void
BSCReadConfiguration (
  TBSCConfig * aConfiguration,
  char *       fileDirectory )
{
	char line[256];
	char* word;
	char* sNumber;
	double dNumber;

	FILE* fp;
	fp = fopen(fileDirectory, "r");



	if (fp == NULL)
	{
		//TODO: Give Some Kind of Error Message to GUI
		return NULL;
	}

	while (1)
	{

		if (fgets(line, 50, fp) == NULL)	//End of File
			break;
		if (*line == '%')	//Comment
			continue;

		word = strtok(line, "=");
		sNumber = strtok(NULL, "=");
		dNumber = atof(sNumber);

		int i = 0;
		while (ConfigSyntaxWords[i])
		{
			if (strcmp(ConfigSyntaxWords[i], word) == 0) {
				switch (i)
				{
				case NWELLX:
					aConfiguration->NWellX = (int)dNumber;
					break;
				case NWELLY:
					aConfiguration->NWellY = (int)dNumber;
					break;
				case ZDOWN:
					aConfiguration->ZDown = dNumber;
					break;
				case ZUP:
					aConfiguration->ZUp = dNumber;
					break;
				case WELLZEROX:
					aConfiguration->WellZeroX = dNumber;
					break;
				case WELLZEROY:
					aConfiguration->WellZeroY = dNumber;
					break;
				case WELLENDX:
					aConfiguration->WellEndX = dNumber;
					break;
				case WELLENDY:
					aConfiguration->WellEndY = dNumber;
					break;
				case WAISTPOSX:
					aConfiguration->WaistPosX = dNumber;
					break;
				case WAISTPOSZ:
					aConfiguration->WaistPosZ = dNumber;
					break;
				default:
					return;
				}
				break;
			}
			i++;
		}

		fclose(fp);
		return;
	}
}


/****************************************************************************
 * FUNCTION: ProcessBSCController
 ****************************************************************************/
PUBLIC void
ProcessBSCController (
  TBSCController * aBSCController )
{
	/*int retVal = -1;
	char line[30];
	if ((retVal = ProcessOrderController(aBSCController->Orders)) != -1) {
		SamplerAddToQueue(aBSCController->Sampler, retVal);
	}

	ProcessSampler(aBSCController->Sampler);
	
	GetFormattedTime(time(NULL), line);*/
	//TODO: UpdateTime - EwDevice Function call
	UpdateTemperature(aBSCController);


	
}
/****************************************************************************
 * FUNCTION: BSCWriteConfiguration
 *
 *   DESCRIPTION:
 *     Writes the Configuration into the File Directory given.
 * PARAMETER:
 *   aConfiguration - The Configuration that is written
 *   aFilePath      - The Drectory the Configuration is written to e.g:
 *                    "C:\Data\Configuration.txt"
 ****************************************************************************/
PUBLIC void
BSCWriteConfiguration (
  TBSCConfig * aConfiguration,
  char *       aFilePath )
{

		int i = 0;
		char line[80];

		FILE* fp;
		fp = fopen(aFilePath, "w");

		if (fp == NULL)
		{
			//TODO: Give Some Kind of Error Message to GUI
			fclose(fp);
			return NULL;
		}

		while (ConfigSyntaxWords[i])
		{
			sprintf(line, "%s=%f", ConfigSyntaxWords[i], *getConfigByIndex(i));
			fputs(line, fp);
		}
		
		fclose(fp);
			
		return;
}

/****************************************************************************
 * FUNCTION: GetFormattedTime
 * DESCRIPTION:
 *   Writes the given Timestamp formatted as a string into the Buffer.
 *   Format: DD.MM.YYYY HH.MM.SS
 * PARAMETER:
 *   aTimeStamp - The Timestamp that should be formatted aBuffer - Address of
 *                already allocated Storage. There should be at least space
 *                for 20 characters
 ****************************************************************************/

PUBLIC void
GetFormattedTime (
  time_t aTimeStamp,
  char * aBuffer )
{
	struct tm * timeinfo = localtime(aTimeStamp);
	strcpy(aBuffer, "");

	sprintf(aBuffer, "%02d.%02d.%d %02d:%02d:%02d",
		timeinfo->tm_mday,
		(timeinfo->tm_mon + 1),
		(timeinfo->tm_year + 1900),
		timeinfo->tm_hour,
		timeinfo->tm_min,
		timeinfo->tm_sec);
}

/****************************************************************************
 * SECTION: Implementation of private Functions
 ****************************************************************************/

/****************************************************************************
 * FUNCTION: UpdateRemainingTimes
 * DESCRIPTION:
 *   Updates the Remaining Times of all Orders until next Execution.
 *   Therefore it uses the NextPointer of the List that is a property of the
 *   OrderController to make the Process faster
 * PARAMETER:
 *   aController - The Address of the Controller Device Object - //TODO:
 ****************************************************************************/

PRIVATE void
UpdateRemainingTimes (
  TBSCController * aController )
{

}

/****************************************************************************
 * FUNCTION: UpdateTemperature
 * DESCRIPTION:
 *   Updates the Remaining Times of all Orders until next Execution.
 *   Therefore it uses the NextPointer of the List that is a property of the
 *   OrderController to make the Process faster
 * PARAMETER:
 *   aController - The Address of the Controller Device Object -
 ****************************************************************************/

PRIVATE void
UpdateTemperature (
  TBSCController * aController )
{
	unsigned char byteAdd[] = { 0x00 };
	char buffer[2];
	float updateVal = 0;
	TI2C* dataStream = newI2C(0x4F);
	I2CWriteBytes(dataStream, byteAdd, 1);
	I2CReadBytes(dataStream, buffer, 2);

	unsigned char buffer[2] = { 0x01, 0xEF };

	char num = buffer[0] << 7 | buffer[1] >> 1;
	updateVal = num;
	updateVal += (float)(buffer[1] & 0x01) / (float)2;

	_DeviceDeviceClass__UpdateTemperature_(aController->EwDeviceObject, updateVal);
	
}

/****************************************************************************
 * FUNCTION: getConfigByIndex
 * DESCRIPTION:
 *   Returns the Pointer to the Value of a Parameter of the Configuration.
 *   The Indexes are handled according to the defines
 * PARAMETER:
 *   aConfiguration - The Address of the Configuration
 *   aIndex         - The Index of which the Address is Returned.
 * RETURN:
 *   Returns the Address of the Parameter in the Configuration
 ****************************************************************************/
PRIVATE void *
getConfigByIndex (
  TBSCConfig * aConfiguration,
  int          aIndex )
{
	switch (aIndex)
	{
	case NWELLX:
		return &(aConfiguration->NWellX);
		break;
	case NWELLY:
		return &(aConfiguration->NWellY);
		break;
	case ZDOWN:
		return &(aConfiguration->ZDown);
		break;
	case ZUP:
		return &(aConfiguration->ZUp);
		break;
	case WELLZEROX:
		return &(aConfiguration->WellZeroX);
		break;
	case WELLZEROY:
		return &(aConfiguration->WellZeroY);
		break;
	case WELLENDX:
		return &(aConfiguration->WellEndX);
		break;
	case WELLENDY:
		return &(aConfiguration->WellEndY);
		break;
	case WAISTPOSX:
		return &(aConfiguration->WaistPosX);
		break;
	case WAISTPOSZ:
		return &(aConfiguration->WaistPosZ);
		break;
	default:
		return;
	}
}
