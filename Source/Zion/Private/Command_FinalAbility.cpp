#include "Command_FinalAbility.h"

UCommand_FinalAbility::UCommand_FinalAbility() {
    this->ValidFinishTypes.AddDefaulted(1);
    this->bKillCharacter = true;
    this->KillDelay = 0.00f;
}


