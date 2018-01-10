#include <time.h>


typedef struct Task {
	int Origin;
}TTask;


enum WellStatus {
	EMPTY,
	ERROR,
	FULL
};

typedef enum WellStatus EWellStatus;

typedef struct WellData {
	struct tm* Timestamp;
	EWellStatus Status;
	int Origin;
} TWellData;



