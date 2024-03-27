#include "AbilityEffectInstant_CameraShake.h"

UAbilityEffectInstant_CameraShake::UAbilityEffectInstant_CameraShake() {
    this->CameraShake = NULL;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 100000.00f;
    this->Falloff = 0.00f;
    this->bOrientShakeTowardsEpicenter = false;
}


