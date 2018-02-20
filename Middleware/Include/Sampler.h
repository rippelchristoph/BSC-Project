/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Sampler.h
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
 ****************************************************************************/

#ifndef SAMPLER_H
#define SAMPLER_H


/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"
#include "List.h"
#include "BSCCommonTypes.h"
#include "PlotterController.h"


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

	Sampler_ERROR
}ESamplerStates;
 
 /****************************************************************************
 *	_TYPE: TSampler
 ****************************************************************************/
typedef struct Sampler {
	TBSCConfig* Config;
	TPlotter* Plotter;
	TListHeader* Queue;
	ESamplerStates State;
	TWellData** Well;
	time_t* Time;
	char* ErrorMessage;
}TSampler;



#ifdef __cplusplus
  extern "C" {
#endif



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
  TWellData ** aWell );


/****************************************************************************
 * FUNCTION: destroySampler
 * DESCRIPTION:
 *   Function deallocates all storage from the sampler
 * PARAMETER:
 *   aSampler- The Address of the Sampler
 ****************************************************************************/

PUBLIC void
destroySampler (
  TSampler * aSampler );


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
  int        aOrigin );


/****************************************************************************
 * FUNCTION: ProcessSampler
 * DESCRIPTION:
 *   Processes the Sampler. Therefore it has to be called periodically
 * PARAMETER:
 *   aSampler - The Address of the Sampler
 ****************************************************************************/

PUBLIC int
ProcessSampler (
  TSampler * aSampler );



#ifdef __cplusplus
  }
#endif

#endif /* SAMPLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
