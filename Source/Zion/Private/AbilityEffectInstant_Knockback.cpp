#include "AbilityEffectInstant_Knockback.h"

UAbilityEffectInstant_Knockback::UAbilityEffectInstant_Knockback() {
    this->Condition = EKnockbackTriggerCondition::StaminaBroken;
    this->DirectionMode = EKnockbackDirectionMode::FrontalAbility;
}


