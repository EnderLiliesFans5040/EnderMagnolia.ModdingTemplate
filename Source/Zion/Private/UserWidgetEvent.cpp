#include "UserWidgetEvent.h"

UUserWidgetEvent::UUserWidgetEvent() {
}

bool UUserWidgetEvent::ShouldUsePreSkipFadeOut() const {
    return false;
}

bool UUserWidgetEvent::ShouldUsePostSkipFadeIn() const {
    return false;
}


void UUserWidgetEvent::OnRequestRemoveFromParent_Implementation() {
}


UEventPlayer* UUserWidgetEvent::GetEventPlayer() const {
    return NULL;
}

void UUserWidgetEvent::CompleteTalk() {
}

void UUserWidgetEvent::CompleteChoices(int32 SelectedChoiceIndex) {
}

bool UUserWidgetEvent::CanSkipEvent() const {
    return false;
}


