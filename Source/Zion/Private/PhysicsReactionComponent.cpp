#include "PhysicsReactionComponent.h"

UPhysicsReactionComponent::UPhysicsReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->PhysicsComponent = NULL;
}

void UPhysicsReactionComponent::SetEnabled(bool bNewEnabled) {
}

void UPhysicsReactionComponent::OnGotAbilityApplied(AAbility* Ability, AActor* Source, const FHitData& HitData) {
}

bool UPhysicsReactionComponent::IsEnabled() const {
    return false;
}


