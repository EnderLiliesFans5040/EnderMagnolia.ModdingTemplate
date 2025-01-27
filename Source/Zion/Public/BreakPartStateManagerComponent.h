#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClearActorData.h"
#include "EBreakType.h"
#include "BreakPartStateManagerComponent.generated.h"

class AEnemySpawner;
class UBreakPartStateManagerComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UBreakPartStateManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FClearActorData, EBreakType> BreakPartStates;
    
public:
    UBreakPartStateManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EBreakType RegisterBreakPartState(const AEnemySpawner* EnemySpawner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBreakType GetBreakPartState(const AEnemySpawner* EnemySpawner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UBreakPartStateManagerComponent* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearBreakPartStates();
    
};

