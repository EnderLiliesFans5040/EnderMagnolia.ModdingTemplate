#include "Trigger_FieldMessageNPC.h"
#include "Components/ChildActorComponent.h"
#include "GameplayConditionRefreshComponent.h"

ATrigger_FieldMessageNPC::ATrigger_FieldMessageNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor"));
    this->ConditionRefreshComponent = CreateDefaultSubobject<UGameplayConditionRefreshComponent>(TEXT("GameplayConditionRefresh"));
    this->OverrideFieldMessageAsset = NULL;
    this->ChildActorComponent->SetupAttachment(RootComponent);
}

void ATrigger_FieldMessageNPC::OnNPCDestroyed(AActor* DestroyedActor) {
}



