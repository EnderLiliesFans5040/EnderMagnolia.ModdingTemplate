#pragma once
#include "CoreMinimal.h"
#include "ExtendedStatsData.h"
#include "StatsControllerComponent.h"
#include "StatsLevelData.h"
#include "StatsPlayerDelegateDelegate.h"
#include "StatsControllerPlayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class UStatsControllerPlayerComponent : public UStatsControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsPlayerDelegate OnExperienceValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsPlayerDelegate OnLevelValueChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtendedStatsData MaxPossibleStatsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtendedStatsData AdditiveBonusStats;
    
public:
    UStatsControllerPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStatsLevelData GetStatsLevelDataWithBonuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNecessaryExperiencePointsForLevelUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FExtendedStatsData GetExtendedStatsLevelDataWithBonuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExperiencePointsRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExperiencePoints() const;
    
};

