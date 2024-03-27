#include "StatsComponent.h"

UStatsComponent::UStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultElementalFactor = 1.00f;
}

int32 UStatsComponent::GetStaminaCutPercentage(EAttackType Type) const {
    return 0;
}

int32 UStatsComponent::GetDefense() const {
    return 0;
}

int32 UStatsComponent::GetDamageCutPercentage(EAttackType Type) const {
    return 0;
}

int32 UStatsComponent::GetAttack() const {
    return 0;
}


