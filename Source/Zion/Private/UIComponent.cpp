#include "UIComponent.h"

UUIComponent::UUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WorldSpaceGaugeClass = NULL;
    this->WorldSpaceTextDamageClass = NULL;
    this->WorldSpaceTextHealClass = NULL;
}

void UUIComponent::OnReceivedHeal(AActor* Source, int32 HealValue) {
}

void UUIComponent::OnReceivedDamage(AActor* Source, int32 DamageValue) {
}

void UUIComponent::OnPawnDeath() {
}


