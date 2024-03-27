#include "RootMotionFinishVelocitySettingsBP.h"

FRootMotionFinishVelocitySettingsBP::FRootMotionFinishVelocitySettingsBP() {
    this->Mode = ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity;
    this->ClampVelocity = 0.00f;
}

