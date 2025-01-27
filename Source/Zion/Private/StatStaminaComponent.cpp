#include "StatStaminaComponent.h"

UStatStaminaComponent::UStatStaminaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->BreakRecoveryBlockingStates.AddDefaulted(1);
    this->CompleteBlockingStates.AddDefaulted(1);
}


