#include "ConditionalDestroyComponent.h"

UConditionalDestroyComponent::UConditionalDestroyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mode = EConditionDestroyMode::DestroyOnSuccess;
}


