#include "BTTask_WarpToLocation.h"

UBTTask_WarpToLocation::UBTTask_WarpToLocation() {
    this->NodeName = TEXT("[Zion] Warp to Location");
    this->WorldSpaceOffsetType = EWarpWorldSpaceOffsetType::None;
    this->bWarpXAxis = true;
    this->bWarpYAxis = true;
    this->bWarpZAxis = true;
    this->bUseNavMesh = false;
}


