#include "AbilityData.h"

FAbilityData::FAbilityData() {
    this->AbilityClass = NULL;
    this->AbilityEffectProcessClass = NULL;
    this->SpawnBone = ESpineBone::None;
    this->RotationMode = ESpineBoneRotationMode::Actor;
    this->bAttachToBone = false;
}

