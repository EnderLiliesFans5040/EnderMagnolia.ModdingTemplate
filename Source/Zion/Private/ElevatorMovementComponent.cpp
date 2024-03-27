#include "ElevatorMovementComponent.h"

UElevatorMovementComponent::UElevatorMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->Speed = 100.00f;
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

void UElevatorMovementComponent::GoToOrigin() {
}

void UElevatorMovementComponent::GoToDestination() {
}

FVector UElevatorMovementComponent::GetCurrentLocation() const {
    return FVector{};
}


