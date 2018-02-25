/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Sampler.c
 *
 * DESCRIPTION:
 *   This File handles the whole process of making a new probe. It operates
 *   the Plotter and the valves that control the Flow of the fluid
 *
 * PUBLIC FUNCTIONS:
 *   newSampler
 *   destroySampler
 *   SamplerAddToQueue
 *   ProcessSampler
 *   SamplerNewWell
 *   SamplerStartConfig
 *   SamplerEndConfig
 *   SamplerConfigSetPlotter
 *
 * PRIVATE FUNCTIONS:
 *   EnterStateWait
 *   StateWait
 *   EnterStateHome
 *   StateHome
 *   EnterStateWaistPos
 *   StateWaistPos
 *   EnterStateWaist
 *   StateWaist
 *   EnterStateOverPos
 *   StateOverPos
 *   EnterStateDrawerOpen
 *   StateDrawerOpen
 *   EnterStateDropPos
 *   StateDropPos
 *   EnterStateFlow
 *   StateFlow
 *   EnterStateBackOut
 *   StateBackOut
 *   EnterStateDrawerClose
 *   StateDrawerClose
 *   EnterStateERROR
 *   StateERROR
 *   GetNextHoleX
 *   GetNextHoleY
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/

#include <stdlib.h>
#include <time.h>
#include "DigIO.h"



#define TIME_UTC 1

#define MILLION 1000000

/** HEADER ******************************************************************
 */
#ifndef  SAMPLER_H

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"
#include "List.h"
#include "BSCCommonTypes.h"
#include "PlotterController.h"
#include "Sample.h"
#include "Logger.h"

/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
 /****************************************************************************
 *	_ENUM: ESamplerStates
 ****************************************************************************/
typedef enum SamplerStates {
	Wait,
	Home,
	WaistPos,
	Waist,
	OverPos,
	DrawerOpen,
	DropPos,
	Flow,
	BackOut,
	DrawerClose,

	Config,
	NewWell,

	Sampler_ERROR
}ESamplerStates;
 

 /****************************************************************************
 *	_TYPE: TSampler
 ****************************************************************************/
typedef struct Sampler {
	TBSCConfig* Config;
	TPlotter* Plotter;
	TLogger* Logger;
	TListHeader* Queue;
	ESamplerStates State;
	TWellData** Well;
	struct timespec* Timestamp;
	char* ErrorMessage;
	int ConfX, ConfY, ConfZ;

}TSampler;

#endif

/*
 ** HEADER ******************************************************************/

/****************************************************************************
 * SECTION: Declaration of private functions
 ****************************************************************************/

PRIVATE void
EnterStateWait (
  TSampler *                    aSampler );

PRIVATE void
StateWait (
  TSampler *                    aSampler );

PRIVATE void
EnterStateHome (
  TSampler *                    aSampler );

PRIVATE void
StateHome (
  TSampler *                    aSampler );

PRIVATE void
EnterStateWaistPos (
  TSampler *                    aSampler );

PRIVATE void
StateWaistPos (
  TSampler *                    aSampler );

PRIVATE void
EnterStateWaist (
  TSampler *                    aSampler );

PRIVATE void
StateWaist (
  TSampler *                    aSampler );

PRIVATE void
EnterStateOverPos (
  TSampler *                    aSampler );

PRIVATE void
StateOverPos (
  TSampler *                    aSampler );

PRIVATE void
EnterStateDrawerOpen (
  TSampler *                    aSampler );

PRIVATE void
StateDrawerOpen (
  TSampler *                    aSampler );

PRIVATE void
EnterStateDropPos (
  TSampler *                    aSampler );

PRIVATE void
StateDropPos (
  TSampler *                    aSampler );

PRIVATE void
EnterStateFlow (
  TSampler *                    aSampler );

PRIVATE void
StateFlow (
  TSampler *                    aSampler );

PRIVATE void
EnterStateBackOut (
  TSampler *                    aSampler );

PRIVATE void
StateBackOut (
  TSampler *                    aSampler );

