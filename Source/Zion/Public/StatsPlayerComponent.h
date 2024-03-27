#pragma once
#include "CoreMinimal.h"
#include "StatsComponent.h"
#include "StatsPlayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatsPlayerComponent : public UStatsComponent {
    GENERATED_BODY()
public:
    UStatsPlayerComponent(const FObjectInitializer& ObjectInitializer);

};

