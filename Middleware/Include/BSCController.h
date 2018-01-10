/****************************************************************************
*
* FILE: BSCController.h
*
* DESCRIPTION:
*   
*
* PUBLIC FUNCTIONS:
*
*
****************************************************************************/

#ifndef BSCCONTROLLER_H
#define BSCCONTROLLER_H


/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"
#include "BSCController.h"
/****************************************************************************
* SECTION: #define
****************************************************************************/



/****************************************************************************
* SECTION: typedef
****************************************************************************/
const char * const ConfigSyntaxWords[] = { "NWELLX", "NWELLY", "ZDOWN", "ZUP", "WELLZEROX", "WELLZEROY", "WELLENDX", "WELLENDY" , NULL };

#define NWELLX		0
#define NWELLY		1
#define ZDOWN		2
#define ZUP			3
#define WELLZEROX	4
#define WELLZEROY	5
#define WELLENDX	6
#define WELLENDY	7

typedef struct BSCConfig {
	int NWellX;
	int NWellY;

	double ZDown;
	double ZUp;

	double WellZeroX;
	double WellZeroY;

	double WellEndX;
	double WellEndY;

} TBSCConfig;



typedef struct BSCController {
	
	TBSCConfig Configuration;



} TBSCController;




#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
* FUNCTION: newBSCController
*
* DESCRIPTION:
*   Initializes a new Plotter
*
****************************************************************************/

PUBLIC TBSCController* newBSCController();


/****************************************************************************
* FUNCTION: BSCReadConfiguration
*
* DESCRIPTION:
*   Sends a Command to the Plotter
****************************************************************************/

PUBLIC void
BSCReadConfiguration(TBSCConfig* aConfiguration, char* fileDirectory);



#ifdef __cplusplus
  }
#endif

#endif /* BSCCONTROLLER_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */
