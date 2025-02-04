#include "StatusEffect_BurnPlayer.h"

UStatusEffect_BurnPlayer::UStatusEffect_BurnPlayer() {
    this->bUseDifficultySettings = false;
    this->DodgeDurationReduction = 2.00f;
}

void UStatusEffect_BurnPlayer::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UStatusEffect_BurnPlayer::OnDodged() {
}


