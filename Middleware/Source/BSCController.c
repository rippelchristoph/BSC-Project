/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: BSCController.c
 *
 * DESCRIPTION:
 *   This Class is the top-class, that handles all subcomponents. It is the
 *   Interface to the GUI.
 *
 * PUBLIC FUNCTIONS:
 *   newBSCController
 *   destroyBSCController
 *   BSCReadConfiguration
 *   BSCWriteConfiguration
 *   ProcessBSCController
 *   BSCShutdown
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
 *   BSCNewWell
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
#include "Sample.h"

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
TBSCController* ControllerObj;
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
 *   Initializes a new BSC Controller and all it´s Components
 * RETURN:
 *   Returns the new Address of the BSController
 ****************************************************************************/
PUBLIC TBSCController *
newBSCController ( void )
{
	//All Components:
	//time_t LastUpdate;
	//TOrderController* Orders;
	//char* WorkingDirectory;
	//TBSCConfig* Configuration;
	//TWellData** Well;
	//TSampler* Sampler;
	//TTemperatureController* TempContr;
	//DeviceDeviceClass EwDeviceObject;
	
	printf("BSCInit");
	int i = 0;
	int j = 0;
	//Allocate Storage for Controller itself
	TBSCController* retPtr;
	retPtr = malloc(sizeof(TBSCController));
	time(&retPtr->LastUpdate);
	//Initialize OrderController
	retPtr->Orders = newOrderController();
	//Initialize Workingdirectory
	retPtr->WorkingDirectory = strdup("/home/pi/Desktop");

	//Initialize and read Configuration 
	char ConfigPath[80];
	strcpy(ConfigPath, retPtr->WorkingDirectory);
	strcat(ConfigPath, "/Configuration.txt");
	retPtr->Configuration = malloc(sizeof(TBSCConfig));
	BSCReadConfiguration(retPtr->Configuration, ConfigPath);
	//Allocate Storage for multidimensional array
	printf("Well init");
	retPtr->Well = malloc(retPtr->Configuration->NumHolesX * sizeof(TWellData*));
	for (i = 0; i < retPtr->Configuration->NumHolesX; i++) {
		retPtr->Well[i] = malloc(retPtr->Configuration->NumHolesY * sizeof(TWellData));
		for (j = 0; j < retPtr->Configuration->NumHolesY; j++) {
			retPtr->Well[i][j].Status = EMPTY;
		}
	}
	//Initialize Sampler
	retPtr->Sampler = newSampler(retPtr->Configuration, retPtr->Well);
	//Initialize TemperatureController
	retPtr->TempContr = newTemperatureController(0x4F, 0.5, -22.0);
	//Get DeviceObject from Embedded Wizard
	retPtr->EwDeviceObject = EwGetAutoObject(&DeviceDevice, DeviceDeviceClass);

	ShutdownBSCController = EFALSE;

	return retPtr;
}

/****************************************************************************
 * FUNCTION: destroyBSCController
 * DESCRIPTION:
 *   Deinitializes the BSCController and all its sub-components. It also
 *   frees all allocated Storage
 * PARAMETER:
 *   aController - The Pointer of the Controller
 * RETURN:
 *   EFALSE if it was successful and ETRUE if the function was not successful
 ****************************************************************************/

PUBLIC void
destroyBSCController (
  TBSCController * aController )
{
	//All Components:
	//time_t LastUpdate;
	//TOrderController* Orders;
	//char* WorkingDirectory;
	//TBSCConfig* Configuration;
	//TWellData** Well;
	//TSampler* Sampler;
	//TTemperatureController* TempContr;
	//DeviceDeviceClass EwDeviceObject;

	if (aController != NULL) {
		int i = 0;
		if (aController->Orders != NULL)
			destroyOrderController(aController->Orders);

		if (aController->WorkingDirectory != NULL)
			free(aController->WorkingDirectory);

		if (aController->Configuration != NULL)
			free(aController->Configuration);

		if (aController->Well != NULL) {
			for (i = 0; i < aController->Configuration->NumHolesX; i++) {
				free(aController->Well[i]);
			}
			free(aController->Well);
		}

		if (aController->Sampler != NULL)
			destroySampler(aController->Sampler);

		if (aController->TempContr != NULL)
			destroyTemperatureController(aController->TempContr);

		free(aController);
	}
	else {
		return ETRUE;
	}

	return EFALSE;
}

/****************************************************************************
 * FUNCTION: BSCReadConfiguration
 *
 * DESCRIPTION:
 *   Reads a Configuration from a .txt File to the Address that is given. If
 *   the File cannot be found/opened the Function will not change the
 *   Configuration.
 * PARAMETER:
 *   aConfiguration - The Address of the Configuaration which the values of
 *                    the file should be assigned to.
 * RETURN:
 *   ETRUE if the File was not found and the Configuration was not changed.
 *   EFALSE if the File was opened successful.
 ****************************************************************************/
