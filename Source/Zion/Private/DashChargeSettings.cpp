#include "DashChargeSettings.h"

FDashChargeSettings::FDashChargeSettings() {
    this->SpiritClass = NULL;
    this->OrientationMode = EDashChargeOrientationMode::None;
    this->bBlendOrientation = false;
    this->BlendOrientationSpeed = 0.00f;
}

