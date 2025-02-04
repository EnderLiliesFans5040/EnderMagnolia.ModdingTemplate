#include "GameStatsComponent.h"

UGameStatsComponent::UGameStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UGameStatsComponent::UnsetPause() {
    return 0;
}

int32 UGameStatsComponent::SetPause() {
    return 0;
}

FString UGameStatsComponent::GetPlayTimeAsString() const {
    return TEXT("");
}


