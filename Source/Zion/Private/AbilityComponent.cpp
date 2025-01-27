#include "AbilityComponent.h"

UAbilityComponent::UAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AAbilityInstant* UAbilityComponent::LaunchAbilityInstant(const FAbilityData& AbilityData, const TArray<AActor*>& Targets, const FAbilityAdditionalData& AdditionalData) {
    return NULL;
}

AAbility* UAbilityComponent::LaunchAbility(const FAbilityData& AbilityData, const FAbilityAdditionalData& AdditionalData, const FTransform& GlobalOffset) {
    return NULL;
}


