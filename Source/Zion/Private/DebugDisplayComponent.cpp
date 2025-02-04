#include "DebugDisplayComponent.h"

UDebugDisplayComponent::UDebugDisplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetHolder = NULL;
    this->Widget = NULL;
}

void UDebugDisplayComponent::OnTickSpineTextureInfo() {
}

void UDebugDisplayComponent::OnTickLevel() {
}

void UDebugDisplayComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UDebugDisplayComponent::OnHPValueChanged() {
}

void UDebugDisplayComponent::OnCommandStart(const UCommand* Command) {
}

void UDebugDisplayComponent::OnCommandLevelChanged() {
}

void UDebugDisplayComponent::OnCommandFinished(const UCommand* Command, ECommandFinishType FinishType) {
}

void UDebugDisplayComponent::OnAnimationStart(UTrackEntry* Entry) {
}

void UDebugDisplayComponent::OnAnimationEnd(UTrackEntry* Entry) {
}


