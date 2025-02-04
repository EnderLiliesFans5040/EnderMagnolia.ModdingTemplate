#include "FootIKComponent.h"

UFootIKComponent::UFootIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseIKLocation = true;
    this->bUseIKRotation = true;
    this->bBlendIKRotation = true;
    this->IKRotationBlendSpeed = 20.00f;
    this->bUseHeightOffsetBlend = false;
    this->HeightOffsetBlendSpeed = 20.00f;
    this->bAllowUpdateLimitation = true;
}

void UFootIKComponent::OnBeforeUpdateWorldTransform(USpineSkeletonComponent* Skeleton) {
}

void UFootIKComponent::OnAnimationStart(UTrackEntry* TrackEntry) {
}


