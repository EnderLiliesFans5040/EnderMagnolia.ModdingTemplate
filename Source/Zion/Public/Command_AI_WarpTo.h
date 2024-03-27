#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "EWarpExecutionTiming.h"
#include "Command_AI_WarpTo.generated.h"

class UTrackEntry;

UCLASS(Abstract, Blueprintable)
class UCommand_AI_WarpTo : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpExecutionTiming WarpExecutionTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpExecutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetFacingToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarpYAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarpZAxis;
    
public:
    UCommand_AI_WarpTo();

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationStart(UTrackEntry* TrackEntry);
    
};

