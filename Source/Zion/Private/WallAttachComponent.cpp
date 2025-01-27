#include "WallAttachComponent.h"

UWallAttachComponent::UWallAttachComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateUpVector = true;
    this->bCheckLateral = true;
    this->bCheckAbove = true;
    this->WallLinecastRange = 200.00f;
}

void UWallAttachComponent::OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


