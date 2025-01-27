#include "FadeSubsystem.h"

UFadeSubsystem::UFadeSubsystem() {
}

void UFadeSubsystem::SetupFadeIn(const FFadeDescriptionData& FadeDescription, EFadeLayer FadeLayer) {
}

void UFadeSubsystem::OnFadeWidgetDestruct() {
}

void UFadeSubsystem::LaunchFadeOut(const FFadeDescriptionData& FadeDescription, const FFadeDelegate& OnFadeFinishedDelegate, EFadeLayer FadeLayer) {
}

void UFadeSubsystem::LaunchFadeIn(const FFadeDescriptionData& FadeDescription, const FFadeDelegate& OnFadeFinishedDelegate, EFadeLayer FadeLayer) {
}

bool UFadeSubsystem::IsFading(EFadeLayer FadeLayer) const {
    return false;
}

bool UFadeSubsystem::IsFadeVisible(EFadeLayer FadeLayer) const {
    return false;
}

bool UFadeSubsystem::IsAnyFadeVisible() const {
    return false;
}

EFadeState UFadeSubsystem::GetFadeState(EFadeLayer FadeLayer) const {
    return EFadeState::None;
}


