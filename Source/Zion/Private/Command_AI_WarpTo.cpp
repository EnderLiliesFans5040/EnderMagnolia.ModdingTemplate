#include "Command_AI_WarpTo.h"

UCommand_AI_WarpTo::UCommand_AI_WarpTo() {
    this->WarpLocationComputationTiming = EWarpLocationComputationTiming::AtWarp;
    this->bSweepToTeleportLocation = true;
    this->WarpExecutionTiming = EWarpExecutionTiming::AtStart;
    this->WarpExecutionTime = 0.00f;
    this->bOffsetByHalfHeight = true;
    this->WarpFacingMode = EWarpFacingMode::WarpTarget;
    this->MaxGroundDistance = 1000.00f;
    this->SnapToGroundCollisionChannel = ECC_GameTraceChannel3;
    this->bWarpYAxis = true;
    this->bWarpZAxis = true;
}

void UCommand_AI_WarpTo::OnAnimationStart(UTrackEntry* TrackEntry) {
}