PUBLIC TBoolean
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
		return ETRUE;
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
	return EFALSE;
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
 * RETURN:
 *   ETRUE if the File was not found and the Configuration was not changed.
 *   EFALSE if the File was opened successful.
 ****************************************************************************/
PUBLIC TBoolean
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
		  return ETRUE;
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

	  return EFALSE;
  }

/****************************************************************************
 * FUNCTION: ProcessBSCController
 * DESCRIPTION:
 *   This function is called periodically and processes all Components of the
 *   BSCController.
 * RETURN:
 *   The Function returns a Boolean Variable that, when returned ETRUE, will
 *   shut down the MainLoop of the EmWi Application
 ****************************************************************************/
PUBLIC int
ProcessBSCController (
  TBSCController * aBSCController )
{
	//All Components:
	//TOrderController* Orders;
	//TSampler* Sampler;
	//TTemperatureController* TempContr;
	//DeviceDeviceClass EwDeviceObject;
	//time_t LastUpdate;

	//Process the Order Controller
	//If the OrderControlle returns something else than -1 
	//the according CircuitNumber is added to the Queue of the Sampler
	int retVal = -1;
	if ((retVal = ProcessOrderController(aBSCController->Orders)) != -1) {
		EwPrint("Added to Queue: %i", retVal);
		SamplerAddToQueue(aBSCController->Sampler, retVal);
	}
	//Process Sampler, that Controls the Plotter and the Valves
	ProcessSampler(aBSCController->Sampler);

	//Process TemperatureController that controls the Peltier
	//and reads the Temperature
	ProcessTemperatureController(aBSCController->TempContr);

	//Update the Values on the Screen every 5 seconds
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
 * DESCRIPTION:
 *   The Variable set in this function will shut down the EmWi - MainLoop
 ****************************************************************************/
PUBLIC void
BSCShutdown ( void )
{
	ShutdownBSCController = ETRUE;
}

/****************************************************************************
 * FUNCTION: BSCAddOrder
 * DESCRIPTION:
 *   Wrapper function to add an Order to the OrderController of the
 *   BSCController
 * PARAMETER:
 *   aInterval - The Interval of the Order in minutes. If the Interval is 0,
 *               the Order will not be added to the OrderController, but is
 *               added to the Queue of the Sampler.
 *   aOrigin   - The CircuitNumber of which the Probes should be collected
 *               [0..5]
 ****************************************************************************/

PUBLIC void
BSCAddOrder (
  int aInterval,
  int aOrigin )
{
	if (aInterval <= 0) {
		SamplerAddToQueue(ControllerObj->Sampler, aOrigin);
	}
	OrderControllerAddOrder(ControllerObj->Orders, (time_t)(aInterval * 60), aOrigin);
}

/****************************************************************************
 * FUNCTION: BSCRemoveOrder
 * DESCRIPTION:
 *   Wrapper function to remove an Order to the OrderController of the
 *   BSCController
 * PARAMETER:
 *   aOrigin - The CircuitNumber of which all Orders will be removed.
 ****************************************************************************/

PUBLIC void
BSCRemoveOrder (
  int aOrigin )
{
	OrderControllerRemoveOrder(ControllerObj->Orders, aOrigin);
}

/****************************************************************************
 * FUNCTION: BSCSetSampleVolume
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Volume
 *   of a Single Sampler [µl].
 * PARAMETER:
 *   aSamplerVolUL - The Volume of a Sample in µl
 ****************************************************************************/
PUBLIC void
BSCSetSampleVolume (
  int aSampleVolUL )
{
	ControllerObj->Configuration->ProbeVolUL = aSampleVolUL;
}

/****************************************************************************
 * FUNCTION: BSCSetFlowSpeed
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Flow
 *   Speed with which the serum flows [µl/s]
 * PARAMETER:
 *   aSpeedULPS - The Flow Speed
 ****************************************************************************/
PUBLIC void
BSCSetFlowSpeed (
  int aSpeedULPS )
{
	ControllerObj->Configuration->FlowULPS = aSpeedULPS;
}

/****************************************************************************
 * FUNCTION: BSCSetWasteVolume
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Volume
 *   that is wasted before taking a probe [µl].
 * PARAMETER:
 *   aWastVolUL - The Volume that is wasted.
 ****************************************************************************/
PUBLIC void
BSCSetWasteVolume (
  int aWastVolUL )
{
	ControllerObj->Configuration->WaistVolUL = aWastVolUL;
}

/****************************************************************************
 * FUNCTION: BSCSetNeedleGap
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Distance
 *   between the needles. The Distance between the Needles have to be the
 *   same between every needle.
 * PARAMETER:
 *   aNeedleGapum - The Distance between two Needles [µl].
 ****************************************************************************/
PUBLIC void
BSCSetNeedleGap (
  int aNeedleGapum )
{
	ControllerObj->Configuration->NeedleGapMM =(double) aNeedleGapum / (double) 1000;
}

/****************************************************************************
 * FUNCTION: BSCSetNumHolesX
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Number
 *   of holes in the well in X-Direction
 * PARAMETER:
 *   aNumHolesX - Number of holes in x-Direction
 ****************************************************************************/
PUBLIC void
BSCSetNumHolesX (
  int aNumHolesX )
{
	ControllerObj->Configuration->NumHolesX = aNumHolesX;
}

/****************************************************************************
 * FUNCTION: BSCSetNumHolesY
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets the Number
 *   of holes in the well in Y-Direction
 * PARAMETER:
 *   aNumHolesX - Number of holes in Y-Direction
 ****************************************************************************/
PUBLIC void
BSCSetNumHolesY (
  int aNumHolesY )
{
	ControllerObj->Configuration->NumHolesY = aNumHolesY;
}

/****************************************************************************
 * FUNCTION: BSCSetPosition
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It sets a Position
 *   of the Configuration
 * PARAMETER:
 *   aIndex - The index indicates which Position is set: CONFIG_STARTPOS 0,
 *            CONFIG_ENDPOS 1, CONFIG_WASTEPOS 2, CONFIG_MOVINGPOS 3
 *   aX     - The absolute X-Position
 *   aY     - The absolute Y-Position
 *   aZ     - The absolute Z-Position
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
		ControllerObj->Configuration->StartPosXMM = aX;
		ControllerObj->Configuration->StartPosYMM = aY;
		ControllerObj->Configuration->StartPosZMM = aZ;
		break;
	case CONFIG_ENDPOS:
		ControllerObj->Configuration->EndPosXMM = aX;
		ControllerObj->Configuration->EndPosYMM = aY;
		ControllerObj->Configuration->EndPosZMM = aZ;
		break;
	case CONFIG_WASTEPOS:
		ControllerObj->Configuration->WaistPosXMM = aX;
		ControllerObj->Configuration->WaistPosZMM = aZ;
		break;
	case CONFIG_MOVINGPOS:
		ControllerObj->Configuration->MovingPosZMM = aZ;
		break;
	default:
		break;
	}
}

/****************************************************************************
 * FUNCTION: BSCSetCurrentPosition
 * DESCRIPTION:
 *   This Function is part of the Configuration Process. It is used, to
 *   operate the Plotter manually and by that be possible to set the
 *   Positions of the Configuration. Before Calling this Function, the
 *   StartConfig-Function has to be called.
 * PARAMETER:
 *   aX - The absolute X-Position
 *   aY - The absolute Y-Position
 *   aZ - The absolute Z-Position
 ****************************************************************************/
PUBLIC void
BSCSetCurrentPosition (
  int aX,
  int aY,
  int aZ )
{
	SamplerConfigSetPlotter(ControllerObj->Sampler, aX, aY, aZ);
}
/****************************************************************************
 * FUNCTION: BSCStartConfig
 * DESCRIPTION:
 *   This Function Starts the Configuration Process. It sets the State of the
 *   Sampler to "Config" and by that enables the manual Control of the
 *   Plotter.
 ****************************************************************************/
PUBLIC void
BSCStartConfig ( void )
{
	SamplerStartConfig(ControllerObj->Sampler);
}
/****************************************************************************
 * FUNCTION: BSCStopConfig
 * DESCRIPTION:
 *   This Function Ends the Configuration Process. It Ends the Config State
 *   of the Sampler and writes the Configuration to a txt file. It is written
 *   to <WorkingDirectory>/Configuration.txt
 ****************************************************************************/
PUBLIC void
BSCStopConfig ( void )
{
	char directory[100];
	strcpy(directory, ControllerObj->WorkingDirectory);
	strcat(directory, "/Configuration.txt");
	BSCWriteConfiguration(ControllerObj->Configuration, directory);
	SamplerEndConfig(ControllerObj->Sampler);
}

/****************************************************************************
 * FUNCTION: BSCNewWell
 ****************************************************************************/
PUBLIC void
BSCNewWell ( void )
{
	SamplerNewWell(ControllerObj->Sampler);

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
 *   aController - The Address of the Controller Device Object
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
		//Update is Called in Minutes, the Remaining time is returned in seconds.
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