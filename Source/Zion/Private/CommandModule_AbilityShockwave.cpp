#include "CommandModule_AbilityShockwave.h"

UCommandModule_AbilityShockwave::UCommandModule_AbilityShockwave() {
    this->DelayBeforeFirstLaunch = 0.00f;
    this->DelayBetweenLaunch = 0.10f;
    this->MaxCount = 0;
    this->OffsetBetweenLaunch = 100.00f;
    this->MaxAcceptableAngle = 40.00f;
    this->GroundCheckStartDistance = 100.00f;
    this->GroundMaxDistance = 300.00f;
    this->bUseAdditionalGroundCheck = false;
    this->AdditionalGroundCheckDistanceStep = 100.00f;
}


