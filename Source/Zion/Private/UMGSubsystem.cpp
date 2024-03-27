#include "UMGSubsystem.h"

UUMGSubsystem::UUMGSubsystem() {
}

void UUMGSubsystem::UnlockNavigation(UUserWidget* LockSource) {
}

void UUMGSubsystem::SetActiveFooter(UUserWidgetFooter* Footer) {
}

void UUMGSubsystem::SetActiveExplanationWidget(UUserWidgetExplanation* ExplanationWidget) {
}

void UUMGSubsystem::RestoreDefaultBindings(bool bGamepad) {
}

void UUMGSubsystem::ResetNavigationLocks() {
}

void UUMGSubsystem::RemapKey(EUIInputType UIInputType, FKey Key) {
}

void UUMGSubsystem::RefreshNavigationLockState() {
}

void UUMGSubsystem::LockNavigation(UUserWidget* LockSource) {
}

bool UUMGSubsystem::IsNavigationLocked() const {
    return false;
}

bool UUMGSubsystem::IsFocusingFromMouse() const {
    return false;
}

UUserWidgetFooter* UUMGSubsystem::GetActiveFooter() const {
    return NULL;
}

UUserWidgetExplanation* UUMGSubsystem::GetActiveExplanationWidget() const {
    return NULL;
}

UUMGSubsystem* UUMGSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UUMGSubsystem::ClearActiveFooter() {
}