PRIVATE void
EnterStateDrawerClose (
  TSampler *                    aSampler );

PRIVATE void
StateDrawerClose (
  TSampler *                    aSampler );

PRIVATE void
EnterStateERROR (
  TSampler *                    aSampler );

PRIVATE void
StateERROR (
  TSampler *                    aSampler );

PRIVATE int
GetNextHoleX (
  TSampler *                    aSampler );

PRIVATE int
GetNextHoleY (
  TSampler *                    aSampler );


/****************************************************************************
 * SECTION: Implementation of public functions
 ****************************************************************************/
/****************************************************************************
 * FUNCTION: newSampler
 * DESCRIPTION:
 *   Function initializes a new Sampler and allocates storage for its
 *   variables
 * RETURN:
 *   Returns the Address of the new Sampler
 ****************************************************************************/
PUBLIC TSampler *
newSampler (
  TBSCConfig * aConfiguration,
  TWellData ** aWell,
  char *       WorkingDirectory )
{
	printf("Sampler Init");
	TSampler* retSampler;
	retSampler = malloc(sizeof(TSampler));

	retSampler->Logger = newLogger(WorkingDirectory);
	retSampler->Timestamp = malloc(sizeof(struct timespec));
	timespec_get(retSampler->Timestamp, TIME_UTC);
	retSampler->Well = aWell;
	retSampler->Queue = newList();
	retSampler->Plotter = newPlotter();
	return retSampler;
}

/****************************************************************************
 * FUNCTION: destroySampler
 * DESCRIPTION:
 *   Function deallocates all storage from the sampler
 * PARAMETER:
 *   aSampler- The Address of the Sampler
 ****************************************************************************/
PUBLIC void
destroySampler (
  TSampler * aSampler )
{
	if (aSampler == NULL)
		return;

	int* retInt;
	while ((retInt = (int*) ListRemoveByIndex(aSampler->Queue, 0))!=NULL)
	{
		free(retInt);
	}

	destroyLogger(aSampler->Logger);

	destroyList(aSampler->Queue);
	free(aSampler->Timestamp);

	free(aSampler);
}

/****************************************************************************
 * FUNCTION: SamplerAddToQueue
 * DESCRIPTION:
 *   Adds an Origin to the Queue of the Sampler as it can only process one at
 *   a time
 * PARAMETER:
 *   aSampler - The Address of the Sampler
 *   aOrigin  - The Origin of which the Probe should be
 ****************************************************************************/
PUBLIC void
SamplerAddToQueue (
  TSampler * aSampler,
  int        aOrigin )
{
	int* dynInt = malloc(sizeof(int));

	ListAdd(aSampler->Queue, dynInt);
}


/****************************************************************************
 * FUNCTION: ProcessSampler
 * DESCRIPTION:
 *   Processes the Sampler. Therefore it has to be called periodically
 * PARAMETER:
 *   aSampler - The Address of the Sampler
 ****************************************************************************/
PUBLIC TBoolean
ProcessSampler (
  TSampler * aSampler )
{
	switch (aSampler->State)
	{
	case Wait:
		StateWait(aSampler);
		break;
	case Home:
		StateHome(aSampler);
		break;
	case WaistPos:
		StateWaistPos(aSampler);
		break;
	case Waist:
		StateWaist(aSampler);
		break;
	case OverPos:
		StateOverPos(aSampler);
		break;
	case DrawerOpen:
		StateDrawerOpen(aSampler);
		break;
	case DropPos:
		StateDropPos(aSampler);
		break;
	case Flow:
		StateFlow(aSampler);
		break;
	case BackOut:
		StateBackOut(aSampler);
		break;
	case DrawerClose:
		StateDrawerClose(aSampler);
		break;
	case Sampler_ERROR:
		StateERROR(aSampler);
		break;
	case Config:
		break;
	case NewWell:
		break;
	default:
		break;
	}
	return EFALSE;
}

/****************************************************************************
 * FUNCTION: SamplerNewWell
 ****************************************************************************/
