#include "Passive_OnAttack_Restore.h"

UPassive_OnAttack_Restore::UPassive_OnAttack_Restore() {
    this->RestoreType = EPassiveOnAttackRestoreType::FlatAmount;
    this->FlatAmountToRestore = 5;
    this->DamagePercentageToRestore = 1;
    this->StatPercentageToRestore = 1;
}


