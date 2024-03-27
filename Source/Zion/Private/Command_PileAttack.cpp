#include "Command_PileAttack.h"

UCommand_PileAttack::UCommand_PileAttack() {
    this->ChargePhaseTime = 0.23f;
    this->ChargePhaseStates.AddDefaulted(1);
    this->DiveLaunchVelocity = -1750.00f;
    this->CurrentDiveLoopFXInstance = NULL;
    this->CurrentDiveAbility = NULL;
}


