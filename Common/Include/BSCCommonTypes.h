#ifndef BSCCOMMONTYPES_H

#define BSCCOMMONTYPES_H

#include <time.h>


typedef struct Task {
	int Origin;
}TTask;

/*****************************************************************************
 * _TYPE: WellStatus
 * DESCRIPTION:
 *	EMPTY,
 *	ERROR,
 *	FULL
*****************************************************************************/
typedef enum WellStatus {
	EMPTY,
	ERROR,
	FULL
}EWellStatus;

/*****************************************************************************
* _TYPE: WellData
*****************************************************************************/
typedef struct WellData {
	struct tm* Timestamp;
	EWellStatus Status;
	int Origin;
} TWellData;

/****************************************************************************
* TYPE: BSCConfig
*
* DESCRIPTION:
*   Configruation type that keeps all values that the BSCController and some
*   classes beneath need. To add another value, you have to add it in the
*   BSCConfig type, the array and the #define with the corresponding index
*   and the switch/case statement
****************************************************************************/

typedef struct BSCConfig {
	int MovingPosZMM;
	
	int WaistPosXMM;
	int WaistPosZMM;

	double WaistVolUL;
	double ProbeVolUL;
	double FlowULPS;
	double NeedleGapMM;

	int StartPosXMM;
	int StartPosYMM;
	int StartPosZMM;

	int EndPosXMM;
	int EndPosYMM;
	int EndPosZMM;

	int NumHolesX;
	int NumHolesY;
} TBSCConfig;




#endif // !BSCCOMMONTYPES_H