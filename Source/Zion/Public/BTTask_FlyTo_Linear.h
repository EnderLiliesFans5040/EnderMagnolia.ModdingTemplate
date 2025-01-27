#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_FlyTo.h"
#include "BTTask_FlyTo_Linear.generated.h"

UCLASS(Abstract, Blueprintable)
class UBTTask_FlyTo_Linear : public UBTTask_FlyTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveLineOriginKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveLineOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveLineOffsetMax;
    
public:
    UBTTask_FlyTo_Linear();

};

