#include "SpineAnimationDefinition.h"

FSpineAnimationDefinition::FSpineAnimationDefinition() {
    this->PlayType = ESpineAnimationPlayType::Once;
    this->bOverrideMixDuration = false;
    this->MixDurationOverride = 0.00f;
    this->bOverrideStartTime = false;
    this->StartTimeOverride = 0.00f;
    this->bOverrideEndTime = false;
    this->EndTimeOverride = 0.00f;
    this->bUseRootMotion = false;
}

