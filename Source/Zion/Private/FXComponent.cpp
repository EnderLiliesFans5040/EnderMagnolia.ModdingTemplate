#include "FXComponent.h"

UFXComponent::UFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTriggerStepOnLanding = false;
    this->LandingStepHeaviness = EStepHeavinessCategory::Heavy;
}

void UFXComponent::OnStatusEffectStopped(UStatusEffect* StatusEffect) {
}

void UFXComponent::OnStatusEffectLaunched(UStatusEffect* StatusEffect) {
}

void UFXComponent::OnSPValueChanged() {
}

void UFXComponent::OnParried(AAbility* Ability, AActor* Source) {
}

void UFXComponent::OnLanded(const FHitResult& Hit) {
}

void UFXComponent::OnGuarded(AAbility* Ability, AActor* Source) {
}

void UFXComponent::OnFinishCommand(const UCommand* Command, ECommandFinishType FinishType) {
}

void UFXComponent::OnDeathProcessStart() {
}

void UFXComponent::DeactivateAuraFXs(const FName& AuraFXTag) {
}

void UFXComponent::ActivateAuraFXs(const FName& AuraFXTag) {
}


