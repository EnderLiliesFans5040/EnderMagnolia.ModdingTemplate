#include "EnemySpawner.h"
#include "ClearComponent.h"

AEnemySpawner::AEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClearComponent = CreateDefaultSubobject<UClearComponent>(TEXT("Clear"));
    this->ClearTiming = EEnemySpawnerClearTiming::OnDeathProcessStart;
    this->bAutoActivateEnemy = true;
    this->bLockEnvironmentLevel = false;
    this->bIncrementEnvironmentLevel = false;
    this->TuningTargetChance = 0.00f;
    this->bOverrideBehaviorIdle = false;
    this->bOverrideBehaviorAggression = false;
    this->bOverridePatrolRange = false;
    this->PatrolRangeOverride = 0.00f;
}

void AEnemySpawner::ReplaceEnemy(const FDataTableRowHandle& NewEnemyRowHandle, const FTransform& SpawnTransform) {
}




void AEnemySpawner::OnEnemyDeathProcessStart() {
}

void AEnemySpawner::OnEnemyDeathProcessEnd() {
}



void AEnemySpawner::OnClearStatusChecked(EClearStatus ClearStatus) {
}


bool AEnemySpawner::IsEnemyActivated() const {
    return false;
}

AAIControllerZion* AEnemySpawner::GetEnemyAIController() const {
    return NULL;
}

ACharacterZion* AEnemySpawner::GetEnemy() const {
    return NULL;
}

void AEnemySpawner::ActivateEnemy() {
}


