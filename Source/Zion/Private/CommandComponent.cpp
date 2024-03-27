#include "CommandComponent.h"
#include "Templates/SubclassOf.h"

UCommandComponent::UCommandComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultCommandSet = NULL;
    this->FallbackInputAction = NULL;
}

void UCommandComponent::ResetFallingExecutionCountsOfCategories(const TArray<ECommandCategory>& CategoriesToReset) {
}

void UCommandComponent::ResetFallingExecutionCounts() {
}

void UCommandComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

float UCommandComponent::GetCooldownRatioForCommandSet(const UCommandSet* CommandSet) const {
    return 0.0f;
}

float UCommandComponent::GetCooldownForCommandSet(const UCommandSet* CommandSet) const {
    return 0.0f;
}

void UCommandComponent::ClearCommands(bool bStopCurrentCommand) {
}

void UCommandComponent::AddCommandsToVirtualBufferFromClasses(const TArray<TSubclassOf<UCommand>>& CommandClasses, const UInputAction* InvokedByInputAction, ECommandLayerType CommandLayerType, float BufferTTL) {
}

void UCommandComponent::AddCommandsFromClasses(const TArray<TSubclassOf<UCommand>>& CommandClasses, const UInputAction* InvokedByInputAction, ECommandLayerType CommandLayerType, bool bRemoveOnStartFailure, const UCommandSet* OverrideCommandSet) {
}

int32 UCommandComponent::AddCommands(const TArray<FCommandSettings>& CommandSettingsArray, const UCommandSet* OverrideCommandSet) {
    return 0;
}


