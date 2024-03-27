#include "Passive_OnKill_Restore.h"

UPassive_OnKill_Restore::UPassive_OnKill_Restore() {
    this->RestoreType = EPassiveOnKillRestoreType::FlatAmount;
    this->FlatAmountToRestore = 25;
    this->StatPercentageToRestore = 5;
}


