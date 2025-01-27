#include "AIControllerZion_Enemy.h"
#include "StatsControllerAIComponent.h"

AAIControllerZion_Enemy::AAIControllerZion_Enemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatsControllerAIComponent = CreateDefaultSubobject<UStatsControllerAIComponent>(TEXT("StatsControllerAI"));
    this->EnemyUIClass = NULL;
    this->bInAmbush = false;
    this->EnemyUI = NULL;
}


