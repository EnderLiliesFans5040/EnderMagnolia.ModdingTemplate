#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_FlyTo_Height.h"
#include "BTTask_FlyTo_Height_Target.generated.h"

UCLASS(Blueprintable)
class UBTTask_FlyTo_Height_Target : public UBTTask_FlyTo_Height {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
public:
    UBTTask_FlyTo_Height_Target();

};

