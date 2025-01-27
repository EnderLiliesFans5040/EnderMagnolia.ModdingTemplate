#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CommandModule_Timeline.h"
#include "EMoveTimelineMovementModeChangeBehavior.h"
#include "EMoveTimelineRotation.h"
#include "TimelineMove.h"
#include "CommandModule_Timeline_Move.generated.h"

class ACharacter;

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Timeline_Move : public UCommandModule_Timeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimelineMove TimelineMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveTimelineRotation RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveTimelineMovementModeChangeBehavior MovementModeChangedBehavior;
    
public:
    UCommandModule_Timeline_Move();

private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
};

