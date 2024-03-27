#pragma once
#include "CoreMinimal.h"
#include "DeathProcess.h"
#include "DeathProcess_SpineAnimation.generated.h"

class UTrackEntry;

UCLASS(Blueprintable)
class UDeathProcess_SpineAnimation : public UDeathProcess {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseBackAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
public:
    UDeathProcess_SpineAnimation();

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished(UTrackEntry* TrackEntry);
    
};

