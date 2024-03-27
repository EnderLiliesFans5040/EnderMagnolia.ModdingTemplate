#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemStatsWatcherComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class UItemStatsWatcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UItemStatsWatcherComponent(const FObjectInitializer& ObjectInitializer);

};

