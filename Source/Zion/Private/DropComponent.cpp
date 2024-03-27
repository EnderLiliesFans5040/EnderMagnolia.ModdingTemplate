#include "DropComponent.h"

UDropComponent::UDropComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExperienceDrop = 0;
}

void UDropComponent::OnDeath() {
}

void UDropComponent::LaunchDropProcess() {
}


