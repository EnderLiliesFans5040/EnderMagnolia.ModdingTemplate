#include "DifficultySystemComponent.h"

UDifficultySystemComponent::UDifficultySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinCurrencyFactor = 0.50f;
    this->MaxCurrencyFactor = 2.00f;
}

void UDifficultySystemComponent::SetDifficultyPresetAndSettings(EDifficultyPreset NewDifficultyPreset, const FDifficultySettings& NewDifficultySettings) {
}

bool UDifficultySystemComponent::HasAnyChallengeEnabled() const {
    return false;
}

FDifficultySettings UDifficultySystemComponent::GetDifficultySettingsForPreset(EDifficultyPreset InDifficultyPreset) const {
    return FDifficultySettings{};
}

FDifficultySettings UDifficultySystemComponent::GetDifficultySettings() const {
    return FDifficultySettings{};
}

EDifficultyPreset UDifficultySystemComponent::GetDifficultyPresetFromSettings(const FDifficultySettings& InDifficultySettings) {
    return EDifficultyPreset::None;
}

EDifficultyPreset UDifficultySystemComponent::GetDifficultyPreset() const {
    return EDifficultyPreset::None;
}

float UDifficultySystemComponent::GetCurrencyFactorRatio() const {
    return 0.0f;
}

float UDifficultySystemComponent::GetCurrencyFactor() const {
    return 0.0f;
}

UDifficultySystemComponent* UDifficultySystemComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}


