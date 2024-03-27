#include "StatusEffect_Freeze.h"
#include "EStatusEffectType.h"

UStatusEffect_Freeze::UStatusEffect_Freeze() {
    this->bCanEditStatusEffectType = false;
    this->StatusEffectType = EStatusEffectType::Freeze;
}


