#include "StatsControllerAIComponent.h"

UStatsControllerAIComponent::UStatsControllerAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhaseLevel = 1;
}

int32 UStatsControllerAIComponent::IncrementPhaseLevel() {
    return 0;
}

int32 UStatsControllerAIComponent::GetPhaseLevel() const {
    return 0;
}


