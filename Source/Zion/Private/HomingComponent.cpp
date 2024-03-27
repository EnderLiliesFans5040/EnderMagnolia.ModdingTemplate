#include "HomingComponent.h"

UHomingComponent::UHomingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainToPlane = true;
    this->bSnapToPlaneAtStart = true;
    this->bSweep = true;
    this->InitialSpeed = 100.00f;
    this->Acceleration = 0.00f;
    this->bClampMaxSpeed = false;
    this->MaxSpeed = 0.00f;
    this->InitialAngularSpeed = 100.00f;
    this->AngularAcceleration = 0.00f;
    this->bClampMaxAngularSpeed = false;
    this->MaxAngularSpeed = 0.00f;
    this->AngularSpeedForStraightToTarget = 700.00f;
    this->bRotationFollowVelocity = false;
    this->bAutoStopHoming = false;
    this->AutoStopHomingDelay = 0.00f;
    this->RangeForTargetReach = 25.00f;
}

void UHomingComponent::SetTarget(const AActor* TargetActor, bool bReset) {
}

void UHomingComponent::Reset() {
}

USceneComponent* UHomingComponent::GetTarget() const {
    return NULL;
}

bool UHomingComponent::DidReachTarget() const {
    return false;
}


