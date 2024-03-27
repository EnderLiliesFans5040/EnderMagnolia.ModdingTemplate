#include "AbilityHitboxHoming.h"
#include "EAbilityDirectionMode.h"
#include "HomingComponent.h"

AAbilityHitboxHoming::AAbilityHitboxHoming(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_DirectionMode = GetClass()->FindPropertyByName("DirectionMode");
    (*p_DirectionMode->ContainerPtrToValuePtr<EAbilityDirectionMode>(this)) = EAbilityDirectionMode::AbilityLocation;
    this->HomingComponent = CreateDefaultSubobject<UHomingComponent>(TEXT("Homing"));
    this->MaxDistance = 1000.00f;
    this->bNeedsLineOfSight = false;
    this->bFrontCheck = false;
    this->VisibilityChannel = ECC_Visibility;
}

AActor* AAbilityHitboxHoming::GetHomingTarget_Implementation() const {
    return NULL;
}


