#include "CameraOverrideModule_FOV.h"

UCameraOverrideModule_FOV::UCameraOverrideModule_FOV() {
    this->OverrideType = ECameraModuleOverrideType::AbsoluteValue;
    this->FOV = 60.00f;
    this->FOVFactor = 1.00f;
}


