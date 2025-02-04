#include "AbilityHitboxMoving.h"
#include "EAbilityDirectionMode.h"
#include "ZionProjectileMovementComponent.h"

AAbilityHitboxMoving::AAbilityHitboxMoving(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_DirectionMode = GetClass()->FindPropertyByName("DirectionMode");
    (*p_DirectionMode->ContainerPtrToValuePtr<EAbilityDirectionMode>(this)) = EAbilityDirectionMode::AbilityForward;
    this->ZionProjectileMovementComponent = CreateDefaultSubobject<UZionProjectileMovementComponent>(TEXT("Zion Projectile"));
}


