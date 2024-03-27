#include "EventAction.h"

UEventAction::UEventAction() {
    this->bWaitForCompletion = true;
    this->bPostSkipAction = false;
    this->EventContext = NULL;
}

void UEventAction::OnUpdateAction_Implementation(float DeltaTime) {
}

void UEventAction::OnStartAction_Implementation() {
}

void UEventAction::OnSkipAction_Implementation() {
}

void UEventAction::OnFinishAction_Implementation() {
}

void UEventAction::OnAbortAction_Implementation() {
}

UEventContext* UEventAction::GetContext() const {
    return NULL;
}

void UEventAction::FinishAction() {
}


