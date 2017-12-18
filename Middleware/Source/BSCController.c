/****************************************************************************
*
* FILE: BSCController.c
*
* DESCRIPTION:
*   
*
* PUBLIC FUNCTIONS:
*
*
****************************************************************************/

/****************************************************************************
* SECTION: #include
****************************************************************************/

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


#endif

/*** HEADER ****************************************************************/



/****************************************************************************
* SECTION: #define
****************************************************************************/


/****************************************************************************
* SECTION: typedef
****************************************************************************/


/****************************************************************************
* SECTION: Declaration of private functions
****************************************************************************/


/****************************************************************************
* SECTION: Implementation of public functions
****************************************************************************/

/****************************************************************************
* FUNCTION: newBSCController
*
* DESCRIPTION:
*   Initializes a new Plotter
*
****************************************************************************/
PUBLIC TBSCController* newBSCController()
{
	

	return NULL;
}

/****************************************************************************
* FUNCTION: BSCReadConfiguration
*
* DESCRIPTION:
*   Sends a Command to the Plotter
****************************************************************************/
PUBLIC void
BSCReadConfiguration(TBSCConfig* aConfiguration, char* fileDirectory)
{
	char line[256];
	char* word;
	char* sNumber;
	double dNumber;

	FILE* fp;
	fp = fopen(fileDirectory, "r");



	if (fp == NULL)
	{
		//TODO: Give Some Kind of Error Message to GUI
		return NULL;
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
				case NWELLX:
					aConfiguration->NWellX = (int)dNumber;
					break;
				case NWELLY:
					aConfiguration->NWellY = (int)dNumber;
					break;
				case ZDOWN:
					aConfiguration->ZDown = dNumber;
					break;
				case ZUP:
					aConfiguration->ZUp = dNumber;
					break;
				case WELLZEROX:
					aConfiguration->WellZeroX = dNumber;
					break;
				case WELLZEROY:
					aConfiguration->WellZeroY = dNumber;
					break;
				case WELLENDX:
					aConfiguration->WellEndX = dNumber;
					break;
				case WELLENDY:
					aConfiguration->WellEndY = dNumber;
					break;
				default:
					return 0;
				}
				break;
			}
			i++;
		}


	}
}

/****************************************************************************
* SECTION: Implementation of private functions
****************************************************************************/
