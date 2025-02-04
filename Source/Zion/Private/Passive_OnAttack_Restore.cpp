#include "Passive_OnAttack_Restore.h"

UPassive_OnAttack_Restore::UPassive_OnAttack_Restore() {
    this->RestoreType = EPassiveOnAttackRestoreType::FlatAmount;
    this->FlatAmountToRestore = 5;
    this->DamagePercentageToRestore = 1.00f;
    this->StatPercentageToRestore = 1.00f;
}


