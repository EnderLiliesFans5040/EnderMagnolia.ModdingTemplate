#include "DeathProcess_SpineAnimation.h"

UDeathProcess_SpineAnimation::UDeathProcess_SpineAnimation() {
    this->TrackIndex = 0;
    this->bCanUseBackAnimations = false;
    this->bLoop = false;
}

void UDeathProcess_SpineAnimation::OnAnimationFinished(UTrackEntry* TrackEntry) {
}


