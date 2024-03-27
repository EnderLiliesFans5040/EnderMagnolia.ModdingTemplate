#include "CommandModule_Timeline_Move.h"

UCommandModule_Timeline_Move::UCommandModule_Timeline_Move() {
    this->RotationMode = EMoveTimelineRotation::None;
    this->MovementModeChangedBehavior = EMoveTimelineMovementModeChangeBehavior::None;
}

void UCommandModule_Timeline_Move::OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


