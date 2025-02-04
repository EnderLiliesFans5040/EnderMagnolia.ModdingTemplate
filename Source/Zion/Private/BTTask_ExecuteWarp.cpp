#include "BTTask_ExecuteWarp.h"

UBTTask_ExecuteWarp::UBTTask_ExecuteWarp() {
    this->NodeName = TEXT("[Zion] Execute Warp");
    this->TargetLocalSpaceOffsetMode = EWarpOffsetMode::Absolute;
    this->WorldSpaceOffsetMode = EWarpOffsetMode::Absolute;
    this->bUseNavMesh = false;
    this->bSnapToGround = false;
    this->HeightOffsetFromGround = 0.00f;
    this->WarpCommandClass = NULL;
}


