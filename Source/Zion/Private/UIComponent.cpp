#include "UIComponent.h"

UUIComponent::UUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideGaugeOriginComponent = false;
    this->WorldSpaceGaugeClass = NULL;
    this->WorldSpaceTextDamageClass = NULL;
    this->WorldSpaceTextCriticalDamageClass = NULL;
    this->WorldSpaceTextAdvantageDamageClass = NULL;
    this->WorldSpaceTextDisadvantageDamageClass = NULL;
    this->WorldSpaceTextHealClass = NULL;
}

void UUIComponent::OnReceivedHeal(AActor* Source, int32 HealValue) {
}

void UUIComponent::OnReceivedDamageData(AActor* Source, const FDamageData& DamageData) {
}

void UUIComponent::OnReceivedDamage(AActor* Source, int32 DamageValue) {
}

void UUIComponent::OnPawnDeath() {
}


