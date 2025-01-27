#include "DeathProcess_Transform.h"

UDeathProcess_Transform::UDeathProcess_Transform() {
    this->bWaitForGrounded = true;
    this->LevelSequence = NULL;
    this->SpawnBone = ESpineBone::ActorOrigin;
    this->bSpawnOffsetByHalfHeight = true;
    this->ActivationDelay = 0.00f;
}

void UDeathProcess_Transform::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UDeathProcess_Transform::OnDeathAnimationFinished() {
}


