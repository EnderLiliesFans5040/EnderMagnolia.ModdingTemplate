#include "Passive_OnKill_ReduceActiveCooldowns.h"

UPassive_OnKill_ReduceActiveCooldowns::UPassive_OnKill_ReduceActiveCooldowns() {
    this->AffectedFactions.AddDefaulted(1);
    this->ActivationPercentage = 5.00f;
    this->ReductionPercentage = 25.00f;
}


