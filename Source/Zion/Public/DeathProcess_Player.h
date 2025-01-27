#pragma once
#include "CoreMinimal.h"
#include "ESpineBone.h"
#include "DeathProcess.h"
#include "FadeDescriptionData.h"
#include "SpineAnimationDefinition.h"
#include "Templates/SubclassOf.h"
#include "TimedDilationData.h"
#include "DeathProcess_Player.generated.h"

class UMaterialParameterCollection;
class UState;

UCLASS(Abstract, Blueprintable)
class UDeathProcess_Player : public UDeathProcess {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> DeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseBackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> BackDeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> AdditionalDeathStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedDilationData TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeOutDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* SystemMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpineBone LocationTargetBone;
    
public:
    UDeathProcess_Player();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeFinished();
    
};

