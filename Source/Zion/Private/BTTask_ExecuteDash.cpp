#include "BTTask_ExecuteDash.h"

UBTTask_ExecuteDash::UBTTask_ExecuteDash() {
    this->NodeName = TEXT("[Zion] Execute Dash");
    this->bTrackTargetLocation = true;
    this->AcceptableRadius = 25.00f;
    this->DashCommandClass = NULL;
}


