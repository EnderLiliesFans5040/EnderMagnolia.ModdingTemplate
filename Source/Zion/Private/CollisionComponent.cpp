#include "CollisionComponent.h"

UCollisionComponent::UCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideResponses = false;
    this->bOverrideCollisionResponseToPlayer = false;
    this->OverrideCollisionResponseToPlayer = ECR_Ignore;
    this->CollisionProfile = ECollisionProfile::NoCollision;
}

void UCollisionComponent::RefreshHurtboxVisuals() {
}

void UCollisionComponent::RefreshHitboxVisuals() {
}


