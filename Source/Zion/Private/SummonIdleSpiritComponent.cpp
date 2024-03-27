#include "SummonIdleSpiritComponent.h"

USummonIdleSpiritComponent::USummonIdleSpiritComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IdleDurationBeforeSummon = 4.00f;
    this->MinDurationBeforeSummon = 0.00f;
    this->MaxDurationBeforeSummon = 1.50f;
    this->MinDurationBetweenSummon = 1.00f;
    this->MaxDurationBetweenSummon = 1.50f;
    this->MinDurationBeforeAutoDismiss = 10.00f;
    this->MaxDurationBeforeAutoDismiss = 20.00f;
    this->MinOffsetToPlayer = 100.00f;
    this->OffsetToPlayerRange = 50.00f;
    this->MinOffsetBetweenSpirits = 100.00f;
    this->OffsetBetweenSpiritsRange = 50.00f;
}

void USummonIdleSpiritComponent::OnUnEquipSkill(ESkillSlot SkillSlot) {
}

void USummonIdleSpiritComponent::OnPostStartCommand(const UCommand* Command) {
}

void USummonIdleSpiritComponent::OnJustTriggeredInputAction(const UInputAction* InputAction) {
}

void USummonIdleSpiritComponent::OnGameMapChanged() {
}

void USummonIdleSpiritComponent::OnEquipSkill(ESkillSlot SkillSlot) {
}


