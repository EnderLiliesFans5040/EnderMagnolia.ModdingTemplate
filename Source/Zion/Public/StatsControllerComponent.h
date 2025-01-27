#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatsLevelData.h"
#include "StatsControllerComponent.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, Within=Controller, meta=(BlueprintSpawnableComponent))
class UStatsControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultLevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LevelTable;
    
public:
    UStatsControllerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStatsLevelData GetStatsLevelData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAppliedLevel() const;
    
};

