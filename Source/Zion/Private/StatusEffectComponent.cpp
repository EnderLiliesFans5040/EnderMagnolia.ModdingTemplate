#include "StatusEffectComponent.h"
#include "Templates/SubclassOf.h"

UStatusEffectComponent::UStatusEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectBurn = NULL;
    this->StatusEffectFreeze = NULL;
    this->StatusEffectShock = NULL;
}

void UStatusEffectComponent::OnDeathProcessStart() {
}

void UStatusEffectComponent::LaunchStatusEffectFromClass(const TSubclassOf<UStatusEffect>& StatusEffectClass) {
}

void UStatusEffectComponent::LaunchStatusEffect(EStatusEffectType StatusEffectType) {
}


