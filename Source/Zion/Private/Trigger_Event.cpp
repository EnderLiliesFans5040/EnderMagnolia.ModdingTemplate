#include "Trigger_Event.h"
#include "GameplayConditionRefreshComponent.h"

ATrigger_Event::ATrigger_Event(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConditionRefreshComponent = CreateDefaultSubobject<UGameplayConditionRefreshComponent>(TEXT("GameplayConditionRefresh"));
    this->LoadedEventAsset = NULL;
    this->EventPlayer = NULL;
}

void ATrigger_Event::OnEventFinished(UEventPlayer* InEventPlayer, bool bCompletedEvent, EEventPlayerResult EventResult) {
}