PUBLIC void
SamplerNewWell (
  TSampler * aSampler )
{

}

/****************************************************************************
 * FUNCTION: SamplerStartConfig
 ****************************************************************************/
PUBLIC void
SamplerStartConfig (
  TSampler * aSampler )
{
	//Remove all Circuit in Queue
	int* retPtr;
	while ((retPtr = ListRemoveByIndex(aSampler->Queue, 0)) != NULL)
		free(retPtr);


	aSampler->State = Config;
	DigIOCloseCircuit(*((int*)ListGetByIndex(aSampler->Queue, 0)));
	PLTGoTo(aSampler->Plotter,
		-1.0,
		-1.0,
		aSampler->Config->MovingPosZMM);

	PLTHomeYAxis(aSampler->Plotter);
	PLTHomeAxis(aSampler->Plotter);
	timespec_get(aSampler->Timestamp, TIME_UTC);
	aSampler->Timestamp->tv_sec -= 10;
}

/****************************************************************************
 * FUNCTION: SamplerEndConfig
 ****************************************************************************/
PUBLIC void
SamplerEndConfig (
  TSampler * aSampler )
{
	PLTGoTo(aSampler->Plotter,
		-1.0,
		-1.0,
		aSampler->Config->MovingPosZMM);

	PLTHomeYAxis(aSampler->Plotter);
	PLTHomeAxis(aSampler->Plotter);

	EnterStateWait(aSampler);
}

/****************************************************************************
 * FUNCTION: SamplerConfigSetPlotter
 ****************************************************************************/
PUBLIC void
SamplerConfigSetPlotter (
  TSampler * aSampler,
  int        aX,
  int        aY,
  int        aZ )
{
	aSampler->ConfX = aX;
	aSampler->ConfY = aY;
	aSampler->ConfZ = aZ;
	struct timespec now;
	timespec_get(&now, TIME_UTC);

	if (aSampler->Timestamp->tv_sec < now.tv_sec) {
		if (aSampler->State == Config) {
			PLTGoTo(aSampler->Plotter,
				aX, aY, aZ);
		}
		else {
			return;
		}
	}
	return;
}

