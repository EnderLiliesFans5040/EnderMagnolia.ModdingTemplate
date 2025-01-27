#include "DeathProcess_Player.h"

UDeathProcess_Player::UDeathProcess_Player() {
    this->bCanUseBackAnimations = false;
    this->AdditionalDeathStates.AddDefaulted(1);
    this->bUseTimeDilation = false;
    this->DelayBeforeFadeOut = 2.00f;
    this->LocationTargetBone = ESpineBone::Hip;
}

void UDeathProcess_Player::OnTimerFinished() {
}

void UDeathProcess_Player::OnFadeFinished() {
}


