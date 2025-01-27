#include "AbilityEffectInstant_HealHP.h"

UAbilityEffectInstant_HealHP::UAbilityEffectInstant_HealHP() {
    this->HealEffectType = EHealEffectType::Absolute;
    this->AbsoluteHeal = 0;
    this->TargetPercentageHeal = 0.00f;
}


