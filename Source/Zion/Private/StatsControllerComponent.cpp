#include "StatsControllerComponent.h"

UStatsControllerComponent::UStatsControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLevelTable = NULL;
    this->LevelTable = NULL;
}

FStatsLevelData UStatsControllerComponent::GetStatsLevelData() const {
    return FStatsLevelData{};
}

int32 UStatsControllerComponent::GetLevel() const {
    return 0;
}

int32 UStatsControllerComponent::GetAppliedLevel() const {
    return 0;
}


