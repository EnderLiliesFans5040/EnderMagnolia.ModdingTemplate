#include "SpiritRepeatSummonParameters.h"

FSpiritRepeatSummonParameters::FSpiritRepeatSummonParameters() {
    this->AbilityUseType = ESpiritRepeatAbilityUseType::Sequence;
    this->bOneShotAbilityMode = false;
    this->InitialDelay = 0.00f;
    this->bRepeatTrigger = false;
    this->LoopDelay = 0.00f;
}

