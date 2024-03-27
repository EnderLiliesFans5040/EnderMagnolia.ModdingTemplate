#include "ZionProjectileMovementComponent.h"

UZionProjectileMovementComponent::UZionProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainToPlane = true;
    this->bSnapToPlaneAtStart = true;
    this->bHasInitialLocalSpaceAcceleration = false;
    this->bHasInitialVelocitySpaceAcceleration = false;
    this->bHasInitialMaxSpeed = false;
    this->InitialMaxSpeed = 0.00f;
    this->bInitialRotationFollowsVelocity = false;
    this->InitialGravityFactor = 0.00f;
}


