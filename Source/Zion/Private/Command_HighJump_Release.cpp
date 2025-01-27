#include "Command_HighJump_Release.h"

UCommand_HighJump_Release::UCommand_HighJump_Release() {
    this->HighJumpStopCondition = EHighJumpStopCondition::Distance;
    this->HighJumpMaxDistance = 2500.00f;
    this->HighJumpMaxDuration = 3.00f;
    this->bUseAbilityRelativeOffset = false;
    this->MinExecutionTimeForHighCeiling = 0.10f;
    this->HighJumpBlockedEndTime = 0.50f;
    this->HighJumpStoppedEndTime = 0.20f;
    this->SpiritClass = NULL;
}


