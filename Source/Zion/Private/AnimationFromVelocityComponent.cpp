#include "AnimationFromVelocityComponent.h"

UAnimationFromVelocityComponent::UAnimationFromVelocityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSyncTrackTime = false;
    this->VelocityZForUp = 10.00f;
    this->VelocityZForDown = -10.00f;
    this->VelocityYForForward = 10.00f;
}

void UAnimationFromVelocityComponent::ResetAnimationCycle() {
}


