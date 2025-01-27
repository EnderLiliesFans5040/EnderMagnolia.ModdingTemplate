#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SpineFXComponent.h"
#include "SpineFXData.h"
#include "AuraFXData.h"
#include "AuraFXDataList.h"
#include "AuraFXRuntimeData.h"
#include "ECommandFinishType.h"
#include "EStepHeavinessCategory.h"
#include "FXComponent.generated.h"

class AAbility;
class AActor;
class UCommand;
class UNiagaraComponent;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UFXComponent : public USpineFXComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerStepOnLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStepHeavinessCategory LandingStepHeaviness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAuraFXData> AuraFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAuraFXDataList> AuraFXDataListForTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FindTargetFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData LeadAbilityFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnGuardFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnParryFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> SPChargedFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> SPChargedLoopFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> BurnFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> StopBurnFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> FreezeFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> StopFreezeFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> ShockFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> StopShockFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> StunFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> StopStunFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> AttackUpFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> StopAttackUpFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> DefenseUpFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> StopDefenseUpFXDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAuraFXRuntimeData> AuraFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> SPChargedLoopFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> BurnFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> FreezeFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ShockFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> StunFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> AttackUpFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> DefenseUpFXInstances;
    
public:
    UFXComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectStopped(UStatusEffect* StatusEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectLaunched(UStatusEffect* StatusEffect);
    
    UFUNCTION(BlueprintCallable)
    void OnSPValueChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnParried(AAbility* Ability, AActor* Source);
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnGuarded(AAbility* Ability, AActor* Source);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishCommand(const UCommand* Command, ECommandFinishType FinishType);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathProcessStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateAuraFXs(const FName& AuraFXTag);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAuraFXs(const FName& AuraFXTag);
    
};

