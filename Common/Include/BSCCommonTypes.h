#include <time.h>

#define EWELLSTATUS enum Wellstatus

typedef struct Order {
	int Origin;
	TBoolean isInterval;
	time_t lastExe;
	time_t interval;
}TOrder;

typedef struct Task {
	int Origin;
}TTask;

enum WellStatus
{
	EMPTY,
	ERROR,
	FULL
};

typedef struct WellData {
	struct tm* Timestamp;
	EWELLSTATUS Status;
	int Origin;
} TWellData;



