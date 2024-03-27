#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_FlyTo_Linear.h"
#include "BTTask_FlyTo_Linear_Target.generated.h"

UCLASS(Blueprintable)
class UBTTask_FlyTo_Linear_Target : public UBTTask_FlyTo_Linear {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
public:
    UBTTask_FlyTo_Linear_Target();

};

