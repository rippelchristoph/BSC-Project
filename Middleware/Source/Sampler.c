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
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/

#include <stdlib.h>
#include "BSCController.h"

/** HEADER ******************************************************************
 */
#ifndef  SAMPLER_H

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"
#include "List.h"
#include "BSCCommonTypes.h"


/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
 /****************************************************************************
 *	_TYPE: TSampler
 ****************************************************************************/
typedef struct Sampler {
	TListHeader* Queue;
	ESamplerStates State;
	TWellData** Well;
	char* ErrorMessage;
}TSampler;
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

	ERROR
}ESamplerStates;
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
  TWellData ** aWell )
{
	TSampler* retSampler;
	retSampler = malloc(sizeof(TSampler));

	retSampler->Well = aWell;
	retSampler->Queue = newList();
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
	while (retInt = ListRemoveByIndex(aSampler->Queue, 0)!=NULL)
	{
		free(retInt);
	}
	destroyList(aSampler->Queue);

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
	case ERROR:
	default:
		break;
	}
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
	//TODO: Ventile Schalten
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
	//TODO: Send Home Commands to 3d Plotter
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
	//TODO Check for ok´s for homes
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
{}

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

}

/****************************************************************************
 * FUNCTION: StateDrawerOpen
 *
 *   DESCRIPTION:
 *     Function is called periodically when the State is 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
StateDrawerOpen (
  TSampler * aSampler )
{

}
/****************************************************************************
 * FUNCTION: EnterStateDropPos
 *
 *   DESCRIPTION:
 *     Function is called when beginning the State 'Wait' PARAMETER:
 *     aSampler - The Address of the Sampler
 ****************************************************************************/
PRIVATE void
EnterStateDropPos (
  TSampler * aSampler )
{

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