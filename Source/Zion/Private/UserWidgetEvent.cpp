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



bool UUserWidgetEvent::IsEventAlreadySeen() const {
    return false;
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

bool UUserWidgetEvent::CanAutoSkipEvent() const {
    return false;
}


