#include "DeathProcess_Animation.h"

UDeathProcess_Animation::UDeathProcess_Animation() {
    this->bCanUseBackAnimations = false;
    this->bWaitForAnimations = true;
}

void UDeathProcess_Animation::OnDeathAnimationFinished() {
}


