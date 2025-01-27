#pragma once
#include "CoreMinimal.h"
#include "StatsComponent.h"
#include "StatsEnemyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatsEnemyComponent : public UStatsComponent {
    GENERATED_BODY()
public:
    UStatsEnemyComponent(const FObjectInitializer& ObjectInitializer);

};

