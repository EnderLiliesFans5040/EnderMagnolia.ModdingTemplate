#include "AbilityHitboxBounce.h"
#include "Components/SphereComponent.h"

AAbilityHitboxBounce::AAbilityHitboxBounce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("Sphere"))) {
    this->SphereCollision = (USphereComponent*)RootComponent;
    this->bLimitBounceCount = false;
    this->MaxBounceCount = 3;
}

void AAbilityHitboxBounce::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}


