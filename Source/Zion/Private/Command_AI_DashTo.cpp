#include "Command_AI_DashTo.h"

UCommand_AI_DashTo::UCommand_AI_DashTo() {
    this->bCheckDistanceFromBlocker = false;
    this->AutoStopAtDistanceFromBlocker = 0.00f;
    this->LoopSEInstance = NULL;
    this->Ability = NULL;
}

void UCommand_AI_DashTo::OnMoveBlocked(const FHitResult& Hit) {
}


