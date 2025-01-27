#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

UCLASS(Abstract, Blueprintable)
class ZION_API ASpawner : public AActor {
    GENERATED_BODY()
public:
    ASpawner(const FObjectInitializer& ObjectInitializer);

};

