#include "StoryLevelComponent.h"

UStoryLevelComponent::UStoryLevelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StoryLevel = 0;
}

FStoryLevelData UStoryLevelComponent::GetStoryLevelData() const {
    return FStoryLevelData{};
}

int32 UStoryLevelComponent::GetStoryLevel() const {
    return 0;
}


