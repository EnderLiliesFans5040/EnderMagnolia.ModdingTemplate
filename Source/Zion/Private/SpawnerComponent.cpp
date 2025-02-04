#include "SpawnerComponent.h"

USpawnerComponent::USpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bKillAllSpawnedEntitiesOnDeath = true;
}

void USpawnerComponent::Spawn(const FSpawnData& SpawnData) {
}

void USpawnerComponent::OnEntityDestroyed(AActor* EntityActor) {
}

void USpawnerComponent::OnDeathProcessStart() {
}

void USpawnerComponent::KillAllSpawnedEntities() {
}

int32 USpawnerComponent::GetSpawnedEntityCount() const {
    return 0;
}


