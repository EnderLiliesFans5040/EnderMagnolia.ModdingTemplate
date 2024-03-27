#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatsSnapshotProviderInterface.h"
#include "SpiritStatsSnapshotComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpiritStatsSnapshotComponent : public UActorComponent, public IStatsSnapshotProviderInterface {
    GENERATED_BODY()
public:
    USpiritStatsSnapshotComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

