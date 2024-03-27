#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "ECustomMoveToAcceptableRadiusType.h"
#include "EMovementSpeedMode.h"
#include "BTTask_CustomMoveTo.generated.h"

UCLASS(Blueprintable)
class UBTTask_CustomMoveTo : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementSpeedMode MovementSpeedModeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomMoveToAcceptableRadiusType AcceptableRadiusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceptableRadius;
    
public:
    UBTTask_CustomMoveTo();

};

