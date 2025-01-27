#include "FollowGeometryMovementComponent.h"

UFollowGeometryMovementComponent::UFollowGeometryMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainToPlane = true;
    this->bSnapToPlaneAtStart = true;
    this->bStartMovementAtBeginPlay = false;
}

void UFollowGeometryMovementComponent::StopMovement() {
}

void UFollowGeometryMovementComponent::StartMovement() {
}

void UFollowGeometryMovementComponent::SetSpeedFactor(float NewSpeedFactor) {
}

void UFollowGeometryMovementComponent::Reset() {
}

bool UFollowGeometryMovementComponent::IsMoving() const {
    return false;
}

float UFollowGeometryMovementComponent::GetSpeedFactor() const {
    return 0.0f;
}


