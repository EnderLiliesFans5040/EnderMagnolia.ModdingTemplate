#include "Interactable_Event.h"
#include "ClearComponent.h"

AInteractable_Event::AInteractable_Event(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClearComponent = CreateDefaultSubobject<UClearComponent>(TEXT("Clear"));
    this->bAutoMarkAsClear = true;
    this->bMarkAsClearOnSpecificEvent = false;
    this->bDisableWhenCleared = true;
    this->PostEventStates.AddDefaulted(1);
    this->PostEventStatesDuration = 0.25f;
    this->LoadedEventAsset = NULL;
    this->LoadedFailureEventAsset = NULL;
    this->EventPlayer = NULL;
}

void AInteractable_Event::SetupAdditionalBlackboardValues_Implementation(FEventBlackboardInit& EventBlackboardInit) {
}

void AInteractable_Event::SetupAdditionalBindings_Implementation(TMap<FName, AActor*>& AdditionalBindings) {
}


void AInteractable_Event::OnEventFinished(UEventPlayer* InEventPlayer, bool bCompletedEvent, EEventPlayerResult EventResult) {
}

void AInteractable_Event::OnClearStatusChecked(EClearStatus ClearStatus) {
}


