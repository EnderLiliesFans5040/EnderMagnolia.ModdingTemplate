#include "DashChargeSettings.h"

FDashChargeSettings::FDashChargeSettings() {
    this->Mode = EDashChargeMode::None;
    this->SpiritClass = NULL;
    this->OrientationMode = EDashChargeOrientationMode::None;
    this->bBlendOrientation = false;
    this->BlendOrientationSpeed = 0.00f;
    this->SpiritAnimationMode = EDashChargeAnimationMode::None;
}

