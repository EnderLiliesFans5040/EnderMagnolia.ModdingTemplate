#include "OrientFromFloorComponent.h"

UOrientFromFloorComponent::UOrientFromFloorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OrientTargetType = EOrientTargetType::Actor;
    this->bUseBlend = false;
    this->BlendSpeed = 5.00f;
    this->bClampAngle = false;
    this->ClampAngle = 20.00f;
}

void UOrientFromFloorComponent::OnFacingChange() {
}


