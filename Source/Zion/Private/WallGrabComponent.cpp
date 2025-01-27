#include "WallGrabComponent.h"

UWallGrabComponent::UWallGrabComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinVerticalityForWallGrab = 0.90f;
    this->DistanceToWallGrabOffset = 10.00f;
    this->TopOffsetForLineCast = 50.00f;
    this->BottomOffsetForLineCast = 50.00f;
    this->MaxZVelocityForGrab = 0.00f;
    this->IgnoreWallGrabStates.AddDefaulted(3);
    this->WallGrabStates.AddDefaulted(1);
    this->TransitionToWallDashBumpingStates.AddDefaulted(1);
    this->SpiritClass = NULL;
}

void UWallGrabComponent::RefreshWallGrab() {
}

void UWallGrabComponent::OnWallGrab_Implementation() {
}

void UWallGrabComponent::OnStartAnimation(UTrackEntry* TrackEntry) {
}

void UWallGrabComponent::OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UWallGrabComponent::OnMoveBlocked(const FHitResult& Impact) {
}

bool UWallGrabComponent::IsWallOnRight() const {
    return false;
}

bool UWallGrabComponent::IsGrabbingWall() const {
    return false;
}