/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
/****************************************************************************
 * FUNCTION: EnterStateWait
 *
 * DESCRIPTION:
 *   Function is called when beginning the State 'Wait'. It sets the valves
 *   to their idle state.
 * PARAMETER:
 *   aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateWait (
  TSampler * aSampler )
{
	aSampler->State = Wait;
}

/****************************************************************************
 * FUNCTION: StateWait
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait'. It checks
 *     whether the Queue is empty and starts a Sample Process if necessary
 * PARAMETER:
 *   aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateWait (
  TSampler * aSampler )
{
	if (ListIsNotEmty(aSampler->Queue)) {
		EnterStateHome(aSampler);
	}
}

/****************************************************************************
 * FUNCTION: EnterStateHome
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateHome (
  TSampler * aSampler )
{
	PLTSendCommand(aSampler->Plotter, HOMEX);
	PLTSendCommand(aSampler->Plotter, HOMEY);
	PLTSendCommand(aSampler->Plotter, HOMEZ);
	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateHome
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateHome (
  TSampler * aSampler )
{
	struct timespec now;
	timespec_get(&now, TIME_UTC);
	if (now.tv_sec - 10 > aSampler->Timestamp->tv_sec) {
		EnterStateWaistPos(aSampler);
	}
}

/****************************************************************************
 * FUNCTION: EnterStateWaistPos
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateWaistPos (
  TSampler * aSampler )
{
	PLTGoTo(aSampler->Plotter,
		aSampler->Config->WaistPosXMM,
		-1.0,
		aSampler->Config->WaistPosZMM);

	//Don´t use Y Axis (-1.0)
	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateWaistPos
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateWaistPos (
  TSampler * aSampler )
{
	struct timespec now;
	timespec_get(&now, TIME_UTC);
	if (now.tv_sec - 10 > aSampler->Timestamp->tv_sec) {
		EnterStateWaist(aSampler);
	}
}

/****************************************************************************
 * FUNCTION: EnterStateWaist
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateWaist (
  TSampler * aSampler )
{
	DigIOOpenCircuit( *((int*) ListGetByIndex(aSampler->Queue, 0)));
	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateWaist
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateWaist (
  TSampler * aSampler )
{

	struct timespec now;
	timespec_get(&now, TIME_UTC);

	long waistTimeMS = 1000 * ((aSampler->Config->WaistVolUL) / (aSampler->Config->FlowULPS));

	long elapsedTimeMS = ((now.tv_nsec / MILLION) + (now.tv_sec * 1000)) -
		((aSampler->Timestamp->tv_nsec / MILLION) + (aSampler->Timestamp->tv_sec * 1000));


	if (elapsedTimeMS >= waistTimeMS) {
		EnterStateOverPos(aSampler);
	}
}
/****************************************************************************
 * FUNCTION: EnterStateOverPos
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateOverPos (
  TSampler * aSampler )
{
	DigIOCloseCircuit(*((int*)ListGetByIndex(aSampler->Queue, 0)));
	
	PLTGoTo(aSampler->Plotter,
		aSampler->Config->StartPosXMM,
		-1.0,
		aSampler->Config->MovingPosZMM);

	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateOverPos
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateOverPos (
  TSampler * aSampler )
{
	struct timespec now;
	timespec_get(&now, TIME_UTC);
	if (now.tv_sec - 10 > aSampler->Timestamp->tv_sec) {
		EnterStateDrawerOpen(aSampler);
	}
}
/****************************************************************************
 * FUNCTION: EnterStateDrawerOpen
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateDrawerOpen (
  TSampler * aSampler )
{
	TBSCConfig* c = aSampler->Config;
	double XPos = 0, YPos = 0;
	XPos =	c->StartPosXMM + (double) GetNextHoleX(aSampler) * 
		((c->EndPosXMM - c->StartPosXMM) / ((double)c->NumHolesX))
		+ c->NeedleGapMM * *((int*)ListGetByIndex(aSampler->Queue, 0));

	YPos = c->StartPosYMM + (double)GetNextHoleY(aSampler) *
		((c->EndPosYMM - c->StartPosYMM) / ((double)c->NumHolesY));


	PLTGoTo(aSampler->Plotter,
		XPos,
		YPos,
		-1.0);

	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateDrawerOpen
 *
 * DESCRIPTION:
 *   Function is called periodically when the State is 'DrawerOpen'
 * PARAMETER:
 *   aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateDrawerOpen (
  TSampler * aSampler )
{
	struct timespec now;
	timespec_get(&now, TIME_UTC);
	if (now.tv_sec - 10 > aSampler->Timestamp->tv_sec) {
		EnterStateDropPos(aSampler);
	}
}
/****************************************************************************
 * FUNCTION: EnterStateDropPos
 *
 * DESCRIPTION:
 *   Function is called when beginning the State 'DropPos'
 * PARAMETER:
 *   aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateDropPos (
  TSampler * aSampler )
{
	TBSCConfig* c = aSampler->Config;
	double ZPos = 0;

	ZPos = c->StartPosZMM
		+ GetNextHoleX(aSampler) * (c->EndPosZMM - c->StartPosZMM) / (double)c->NumHolesX	//X Correction
		+ GetNextHoleY(aSampler) * (c->EndPosZMM - c->StartPosZMM) / (double)c->NumHolesY;	//Y Correction

	PLTGoTo(aSampler->Plotter,
		-1.0,
		-1.0,
		ZPos);

	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateDropPos
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateDropPos (
  TSampler * aSampler )
{
	struct timespec now;
	timespec_get(&now, TIME_UTC);
	if (now.tv_sec - 10 > aSampler->Timestamp->tv_sec) {
		EnterStateFlow(aSampler);
	}
}
/****************************************************************************
 * FUNCTION: EnterStateFlow
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateFlow (
  TSampler * aSampler )
{
	DigIOOpenCircuit(*((int*)ListGetByIndex(aSampler->Queue, 0)));
	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateFlow
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateFlow (
  TSampler * aSampler )
{
	struct timespec now;
	timespec_get(&now, TIME_UTC);

	long waistTimeMS = 1000 * ((aSampler->Config->ProbeVolUL) / (aSampler->Config->FlowULPS));

	long elapsedTimeMS = ((now.tv_nsec / MILLION) + (now.tv_sec * 1000)) -
		((aSampler->Timestamp->tv_nsec / MILLION) + (aSampler->Timestamp->tv_sec * 1000));


	if (elapsedTimeMS >= waistTimeMS) {
		EnterStateBackOut(aSampler);
	}
}
/****************************************************************************
 * FUNCTION: EnterStateBackOut
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateBackOut (
  TSampler * aSampler )
{
	DigIOCloseCircuit(*((int*)ListGetByIndex(aSampler->Queue, 0)));
	PLTGoTo(aSampler->Plotter,
		-1.0,
		-1.0,
		aSampler->Config->MovingPosZMM);
	
	

	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateBackOut
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateBackOut (
  TSampler * aSampler )
{
	struct timespec now;
	int* retPtr;
	timespec_get(&now, TIME_UTC);
	if (now.tv_sec - 10 > aSampler->Timestamp->tv_sec) {
		int x = GetNextHoleX(aSampler);
		int y = GetNextHoleY(aSampler);
		//Remove executed sample from Queue
		retPtr = ListRemoveByIndex(aSampler->Queue, 0);
		
		LoggerAddSample(aSampler->Logger, *retPtr, x, y);
		
		free(retPtr);
		EnterStateDrawerClose(aSampler);
	}

	return;
}
/****************************************************************************
 * FUNCTION: EnterStateDrawerClose
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateDrawerClose (
  TSampler * aSampler )
{
	PLTHomeAxis(aSampler->Plotter);
	//Order: YXZ

	timespec_get(aSampler->Timestamp, TIME_UTC);
}

/****************************************************************************
 * FUNCTION: StateDrawerClose
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateDrawerClose (
  TSampler * aSampler )
{
	struct timespec now;
	timespec_get(&now, TIME_UTC);
	if (now.tv_sec - 15 > aSampler->Timestamp->tv_sec) {
		EnterStateWait(aSampler);
	}
}
/****************************************************************************
 * FUNCTION: EnterStateERROR
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateERROR (
  TSampler * aSampler )
{

}
/****************************************************************************
 * FUNCTION: StateERROR
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateERROR (
  TSampler * aSampler )
{

}

/****************************************************************************
 * FUNCTION: GetNextHoleX
 * DESCRIPTION:
 *   Function looks for the First Hole in the Well with the Status EMPTY.
 * RETURN:
 *   Returns the Index (beginning with 0) if an empty one is found. If not,
 *   the return is -1;
 ****************************************************************************/
PRIVATE int
GetNextHoleX (
  TSampler * aSampler )
{
	int i = 0, j = 0;
	for (; i < aSampler->Config->NumHolesX; i++) {
		for (; j < aSampler->Config->NumHolesY; j++) {
			if (aSampler->Well[i][j].Status == EMPTY) {
				return i;
			}
		}
	}
	return -1;
}

/****************************************************************************
 * FUNCTION: GetNextHoleY
 * DESCRIPTION:
 *   Function looks for the First Hole in the Well with the Status EMPTY.
 * RETURN:
 *   Returns the Index (beginning with 0) if an empty one is found. If not,
 *   the return is -1;
 ****************************************************************************/
PRIVATE int
GetNextHoleY (
  TSampler * aSampler )
{
	int i = 0, j = 0;
	for (; i < aSampler->Config->NumHolesX; i++) {
		for (; j < aSampler->Config->NumHolesY; j++) {
			if (aSampler->Well[i][j].Status == EMPTY) {
				return j;
			}
		}
	}
	return -1;
}

