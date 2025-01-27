#include "StatFreezeComponent.h"

UStatFreezeComponent::UStatFreezeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegenerationBlockingStates.AddDefaulted(1);
    this->BreakRecoveryBlockingStates.AddDefaulted(1);
}


