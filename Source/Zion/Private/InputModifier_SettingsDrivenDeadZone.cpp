#include "InputModifier_SettingsDrivenDeadZone.h"

UInputModifier_SettingsDrivenDeadZone::UInputModifier_SettingsDrivenDeadZone() {
    this->Type = EDeadZoneType::Radial;
    this->LowerThreshold = 0.00f;
    this->UpperThreshold = 1.00f;
    this->DeadZoneStick = EInputStick::LeftStick;
}


