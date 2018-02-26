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
 *   SamplerNewWell
 *   SamplerStartConfig
 *   SamplerEndConfig
 *   SamplerConfigSetPlotter
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
  TWellData ** aWell,
  char *       WorkingDirectory );


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

PUBLIC TSample*
ProcessSampler (
  TSampler * aSampler );


/****************************************************************************
 * FUNCTION: SamplerNewWell
 ****************************************************************************/

PUBLIC void
SamplerNewWell (
  TSampler * aSampler );


/****************************************************************************
 * FUNCTION: SamplerStartConfig
 ****************************************************************************/

PUBLIC void
SamplerStartConfig (
  TSampler * aSampler );


/****************************************************************************
 * FUNCTION: SamplerEndConfig
 ****************************************************************************/

PUBLIC void
SamplerEndConfig (
  TSampler * aSampler );


/****************************************************************************
 * FUNCTION: SamplerConfigSetPlotter
 ****************************************************************************/

PUBLIC void
SamplerConfigSetPlotter (
  TSampler * aSampler,
  int        aX,
  int        aY,
  int        aZ );



#ifdef __cplusplus
  }
#endif

#endif /* SAMPLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
