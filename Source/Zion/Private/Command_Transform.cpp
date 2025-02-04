#include "Command_Transform.h"

UCommand_Transform::UCommand_Transform() {
    this->TransformDelay = 0.00f;
    this->SpawnBone = ESpineBone::ActorOrigin;
    this->bSpawnOffsetByHalfHeight = true;
}


