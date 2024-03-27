#include "FollowSplineComponent.h"

UFollowSplineComponent::UFollowSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeToComplete = 5.00f;
    this->bIsClosedLoop = false;
    this->bIsMovementContinuous = true;
    this->bUseConstantVelocity = true;
    this->bUseMovementCurve = false;
    this->bSweep = true;
    this->bShouldTeleportWhenCalled = true;
    this->DurationWhenCalled = 1.00f;
}

bool UFollowSplineComponent::IsClosedLoop() const {
    return false;
}


