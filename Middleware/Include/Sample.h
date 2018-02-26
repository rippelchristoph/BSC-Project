/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: Sample.h
 *
 * DESCRIPTION:
 *   This class represents a sample that was taken.
 *
 * PUBLIC FUNCTIONS:
 *   newSample
 *   destroySample
 ****************************************************************************/

#ifndef SAMPLE_H
#define SAMPLE_H

/****************************************************************************
 * SECTION: Include
 ****************************************************************************/
#include "HtlStdDef.h"
#include <time.h>
/****************************************************************************
 * SECTION: typedef
 ****************************************************************************/
typedef struct Sample {
	time_t Time;
	int aCiruitNumber;
	int WellPosX;
	int WellPosY;
}TSample;


#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newSample
 ****************************************************************************/

PUBLIC TSample *
newSample (
  time_t aTimestamp,
  int    aX,
  int    aY,
  int    aCircuitNumber );


/****************************************************************************
 * FUNCTION: destroySample
 ****************************************************************************/

PUBLIC void
destroySample (
  TSample * aSample );



#ifdef __cplusplus
  }
#endif

#endif /* SAMPLE_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
