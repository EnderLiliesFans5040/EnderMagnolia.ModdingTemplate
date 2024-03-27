#pragma once
#include "CoreMinimal.h"
#include "Spawner.h"
#include "SpawnerNPCData.h"
#include "NPCSpawner.generated.h"

class AActor;
class ACharacterZionNPC;
class UGameplayConditionRefreshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ANPCSpawner : public ASpawner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayConditionRefreshComponent* ConditionRefreshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterZionNPC> NPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerNPCData> NPCDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedNPC;
    
public:
    ANPCSpawner(const FObjectInitializer& ObjectInitializer);

};

