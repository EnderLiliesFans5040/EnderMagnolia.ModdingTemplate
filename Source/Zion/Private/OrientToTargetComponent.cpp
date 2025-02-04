#include "OrientToTargetComponent.h"

UOrientToTargetComponent::UOrientToTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendMode = EOrientToTargetBlendMode::None;
    this->BlendInjectionSpeed = 4.00f;
    this->RotationSpeed = 25.00f;
    this->bAutoDeactivate = false;
    this->AutoDeactivateTime = 0.00f;
}


