#include "BreakPartComponent.h"

UBreakPartComponent::UBreakPartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->BreakMaterial = NULL;
    this->BreakDuration = 1.00f;
}


