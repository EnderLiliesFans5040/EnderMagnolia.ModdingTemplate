#include "AbilityHitboxTarget_Search_Homing.h"
#include "EAbilityDirectionMode.h"
#include "HomingComponent.h"

AAbilityHitboxTarget_Search_Homing::AAbilityHitboxTarget_Search_Homing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_DirectionMode = GetClass()->FindPropertyByName("DirectionMode");
    (*p_DirectionMode->ContainerPtrToValuePtr<EAbilityDirectionMode>(this)) = EAbilityDirectionMode::AbilityForward;
    this->HomingComponent = CreateDefaultSubobject<UHomingComponent>(TEXT("Homing"));
}


