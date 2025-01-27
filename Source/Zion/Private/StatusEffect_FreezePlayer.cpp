#include "StatusEffect_FreezePlayer.h"
#include "EStatusEffectType.h"

UStatusEffect_FreezePlayer::UStatusEffect_FreezePlayer() {
    this->StatusEffectType = EStatusEffectType::Freeze;
    this->MovementSpeedRatio = 0.75f;
}


