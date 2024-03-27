#include "SummonRestPointSpiritComponent.h"

USummonRestPointSpiritComponent::USummonRestPointSpiritComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinOffsetToPlayer = 150.00f;
    this->MinOffsetBetweenSpirits = 100.00f;
}

void USummonRestPointSpiritComponent::StartSummonRestPointSpirits() {
}

void USummonRestPointSpiritComponent::RefreshRestPointSpirits() {
}

void USummonRestPointSpiritComponent::OnUnEquipSkill(ESkillSlot SkillSlot) {
}

void USummonRestPointSpiritComponent::OnEquipSkill(ESkillSlot SkillSlot) {
}

void USummonRestPointSpiritComponent::FinishSummonRestPointSpirits() {
}


