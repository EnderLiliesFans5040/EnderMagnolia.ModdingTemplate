#include "SpineBoneComponent.h"

USpineBoneComponent::USpineBoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultBone = ESpineBone::Hip;
}


