#include "EventAction_Wait.h"

UEventAction_Wait::UEventAction_Wait() {
    this->WaitType = EWaitType::Time;
    this->WaitTime = 0.00f;
    this->WaitFrame = 0;
}


