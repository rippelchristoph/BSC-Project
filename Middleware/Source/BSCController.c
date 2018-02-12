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
 *   destroyBSCController
 *   BSCReadConfiguration
 *   ProcessBSCController
 *   BSCShutdown
 *   BSCWriteConfiguration
 *   GetFormattedTime
 *   BSCAddOrder
 *
 * PRIVATE FUNCTIONS:
 *   UpdateRemainingTimes
 *   UpdateTemperature
 *   UpdateDayTime
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
#include <time.h>

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


/****************************************************************************
* SECTION: typedef
****************************************************************************/

typedef struct BSCController {
	TBSCConfig* Configuration;
	TWellData** Well;
	TOrderController* Orders;
	TSampler* Sampler;
	DeviceDeviceClass EwDeviceObject;
	time_t LastUpdate;
} TBSCController;

/****************************************************************************
 * SECTION: Declaration of Global Variables
 ****************************************************************************/
TBoolean ShutdownBSCController;
TBSCController* BSCController;
#endif

/*
 ** HEADER ******************************************************************/



/****************************************************************************
* SECTION: #define
****************************************************************************/
const char * const ConfigSyntaxWords[] = { "NWELLX", "NWELLY", "ZDOWN",
"ZUP", "WELLZEROX", "WELLZEROY", "WELLENDX",
"WELLENDY", "NORIGINS", "WAISTPOSX",  "WAISTPOSZ", NULL };

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

PRIVATE void
UpdateDayTime (
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
	int i = 0;
	int j = 0;
	TBSCController* retPtr;
	retPtr = malloc(sizeof(TBSCController));
	time(&retPtr->LastUpdate);
	retPtr->Orders = newOrderController();
	//retPtr->Sampler = newSampler(retPtr->Configuration, retPtr->Well);
	//
	////retPtr->Configuration = malloc(sizeof(TBSCConfig));
	////BSCReadConfiguration(retPtr->Configuration, NULL); //TODO: Configuration Path
	////
	////Allocate Storage for multidimensional array
	//retPtr->Well = malloc(retPtr->Configuration->NWellX * sizeof(TWellData*));
	//for (i = 0; i < retPtr->Configuration->NWellX; i++) {
	//	retPtr->Well[i] = malloc(retPtr->Configuration->NWellY * sizeof(TWellData));
	//	for (j = 0; j < retPtr->Configuration->NWellY; j++) {
	//		retPtr->Well[i][j].Status = EMPTY;
	//	}
	//}

	retPtr->EwDeviceObject = EwGetAutoObject(&DeviceDevice, DeviceDeviceClass);

	ShutdownBSCController = EFALSE;

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyBSCController
 ****************************************************************************/

PUBLIC void
destroyBSCController (
  TBSCController * aController )
{
	int i = 0;

	destroyOrderController(aController->Orders);
	destroySampler(aController->Sampler);

	free(aController->Configuration);

	
	for (i = 0; i < aController->Configuration->NWellX; i++) {
		free(aController->Well[i]);
	}

	free(aController->Well);

	free(aController);
}

/****************************************************************************
 * FUNCTION: BSCReadConfiguration
 *
 *   DESCRIPTION:
 *     Sends a Command to the Plotter
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
PUBLIC int
ProcessBSCController (
  TBSCController * aBSCController )
{
	int retVal = -1;
	if ((retVal = ProcessOrderController(aBSCController->Orders)) != -1) {
		EwPrint("Added to Queue: %i", retVal);
		SamplerAddToQueue(aBSCController->Sampler, retVal);
	}

	//ProcessSampler(aBSCController->Sampler);
	
	time_t now = time(NULL);

	if ((now - aBSCController->LastUpdate) >= 5) {
		aBSCController->LastUpdate = now;

		UpdateTemperature(aBSCController);
		UpdateDayTime(aBSCController);
		UpdateRemainingTimes(aBSCController);
	}
	
	return ShutdownBSCController;
}

/****************************************************************************
 * FUNCTION: BSCShutdown
 ****************************************************************************/
PUBLIC void
BSCShutdown ( void )
{
	ShutdownBSCController = ETRUE;
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
		}

		while (ConfigSyntaxWords[i])
		{
			sprintf(line, "%s=%f", ConfigSyntaxWords[i], *((float*)getConfigByIndex(aConfiguration, i)));
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
  time_t * aTimeStamp,
  char *   aBuffer )
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
 * FUNCTION: BSCAddOrder
 * DESCRIPTION:
 *   Wrapper function to add an Order to the OrderController of the
 *   BSCController
 ****************************************************************************/

PUBLIC void
BSCAddOrder (
  int aInterval,
  int aOrigin )
{
	OrderControllerAddOrder(BSCController->Orders, (time_t) (aInterval*60), aOrigin);
}

/****************************************************************************
* FUNCTION: BSCRemoveOrder
* DESCRIPTION:
*   Wrapper function to add an Order to the OrderController of the
*   BSCController
****************************************************************************/

PUBLIC void
BSCRemoveOrder(
	int aInterval,
	int aOrigin)
{
	OrderControllerAddOrder(BSCController->Orders, (time_t)(aInterval * 60), aOrigin);
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
	TListHeader* OrderList = aController->Orders->OrderList;
	TOrder* retOrder;
	ListSetReadPointer(OrderList, 0);
	while ((retOrder = ListGetNext(OrderList)))
	{
		DeviceDeviceClass_onRemainingTime(aController->EwDeviceObject, 
			(XInt32) retOrder->Origin,
			(XInt32) OrderGetRemainingTime(retOrder) / 60 
		);
	}
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
	unsigned char buffer[2];
	float updateVal = 0;
	short complement;
	int decValue;
	TI2C* dataStream = newI2C(0x4F);
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

	destroyI2C(dataStream);
	DeviceDeviceClass__UpdateTemperature(aController->EwDeviceObject,((XFloat) updateVal));
	
}

/****************************************************************************
 * FUNCTION: UpdateDayTime
 * DESCRIPTION:
 *   Updates the Remaining Times of all Orders until next Execution.
 *   Therefore it uses the NextPointer of the List that is a property of the
 *   OrderController to make the Process faster
 * PARAMETER:
 *   aController - The Address of the Controller Device Object -
 ****************************************************************************/

PRIVATE void
UpdateDayTime (
  TBSCController * aController )
{
	time_t now = time(NULL);
	struct tm* structTime = localtime(&now);

	DeviceDeviceClass_onTime(aController->EwDeviceObject,
		(XInt32) (structTime->tm_year + 1900),
		(XInt32) (structTime->tm_mon + 1),
		(XInt32) (structTime->tm_mday),
		(XInt32) (structTime->tm_hour),
		(XInt32) (structTime->tm_min)
	);

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
		return NULL;
	}
}
