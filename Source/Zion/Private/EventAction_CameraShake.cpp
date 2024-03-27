#include "EventAction_CameraShake.h"

UEventAction_CameraShake::UEventAction_CameraShake() {
    this->CameraShake = NULL;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 100000.00f;
    this->Falloff = 0.00f;
    this->bOrientShakeTowardsEpicenter = false;
}


