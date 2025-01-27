#include "CommandModule_AbilityInstant.h"

UCommandModule_AbilityInstant::UCommandModule_AbilityInstant() {
    this->TargetType = EAbilityInstantTarget::None;
    this->TargetFaction = EFaction::Enemy;
    this->Radius = 500.00f;
    this->ConditionType = EAbilityInstantTriggerCondition::None;
    this->DelayBeforeLaunch = 0.00f;
    this->bLoop = false;
    this->LoopMaxCount = 0;
    this->LoopTimer = 1.00f;
}


