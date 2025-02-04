#include "BreakPartStateManagerComponent.h"

UBreakPartStateManagerComponent::UBreakPartStateManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

EBreakType UBreakPartStateManagerComponent::RegisterBreakPartState(const AEnemySpawner* EnemySpawner) {
    return EBreakType::None;
}

EBreakType UBreakPartStateManagerComponent::GetBreakPartState(const AEnemySpawner* EnemySpawner) const {
    return EBreakType::None;
}

UBreakPartStateManagerComponent* UBreakPartStateManagerComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UBreakPartStateManagerComponent::ClearBreakPartStates() {
}


