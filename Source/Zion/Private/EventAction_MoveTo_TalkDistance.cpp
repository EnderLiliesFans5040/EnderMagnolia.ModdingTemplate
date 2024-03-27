#include "EventAction_MoveTo_TalkDistance.h"

UEventAction_MoveTo_TalkDistance::UEventAction_MoveTo_TalkDistance() {
    this->MovementType = EMoveToTalkDistanceMovementType::Closer;
    this->DistanceToTalkTarget = 150.00f;
    this->bUpdateFacingWhileMoving = true;
    this->bSweepOnTeleport = true;
    this->bPlaySubjectTurnAnimation = true;
    this->SubjectTurnAnimationDefinitions.AddDefaulted(1);
    this->TalkTargetFacingType = EMoveToTalkDistanceTargetFacingType::AfterSubjectMovement;
    this->TalkTargetTurnAnimationDefinitions.AddDefaulted(1);
    this->bUseEventCamera = true;
    this->ZoomDistanceOverride = -2500.00f;
}

void UEventAction_MoveTo_TalkDistance::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}


