#include "DeathComponent.h"

UDeathComponent::UDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeathProcessClass = NULL;
    this->bDestroyActor = true;
    this->DeathProcess = NULL;
}

void UDeathComponent::OnHPReachedZero() {
}

bool UDeathComponent::IsDead() const {
    return false;
}


