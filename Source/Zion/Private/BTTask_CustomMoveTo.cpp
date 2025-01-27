#include "BTTask_CustomMoveTo.h"

UBTTask_CustomMoveTo::UBTTask_CustomMoveTo() {
    this->NodeName = TEXT("[Zion] Move To");
    this->MovementSpeedModeOverride = EMovementSpeedMode::None;
    this->AcceptableRadiusType = ECustomMoveToAcceptableRadiusType::Absolute;
    this->MinAcceptableRadius = 0.00f;
    this->MaxAcceptableRadius = 0.00f;
}


