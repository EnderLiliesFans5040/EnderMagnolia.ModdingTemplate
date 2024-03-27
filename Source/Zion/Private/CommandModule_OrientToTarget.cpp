#include "CommandModule_OrientToTarget.h"

UCommandModule_OrientToTarget::UCommandModule_OrientToTarget() {
    this->StartTime = 0.00f;
    this->bUseEndTime = false;
    this->EndTime = 0.00f;
    this->BlendMode = ERotationBlendMode::None;
    this->BlendInjectionSpeed = 5.00f;
    this->RotationSpeed = 25.00f;
}


