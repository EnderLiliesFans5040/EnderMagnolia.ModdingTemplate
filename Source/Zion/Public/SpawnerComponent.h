#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnData.h"
#include "SpawnerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Spawn(const FSpawnData& SpawnData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEntityDestroyed(AActor* EntityActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void KillAllSpawnedEntities();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnedEntityCount() const;
    
};

