#include "FollowTargetComponent.h"

UFollowTargetComponent::UFollowTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateOwnerLocation = true;
    this->BlendSpeedMode = EFollowTargetBlendSpeedMode::Value;
    this->BlendSpeed = 0.00f;
    this->OscillationScale = 0.00f;
    this->bSweep = false;
    this->bSpringArmBehavior = false;
    this->ProbeChannel = ECC_WorldStatic;
    this->ProbeRadius = 25.00f;
    this->Owner = NULL;
}

void UFollowTargetComponent::TeleportToTarget() {
}

void UFollowTargetComponent::SetFollowTarget(USceneComponent* NewFollowTarget, bool bSnapToTarget) {
}

void UFollowTargetComponent::OnGameMapChanged() {
}

FVector UFollowTargetComponent::GetTargetLocation() const {
    return FVector{};
}

FVector UFollowTargetComponent::GetFollowTargetLocation() const {
    return FVector{};
}

FVector UFollowTargetComponent::GetFollowTargetForward() const {
    return FVector{};
}

FVector UFollowTargetComponent::GetFollowTargetDeltaLocation() const {
    return FVector{};
}

USceneComponent* UFollowTargetComponent::GetFollowTarget() const {
    return NULL;
}

void UFollowTargetComponent::ClearFollowTarget() {
}


