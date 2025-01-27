#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SpineFXData.h"
#include "AbilityData.h"
#include "Command.h"
#include "DashToData.h"
#include "SoundData.h"
#include "Command_AI_DashTo.generated.h"

class AAbility;
class UFMODAudioComponent;
class UNiagaraComponent;

UCLASS(Abstract, Blueprintable)
class UCommand_AI_DashTo : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashToData DashForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashToData DashBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineFXData> DashLoopFXs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData DashLoopSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData DashStopAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckDistanceFromBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoStopAtDistanceFromBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> LoopFXInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LoopSEInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAbility* Ability;
    
public:
    UCommand_AI_DashTo();

private:
    UFUNCTION(BlueprintCallable)
    void OnMoveBlocked(const FHitResult& Hit);
    
};

