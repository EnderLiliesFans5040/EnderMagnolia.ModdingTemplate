#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_FlyTo.h"
#include "BTTask_FlyTo_Target.generated.h"

UCLASS(Blueprintable)
class UBTTask_FlyTo_Target : public UBTTask_FlyTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
public:
    UBTTask_FlyTo_Target();

};

