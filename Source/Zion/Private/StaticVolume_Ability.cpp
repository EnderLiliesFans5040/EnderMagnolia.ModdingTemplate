#include "StaticVolume_Ability.h"
#include "AbilityComponent.h"

AStaticVolume_Ability::AStaticVolume_Ability(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));
    this->AbilityTriggerDelay = 1.00f;
}


