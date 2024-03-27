#include "OrientFromInputComponent.h"

UOrientFromInputComponent::UOrientFromInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBlendRotation = false;
    this->RotationBlendSpeed = 10.00f;
}


