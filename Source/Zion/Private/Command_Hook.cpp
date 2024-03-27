#include "Command_Hook.h"

UCommand_Hook::UCommand_Hook() {
    this->InvalidInputDirections.AddDefaulted(3);
    this->MinLaunchSize = 2000.00f;
    this->MaxLaunchSize = 2250.00f;
    this->DelayBeforeLaunch = 0.15f;
    this->HookFXLaunchTime = 0.00f;
    this->HookBlendTime = 0.10f;
    this->HookFXInstance = NULL;
}

void UCommand_Hook::OnMoveBlocked(const FHitResult& HitResult) {
}


