#include "StatsControllerPlayerComponent.h"

UStatsControllerPlayerComponent::UStatsControllerPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStatsControllerPlayerComponent::SetLevel(int32 NewLevel) {
}

bool UStatsControllerPlayerComponent::IsMaxLevel() const {
    return false;
}

FStatsLevelData UStatsControllerPlayerComponent::GetStatsLevelDataWithBonuses() const {
    return FStatsLevelData{};
}

int32 UStatsControllerPlayerComponent::GetNecessaryExperiencePointsForLevelUp() const {
    return 0;
}

FExtendedStatsData UStatsControllerPlayerComponent::GetExtendedStatsLevelDataWithBonuses() const {
    return FExtendedStatsData{};
}

float UStatsControllerPlayerComponent::GetExperiencePointsRatio() const {
    return 0.0f;
}

int32 UStatsControllerPlayerComponent::GetExperiencePoints() const {
    return 0;
}


