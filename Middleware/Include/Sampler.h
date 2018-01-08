/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Sampler.h
 *
 * PUBLIC FUNCTIONS:
 *   newSampler
 *   destroySampler
 *   SamplerAddToQueue
 ****************************************************************************/

#ifndef SAMPLER_H
#define SAMPLER_H


/****************************************************************************
 * SECTION: #include
 ****************************************************************************/
#include "HtlStdDef.h"
#include "List.h"


/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
 /****************************************************************************
 *	_TYPE: TSampler
 ****************************************************************************/
typedef struct Sampler {
	TListHeader* Queue;
}TSampler;
/****************************************************************************
*	_ENUM: ESamplerStates
****************************************************************************/
typedef enum SamplerStates {
	Home,
	Waist,
	OverPos,
	DrawerOpen,
	DropPos,
	Flow,
	BackOut,
	DrawerClose,

	ERROR
}ESamplerStates;


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
newSampler ( void );


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
 ****************************************************************************/

PUBLIC void
SamplerAddToQueue (
  TSampler * aSampler,
  int        aOrigin );



#ifdef __cplusplus
  }
#endif

#endif /* SAMPLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
