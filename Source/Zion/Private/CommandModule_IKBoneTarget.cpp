#include "CommandModule_IKBoneTarget.h"

UCommandModule_IKBoneTarget::UCommandModule_IKBoneTarget() {
    this->IKBoneDriver = EIKBoneDriver::None;
    this->bResetIKBoneOnFinish = true;
    this->StartTime = 0.00f;
    this->bUseEndTime = false;
    this->EndTime = 0.00f;
    this->BlendMode = EIKBoneBlendMode::None;
    this->BlendInjectionSpeed = 5.00f;
    this->RotationSpeed = 25.00f;
    this->MinIKTargetDistance = 100.00f;
    this->ClampReferenceVectorMode = EIKBoneReferenceVectorMode::Forward;
    this->ClampAngleMin = -90.00f;
    this->ClampAngleMax = 90.00f;
    this->bOverrideAbilityGlobalOffset = true;
}


