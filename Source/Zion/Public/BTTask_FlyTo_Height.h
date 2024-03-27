#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_FlyTo.h"
#include "BTTask_FlyTo_Height.generated.h"

UCLASS(Abstract, Blueprintable)
class UBTTask_FlyTo_Height : public UBTTask_FlyTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveHeightOriginKey;
    
public:
    UBTTask_FlyTo_Height();

};

