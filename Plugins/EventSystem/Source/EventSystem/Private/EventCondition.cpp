#include "EventCondition.h"

UEventCondition::UEventCondition() {
    this->bInvert = false;
}

bool UEventCondition::Evaluate_Implementation(UEventContext* Context) const {
    return false;
}


