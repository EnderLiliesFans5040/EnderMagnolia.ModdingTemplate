#include "Command_AI_WarpTo.h"

UCommand_AI_WarpTo::UCommand_AI_WarpTo() {
    this->WarpExecutionTiming = EWarpExecutionTiming::AtStart;
    this->WarpExecutionTime = 0.00f;
    this->bSetFacingToTarget = true;
    this->bWarpYAxis = true;
    this->bWarpZAxis = true;
}

void UCommand_AI_WarpTo::OnAnimationStart(UTrackEntry* TrackEntry) {
}


