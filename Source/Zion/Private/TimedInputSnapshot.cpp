#include "TimedInputSnapshot.h"

FTimedInputSnapshot::FTimedInputSnapshot() {
    this->Time = 0.00f;
    this->bProcessed = false;
    this->bProcessedExactly = false;
    this->ProcessedTime = 0.00f;
}

