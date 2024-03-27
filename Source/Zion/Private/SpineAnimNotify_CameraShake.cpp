#include "SpineAnimNotify_CameraShake.h"

USpineAnimNotify_CameraShake::USpineAnimNotify_CameraShake() {
    this->CameraShake = NULL;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 100000.00f;
    this->Falloff = 0.00f;
    this->bOrientShakeTowardsEpicenter = false;
}


