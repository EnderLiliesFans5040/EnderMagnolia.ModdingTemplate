#pragma once
#include "CoreMinimal.h"
#include "DeathProcess.h"
#include "SpineAnimationDefinition.h"
#include "DeathProcess_Animation.generated.h"

UCLASS(Abstract, Blueprintable)
class UDeathProcess_Animation : public UDeathProcess {
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
    bool bWaitForAnimations;
    
public:
    UDeathProcess_Animation();

private:
    UFUNCTION(BlueprintCallable)
    void OnDeathAnimationFinished();
    
};

