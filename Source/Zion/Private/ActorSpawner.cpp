#include "ActorSpawner.h"

AActorSpawner::AActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOffsetByHalfHeight = false;
}

void AActorSpawner::SetActorToSpawn(const TSoftClassPtr<AActor>& InActorClassToSpawn) {
}

void AActorSpawner::OnPreSpawnActor_Implementation(AActor* Actor) {
}

void AActorSpawner::OnPostSpawnActor_Implementation(AActor* Actor, bool bPreview) {
}


