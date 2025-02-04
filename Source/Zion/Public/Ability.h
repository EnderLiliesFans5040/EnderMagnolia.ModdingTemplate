#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpineFXData.h"
#include "AbilityData.h"
#include "AbilityEffectProcessCollection.h"
#include "EAbilityDirectionMode.h"
#include "EAbilityWeightCategory.h"
#include "Templates/SubclassOf.h"
#include "TimelineAbility.h"
#include "TimelineSE.h"
#include "Ability.generated.h"

class UAbilityComponent;
class UAbilityEffectProcess;
class UNiagaraComponent;

UCLASS(Abstract, Blueprintable)
class AAbility : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStopByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStopByTriggerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoStopTriggerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAbortOnSourceDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDodged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeGuarded;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityDirectionMode DirectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimelineAbility TimelineAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimelineSE TimelineSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteAbilitiesOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityData> OnStopAbilityDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> FXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> OnStopFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityWeightCategory WeightCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAbilityEffectProcess> AbilityEffectProcessClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UAbilityEffectProcess>, FAbilityEffectProcessCollection> AbilityEffectProcessCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> RuntimeFXInstances;
    
public:
    AAbility(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestStop();
    
    UFUNCTION(BlueprintCallable)
    void RequestAbort();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStop_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSourceDeath();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunch_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize_BP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAbilityWeightCategory GetWeightCategory() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionTime() const;
    
};

