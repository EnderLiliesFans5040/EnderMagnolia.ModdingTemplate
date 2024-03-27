#include "NPCSpawner.h"
#include "Components/SceneComponent.h"
#include "GameplayConditionRefreshComponent.h"

ANPCSpawner::ANPCSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->ConditionRefreshComponent = CreateDefaultSubobject<UGameplayConditionRefreshComponent>(TEXT("GameplayConditionRefresh"));
    this->SpawnedNPC = NULL;
}


