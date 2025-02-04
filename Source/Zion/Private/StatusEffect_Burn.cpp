#include "StatusEffect_Burn.h"
#include "EStatusEffectType.h"

UStatusEffect_Burn::UStatusEffect_Burn() {
    this->bCanEditStatusEffectType = false;
    this->StatusEffectType = EStatusEffectType::Burn;
    this->bUseDifficultySettings = true;
    this->AbilityTick = 1.00f;
}


