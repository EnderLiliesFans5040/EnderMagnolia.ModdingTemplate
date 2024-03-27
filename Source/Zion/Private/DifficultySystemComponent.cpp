#include "DifficultySystemComponent.h"

UDifficultySystemComponent::UDifficultySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDifficultySystemComponent::SetDifficultySettings(const FDifficultySettings& NewDifficultySettings) {
}

void UDifficultySystemComponent::SetDifficultyPresetAndSettings(EDifficultyPreset NewDifficultyPreset, const FDifficultySettings& NewDifficultySettings) {
}

void UDifficultySystemComponent::SetDifficultyPreset(EDifficultyPreset NewDifficultyPreset) {
}

FDifficultySettings UDifficultySystemComponent::GetDifficultySettingsForPreset(EDifficultyPreset InDifficultyPreset) const {
    return FDifficultySettings{};
}

FDifficultySettings UDifficultySystemComponent::GetDifficultySettings() const {
    return FDifficultySettings{};
}

EDifficultyPreset UDifficultySystemComponent::GetDifficultyPreset() const {
    return EDifficultyPreset::None;
}

UDifficultySystemComponent* UDifficultySystemComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}


