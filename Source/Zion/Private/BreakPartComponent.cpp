#include "BreakPartComponent.h"

UBreakPartComponent::UBreakPartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreakMaterial = NULL;
    this->BreakDuration = 1.00f;
}


