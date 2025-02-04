#include "Trigger_RegisterRuntimeCheckpoint.h"
#include "Components/ChildActorComponent.h"

ATrigger_RegisterRuntimeCheckpoint::ATrigger_RegisterRuntimeCheckpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStartChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("PlayerStartChildActor"));
    this->PlayerStartChildActor->SetupAttachment(RootComponent);
}



