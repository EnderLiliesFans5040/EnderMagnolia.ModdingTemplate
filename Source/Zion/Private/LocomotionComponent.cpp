#include "LocomotionComponent.h"

ULocomotionComponent::ULocomotionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DashInputAction = NULL;
    this->bAllowFacing = true;
    this->bUpdateFacing = true;
    this->bUseVelocityForFacing = false;
    this->ImmersionDepthForLateralOnly = 0.50f;
}

void ULocomotionComponent::ToggleFacing() {
}

void ULocomotionComponent::SetUpVector(const FVector& NewUpVector) {
}

void ULocomotionComponent::SetUpdateFacing(bool bNewUpdateFacing) {
}

void ULocomotionComponent::SetFacingFromVector(const FVector& Vector) {
}

void ULocomotionComponent::SetFacing(EFacingType FacingType) {
}

FQuat ULocomotionComponent::GetWorldUpToUpRotation() const {
    return FQuat{};
}

FVector ULocomotionComponent::GetUpVector() const {
    return FVector{};
}

bool ULocomotionComponent::GetUpdateFacing() const {
    return false;
}

EFacingType ULocomotionComponent::GetFacing() const {
    return EFacingType::None;
}


