#include "Trigger_RespawnToRuntimeCheckpoint.h"
#include "AbilityComponent.h"
#include "FactionComponent.h"

ATrigger_RespawnToRuntimeCheckpoint::ATrigger_RespawnToRuntimeCheckpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RespawnDelay = 0.25f;
    this->AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));
    this->FactionComponent = CreateDefaultSubobject<UFactionComponent>(TEXT("Faction"));
}

void ATrigger_RespawnToRuntimeCheckpoint::OnRespawnTimerFinished() {
}


