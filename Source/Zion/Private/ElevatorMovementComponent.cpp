#include "ElevatorMovementComponent.h"

UElevatorMovementComponent::UElevatorMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->Speed = 100.00f;
    this->DelayBeforeMove = 0.00f;
    this->bSweep = true;
    this->TeleportType = ETeleportType::None;
}

void UElevatorMovementComponent::TeleportToOrigin() {
}

void UElevatorMovementComponent::TeleportToDestination() {
}

void UElevatorMovementComponent::SetAllowOutOfScreenSpeedFactor(bool bAllowed) {
}

bool UElevatorMovementComponent::IsMoving() const {
    return false;
}

bool UElevatorMovementComponent::IsDirectionSetToDestination() const {
    return false;
}

void UElevatorMovementComponent::GoToOrigin(bool bInstant) {
}

void UElevatorMovementComponent::GoToDestination(bool bInstant) {
}

FVector UElevatorMovementComponent::GetCurrentLocation() const {
    return FVector{};
}


