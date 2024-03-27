#include "CameraOverrideModule_ZoomOffset.h"

UCameraOverrideModule_ZoomOffset::UCameraOverrideModule_ZoomOffset() {
    this->OverrideType = ECameraModuleOverrideType::AbsoluteValue;
    this->ZoomOffset = -900.00f;
    this->ZoomOffsetFactor = 1.00f;
}


