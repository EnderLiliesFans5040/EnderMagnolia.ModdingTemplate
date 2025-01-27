#include "EmulatedFogAxisSettings.h"

FEmulatedFogAxisSettings::FEmulatedFogAxisSettings() {
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->Opacity = 0.00f;
    this->BlendType = EEmulatedFogBlendType::TwoColors;
    this->GradientRow = 0;
}

