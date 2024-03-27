#include "SpineBoneFollowerComponent.h"

USpineBoneFollowerComponent::USpineBoneFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->UseComponentTransform = true;
    this->UsePosition = true;
    this->UseRotation = true;
    this->UseScale = true;
}


