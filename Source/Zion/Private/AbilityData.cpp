#include "AbilityData.h"

FAbilityData::FAbilityData() {
    this->AbilityClass = NULL;
    this->AbilityEffectProcessClass = NULL;
    this->OriginActorType = EAbilityOriginActorType::Source;
    this->SpawnBone = ESpineBone::None;
    this->RotationMode = ESpineBoneRotationMode::Actor;
    this->bAttachToBone = false;
    this->bSnapToGround = false;
    this->bOverrideZOffsetFromGround = false;
    this->ZOverrideOffsetFromGround = 0.00f;
    this->GroundCollisionChannel = ECC_WorldStatic;
    this->GroundMaxDistance = 0.00f;
    this->bNoGroundCancelAbility = false;
}

