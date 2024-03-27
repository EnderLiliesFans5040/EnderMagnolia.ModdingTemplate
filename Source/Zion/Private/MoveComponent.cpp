#include "MoveComponent.h"

UMoveComponent::UMoveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainToPlane = true;
    this->bSnapToPlaneAtStart = true;
    this->bSweep = true;
    this->bClampMaxSpeed = false;
    this->MaxSpeed = 0.00f;
    this->bRotationFollowsVelocity = false;
    this->GravityFactor = 0.00f;
}

void UMoveComponent::SetVelocity(FVector NewVelocity) {
}

void UMoveComponent::Reset() {
}


