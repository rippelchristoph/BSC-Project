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

#endif // !BSCCOMMONTYPES_H