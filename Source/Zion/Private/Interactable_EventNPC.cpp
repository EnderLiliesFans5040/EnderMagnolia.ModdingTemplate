#include "Interactable_EventNPC.h"
#include "Components/ChildActorComponent.h"
#include "GameplayConditionRefreshComponent.h"

AInteractable_EventNPC::AInteractable_EventNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor"));
    this->ConditionRefreshComponent = CreateDefaultSubobject<UGameplayConditionRefreshComponent>(TEXT("GameplayConditionRefresh"));
    this->ChildActorComponent->SetupAttachment(RootComponent);
}

ACharacterZionNPC* AInteractable_EventNPC::GetNPC() const {
    return NULL;
}


