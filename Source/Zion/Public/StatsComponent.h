#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAttackElement.h"
#include "EAttackType.h"
#include "StatsLevelData.h"
#include "StatsSnapshotProviderInterface.h"
#include "StatsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatsComponent : public UActorComponent, public IStatsSnapshotProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsLevelData DefaultStatsLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultElementalFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackElement, float> ElementalFactors;
    
public:
    UStatsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStaminaCutPercentage(EAttackType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefense() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageCutPercentage(EAttackType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttack() const;
    

    // Fix for true pure virtual functions not being implemented
};

