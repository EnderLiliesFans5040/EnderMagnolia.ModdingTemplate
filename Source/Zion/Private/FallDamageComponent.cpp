#include "FallDamageComponent.h"

UFallDamageComponent::UFallDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NecessaryStatesForFallDamage.AddDefaulted(1);
}

void UFallDamageComponent::OnLandedCallback(const FHitResult& Hit) {
}


