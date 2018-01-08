/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Sampler.c
 *
 * PUBLIC FUNCTIONS:
 *   newSampler
 *   destroySampler
 *   SamplerAddToQueue
 ****************************************************************************/

/****************************************************************************
 * SECTION: #include
 ****************************************************************************/

#include <stdlib.h>

/** HEADER ******************************************************************
 */
#ifndef  SAMPLER_H

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
#endif

/*
 ** HEADER ******************************************************************/

/****************************************************************************
* SECTION: Declaration of private functions
****************************************************************************/
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
newSampler ( void )
{
	TSampler* retSampler;
	retSampler = malloc(sizeof(TSampler));

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
* SECTION: Implementation of private functions
****************************************************************************/