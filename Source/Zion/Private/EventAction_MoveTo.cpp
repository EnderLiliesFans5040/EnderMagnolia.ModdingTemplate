#include "EventAction_MoveTo.h"

UEventAction_MoveTo::UEventAction_MoveTo() {
    this->AcceptanceRadius = 0.00f;
    this->bStopOnOverlap = false;
    this->bTeleportToTargetOnComplete = true;
    this->bSweepOnTeleport = false;
    this->MovementSpeedModeOverride = EMovementSpeedMode::None;
}

void UEventAction_MoveTo::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}


