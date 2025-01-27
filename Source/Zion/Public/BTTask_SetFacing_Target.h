#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetFacing.h"
#include "BTTask_SetFacing_Target.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetFacing_Target : public UBTTask_SetFacing {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
public:
    UBTTask_SetFacing_Target();

};

