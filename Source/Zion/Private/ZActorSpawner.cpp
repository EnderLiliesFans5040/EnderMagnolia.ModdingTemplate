#include "ZActorSpawner.h"
#include "GameplayConditionRefreshComponent.h"

AActorSpawner::AActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConditionRefreshComponent = CreateDefaultSubobject<UGameplayConditionRefreshComponent>(TEXT("GameplayConditionRefresh"));
    this->bOffsetByHalfHeight = false;
}

void AActorSpawner::SetActorToSpawn(const TSoftClassPtr<AActor>& InActorClassToSpawn) {
}

void AActorSpawner::OnPreSpawnActor_Implementation(AActor* Actor) {
}

void AActorSpawner::OnPostSpawnActor_Implementation(AActor* Actor, bool bPreview) {
}


