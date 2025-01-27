#include "StatusEffect.h"

UStatusEffect::UStatusEffect() {
    this->bCanEditStatusEffectType = true;
    this->StatusEffectType = EStatusEffectType::None;
    this->bUseDifficultySettings = false;
    this->Duration = 5.00f;
    this->OnLaunchSound = NULL;
    this->LoopSound = NULL;
}

EStatusEffectType UStatusEffect::GetStatusEffectType() const {
    return EStatusEffectType::None;
}

float UStatusEffect::GetDuration() const {
    return 0.0f;
}


