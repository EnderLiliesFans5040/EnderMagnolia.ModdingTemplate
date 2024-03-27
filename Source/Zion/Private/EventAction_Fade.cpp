#include "EventAction_Fade.h"

UEventAction_Fade::UEventAction_Fade() {
    this->FadeType = EFadeType::FadeIn;
    this->FadeLayer = EFadeLayer::Event;
}

void UEventAction_Fade::OnFadeCompleted() {
}


