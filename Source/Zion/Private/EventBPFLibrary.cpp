#include "EventBPFLibrary.h"

UEventBPFLibrary::UEventBPFLibrary() {
}

TMap<FName, AActor*> UEventBPFLibrary::GenerateActorBindingsFromSpawners(const TMap<FName, ASpawner*>& SpawnerBindings) {
    return TMap<FName, AActor*>();
}

TMap<FName, AActor*> UEventBPFLibrary::GenerateActorBindings(const TMap<FName, AActor*>& ActorBindings, const TMap<FName, ASpawner*>& SpawnerBindings) {
    return TMap<FName, AActor*>();
}

void UEventBPFLibrary::AppendActorBindings(TMap<FName, AActor*>& ActorBindings, const TMap<FName, AActor*>& AdditionalBindings) {
}


