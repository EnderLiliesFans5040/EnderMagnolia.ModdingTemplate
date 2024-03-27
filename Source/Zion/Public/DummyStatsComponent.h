#pragma once
#include "CoreMinimal.h"
#include "StatsComponent.h"
#include "DummyStatsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDummyStatsComponent : public UStatsComponent {
    GENERATED_BODY()
public:
    UDummyStatsComponent(const FObjectInitializer& ObjectInitializer);

};

