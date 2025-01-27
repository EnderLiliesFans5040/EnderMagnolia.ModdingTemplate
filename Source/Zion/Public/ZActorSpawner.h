#pragma once
#include "CoreMinimal.h"
#include "GameplayConditionChecker.h"
#include "Spawner.h"
#include "ZActorSpawner.generated.h"

class AActor;
class UGameplayConditionRefreshComponent;

UCLASS(Abstract, Blueprintable)
class AActorSpawner : public ASpawner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayConditionRefreshComponent* ConditionRefreshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffsetByHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
public:
    AActorSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActorToSpawn(const TSoftClassPtr<AActor>& InActorClassToSpawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreSpawnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostSpawnActor(AActor* Actor, bool bPreview);
    
};

