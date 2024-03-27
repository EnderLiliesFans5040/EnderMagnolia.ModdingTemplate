#include "GunmanIKBoneTargetComponent.h"

UGunmanIKBoneTargetComponent::UGunmanIKBoneTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IKBoneDriver = EIKBoneDriver::None;
    this->BlendMode = EIKBoneBlendMode::None;
    this->BlendInjectionSpeed = 5.00f;
    this->RotationSpeed = 25.00f;
    this->MinIKTargetDistance = 100.00f;
    this->ClampReferenceVectorMode = EIKBoneReferenceVectorMode::Forward;
    this->ClampAngleMin = -90.00f;
    this->ClampAngleMax = 90.00f;
    this->bOverrideAbilityGlobalOffset = true;
}

void UGunmanIKBoneTargetComponent::OnSpiritActivationChanged(bool bNewActive) {
}

FTransform UGunmanIKBoneTargetComponent::GetAbilityGlobalOffset() const {
    return FTransform{};
}


