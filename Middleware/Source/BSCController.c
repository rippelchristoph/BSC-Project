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
 *   newBSCController
 *   destroyBSCController
 *   BSCReadConfiguration
 *   BSCWriteConfiguration
 *   ProcessBSCController
 *   BSCShutdown
 *   GetFormattedTime
 *   BSCAddOrder
 *   BSCRemoveOrder
 *   BSCSetSampleVolume
 *   BSCSetFlowSpeed
 *   BSCSetWasteVolume
 *   BSCSetNeedleGap
 *   BSCSetNumHolesX
 *   BSCSetNumHolesY
 *   BSCSetPosition
 *   BSCSetCurrentPosition
 *   BSCStartConfig
 *   BSCStopConfig
 *
 * PRIVATE FUNCTIONS:
 *   UpdateRemainingTimes
 *   UpdateTemperature
 *   UpdateDayTime
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "BSCController.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>



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
#include "Logger.h"
#include "TemperatureController.h"
#include <time.h>

#define CONFIG_STARTPOS 0
#define CONFIG_ENDPOS 1
#define CONFIG_WASTEPOS 2
#define CONFIG_MOVINGPOS 3


  /****************************************************************************
  * SECTION: typedef
  ****************************************************************************/

typedef struct BSCController {
	TBSCConfig* Configuration;
	TLogger* Logger;
	TTemperatureController* TempContr;
	TWellData** Well;
	TOrderController* Orders;
	TSampler* Sampler;
	DeviceDeviceClass EwDeviceObject;
	time_t LastUpdate;
	char* WorkingDirectory;
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
//This Array HAS to be Null terminated for the ReadConfiguration Function
const char * const ConfigSyntaxWords[] = {
	"MOVINGPOSZMM",
	"WAISTPOSXMM",
	"WAISTPOSZMM",
	"WAISTVOLUL",
	"PROBEVOLUL",
	"FLOWULPS",
	"NEEDLEGAPMM",
	"STARTPOSXMM",
	"STARTPOSYMM",
	"STARTPOSZMM",
	"ENDPOSXMM",
	"ENDPOSYMM",
	"ENDPOSZMM",
	"NUMHOLESX",
	"NUMHOLESY",
	NULL
};

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


/****************************************************************************
 * SECTION: Implementation of public functions
 ****************************************************************************/

/****************************************************************************
 * FUNCTION: newBSCController
 *
 * DESCRIPTION:
 *   Initializes a new BSC Controller
 * RETURN:
 *   Returns the new Address of the BSController
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

	retPtr->WorkingDirectory = strdup("/home/pi/Desktop");

	retPtr->Logger = newLogger(retPtr->WorkingDirectory);
	
	char ConfigPath[80];
	strcpy(ConfigPath, retPtr->WorkingDirectory);
	strcat(ConfigPath, "/Configuration.txt");
	retPtr->Configuration = malloc(sizeof(TBSCConfig));
	BSCReadConfiguration(retPtr->Configuration, ConfigPath);
	

	//Allocate Storage for multidimensional array
	retPtr->Well = malloc(retPtr->Configuration->NumHolesX * sizeof(TWellData*));
	for (i = 0; i < retPtr->Configuration->NumHolesX; i++) {
		retPtr->Well[i] = malloc(retPtr->Configuration->NumHolesY * sizeof(TWellData));
		for (j = 0; j < retPtr->Configuration->NumHolesY; j++) {
			retPtr->Well[i][j].Status = EMPTY;
		}
	}

	
	retPtr->Sampler = newSampler(retPtr->Configuration, retPtr->Well);
	retPtr->TempContr = newTemperatureController(0x4F, 0.5, -22.0);

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
	if (aController != NULL) {
		int i = 0;
		if (aController->Orders != NULL)
			destroyOrderController(aController->Orders);

		if (aController->Sampler != NULL)
			destroySampler(aController->Sampler);

		if (aController->Configuration != NULL)
			free(aController->Configuration);

		if (aController->Well != NULL) {
			for (i = 0; i < aController->Configuration->NumHolesX; i++) {
				free(aController->Well[i]);
			}

			free(aController->Well);
		}



		free(aController);
	}
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
				case 0:
					aConfiguration->MovingPosZMM = dNumber;
					break;
				case 1:
					aConfiguration->WaistPosXMM = dNumber;
					break;
				case 2:
					aConfiguration->WaistPosZMM = dNumber;
					break;
				case 3:
					aConfiguration->WaistVolUL = dNumber;
					break;
				case 4:
					aConfiguration->ProbeVolUL = dNumber;
					break;
				case 5:
					aConfiguration->FlowULPS = dNumber;
					break;
				case 6:
					aConfiguration->NeedleGapMM = dNumber;
					break;
				case 7:
					aConfiguration->StartPosXMM = dNumber;
					break;
				case 8:
					aConfiguration->StartPosYMM = dNumber;
					break;
				case 9:
					aConfiguration->StartPosZMM = dNumber;
					break;
				case 10:
					aConfiguration->EndPosXMM = dNumber;
					break;
				case 11:
					aConfiguration->EndPosYMM = dNumber;
					break;
				case 12:
					aConfiguration->EndPosZMM = dNumber;
					break;
				case 13:
					aConfiguration->NumHolesX = dNumber;
					break;
				case 14:
					aConfiguration->NumHolesY = dNumber;
					break;
				default:
					break;
				}
				
				break;
			}
			i++;
		}
	}
	
	fclose(fp);
	return;
}

/****************************************************************************
 * FUNCTION: BSCWriteConfiguration
 *
 * DESCRIPTION:
 *   Writes the Configuration into the File Directory given.
 * PARAMETER:
 *   aConfiguration - The Configuration that is written
 *   aFilePath      - The Drectory the Configuration is written to e.g:
 *                    "/Data/Configuration.txt"
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
		  double value = 0.0;
		  switch (i)
		  {
		  case 0:
			  value = aConfiguration->MovingPosZMM;
			  break;
		  case 1:
			  value = aConfiguration->WaistPosXMM;
			  break;
		  case 2:
			  value = aConfiguration->WaistPosZMM;
			  break;
		  case 3:
			  value = aConfiguration->WaistVolUL;
			  break;
		  case 4:
			  value = aConfiguration->FlowULPS;
			  break;
		  case 5:
			  value = aConfiguration->NeedleGapMM;
			  break;
		  case 6:
			  value = aConfiguration->StartPosXMM;
			  break;
		  case 7:
			  value = aConfiguration->StartPosYMM;
			  break;
		  case 8:
			  value = aConfiguration->StartPosZMM;
			  break;
		  case 9:
			  value = aConfiguration->EndPosXMM;
			  break;
		  case 10:
			  value = aConfiguration->EndPosYMM;
			  break;
		  case 11:
			  value = aConfiguration->EndPosZMM;
			  break;
		  case 12:
			  value = aConfiguration->NumHolesX;
			  break;
		  case 13:
			  value = aConfiguration->NumHolesY;
			  break;
		  default:
			  break;
		  }
		  sprintf(line, "%s=%lf\n", ConfigSyntaxWords[i], value);
		  fputs(line, fp);
		  i++;
	  }

	  fclose(fp);

	  return;
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
	OrderControllerAddOrder(BSCController->Orders, (time_t)(aInterval * 60), aOrigin);
}

/****************************************************************************
 * FUNCTION: BSCRemoveOrder
 * DESCRIPTION:
 *   Wrapper function to add an Order to the OrderController of the
 *   BSCController
 ****************************************************************************/

PUBLIC void
BSCRemoveOrder (
  int aInterval,
  int aOrigin )
{
	OrderControllerAddOrder(BSCController->Orders, (time_t)(aInterval * 60), aOrigin);
}


/****************************************************************************
 * FUNCTION: BSCSetSampleVolume
 ****************************************************************************/
PUBLIC void
BSCSetSampleVolume (
  int aSampleVolUL )
{
	BSCController->Configuration->ProbeVolUL = aSampleVolUL;
}
/****************************************************************************
 * FUNCTION: BSCSetFlowSpeed
 ****************************************************************************/
PUBLIC void
BSCSetFlowSpeed (
  int aSpeedULPS )
{
	BSCController->Configuration->FlowULPS = aSpeedULPS;
}
/****************************************************************************
 * FUNCTION: BSCSetWasteVolume
 ****************************************************************************/
PUBLIC void
BSCSetWasteVolume (
  int aWastVolUL )
{
	BSCController->Configuration->WaistVolUL = aWastVolUL;
}
/****************************************************************************
 * FUNCTION: BSCSetNeedleGap
 ****************************************************************************/
PUBLIC void
BSCSetNeedleGap (
  int aNeedleGapum )
{
	BSCController->Configuration->NeedleGapMM =(double) aNeedleGapum / (double) 1000;
}
/****************************************************************************
 * FUNCTION: BSCSetNumHolesX
 ****************************************************************************/
PUBLIC void
BSCSetNumHolesX (
  int aNumHolesX )
{
	BSCController->Configuration->NumHolesX = aNumHolesX;
}
/****************************************************************************
 * FUNCTION: BSCSetNumHolesY
 ****************************************************************************/
PUBLIC void
BSCSetNumHolesY (
  int aNumHolesY )
{
	BSCController->Configuration->NumHolesY = aNumHolesY;
}
/****************************************************************************
 * FUNCTION: BSCSetPosition
 ****************************************************************************/
PUBLIC void
BSCSetPosition (
  int aIndex,
  int aX,
  int aY,
  int aZ )
{
	switch (aIndex)
	{
	case CONFIG_STARTPOS:
		BSCController->Configuration->StartPosXMM = aX;
		BSCController->Configuration->StartPosYMM = aY;
		BSCController->Configuration->StartPosZMM = aZ;
		break;
	case CONFIG_ENDPOS:
		BSCController->Configuration->EndPosXMM = aX;
		BSCController->Configuration->EndPosYMM = aY;
		BSCController->Configuration->EndPosZMM = aZ;
		break;
	case CONFIG_WASTEPOS:
		BSCController->Configuration->WaistPosXMM = aX;
		BSCController->Configuration->WaistPosZMM = aZ;
		break;
	case CONFIG_MOVINGPOS:
		BSCController->Configuration->MovingPosZMM = aZ;
		break;
	default:
		break;
	}
}
/****************************************************************************
 * FUNCTION: BSCSetCurrentPosition
 ****************************************************************************/
PUBLIC void
BSCSetCurrentPosition (
  int aX,
  int aY,
  int aZ )
{

}
/****************************************************************************
 * FUNCTION: BSCStartConfig
 ****************************************************************************/
PUBLIC void
BSCStartConfig ( void )
{
	SamplerStartConfig(BSCController->Sampler);
}
/****************************************************************************
 * FUNCTION: BSCStopConfig
 ****************************************************************************/
PUBLIC void
BSCStopConfig ( void )
{
	char directory[100];
	strcpy(directory, BSCController->WorkingDirectory);
	strcat(directory, "/Configuration.txt");
	BSCWriteConfiguration(BSCController->Configuration, directory);
	SamplerEndConfig(BSCController->Sampler);
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
			(XInt32)retOrder->Origin,
			(XInt32)OrderGetRemainingTime(retOrder) / 60
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
	double updateVal = TemperatureReaderGetTemperature(aController->TempContr->TempReader);
	DeviceDeviceClass__UpdateTemperature(aController->EwDeviceObject, ((XFloat) updateVal));
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
		(XInt32)(structTime->tm_year + 1900),
		(XInt32)(structTime->tm_mon + 1),
		(XInt32)(structTime->tm_mday),
		(XInt32)(structTime->tm_hour),
		(XInt32)(structTime->tm_min)
	);

}