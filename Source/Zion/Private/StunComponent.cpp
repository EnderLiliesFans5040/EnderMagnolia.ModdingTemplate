#include "StunComponent.h"

UStunComponent::UStunComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StunStates.AddDefaulted(2);
    this->bUseKnockback = false;
}

void UStunComponent::OnBreakRecovery() {
}


