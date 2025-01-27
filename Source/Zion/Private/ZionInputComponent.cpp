#include "ZionInputComponent.h"

UZionInputComponent::UZionInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputAction_Movement = NULL;
}

void UZionInputComponent::RemoveInputMappingContext(const UInputMappingContext* InputMappingContext) {
}

void UZionInputComponent::AddInputMappingContext(const UInputMappingContext* InputMappingContext, EInputMappingPriority Priority) {
}


