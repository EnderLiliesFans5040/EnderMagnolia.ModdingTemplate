#include "GameplayCameraSettings.h"

FGameplayCameraSettings::FGameplayCameraSettings() {
    this->SettingsEaseOutExp = 0.00f;
    this->CameraSpeed = 0.00f;
    this->ZoomOffsetOverrideType = ECameraModuleOverrideType::AbsoluteValue;
    this->ZoomOffset = 0.00f;
    this->ZoomOffsetFactor = 0.00f;
    this->FOVOverrideType = ECameraModuleOverrideType::AbsoluteValue;
    this->FOV = 0.00f;
    this->FOVFactor = 0.00f;
    this->LocalOffsetBlendType = ECameraLocalOffsetBlendType::None;
    this->LocalOffsetSpeed = 0.00f;
    this->LocalOffsetEaseExp = 0.00f;
    this->InputLocationOffsetSpeed = 0.00f;
}

