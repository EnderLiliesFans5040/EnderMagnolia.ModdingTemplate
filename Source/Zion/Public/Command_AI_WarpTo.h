#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Command.h"
#include "EWarpExecutionTiming.h"
#include "EWarpFacingMode.h"
#include "EWarpLocationComputationTiming.h"
#include "Command_AI_WarpTo.generated.h"

class UTrackEntry;

UCLASS(Abstract, Blueprintable)
class UCommand_AI_WarpTo : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpLocationComputationTiming WarpLocationComputationTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSweepToTeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpExecutionTiming WarpExecutionTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarpExecutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffsetByHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpFacingMode WarpFacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> SnapToGroundCollisionChannel;
    
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

