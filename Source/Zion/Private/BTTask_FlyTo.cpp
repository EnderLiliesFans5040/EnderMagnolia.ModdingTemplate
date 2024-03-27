#include "BTTask_FlyTo.h"

UBTTask_FlyTo::UBTTask_FlyTo() {
    this->NodeName = TEXT("[Zion] Fly To");
    this->bTrackMovingGoal = false;
    this->bProjectGoalLocation = false;
    this->bClampHeight = false;
    this->MinHeight = 0.00f;
    this->MaxHeight = 0.00f;
    this->bClampWidth = false;
    this->MinWidth = 0.00f;
    this->MaxWidth = 0.00f;
    this->TargetOffsetType = EFlyToTargetOffsetType::Absolute;
}


