#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecoratorZionCondition.h"
#include "EConditionOperator.h"
#include "EDecoratorNearWallDirection.h"
#include "BTDecorator_IsNearWall.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsNearWall : public UBTDecoratorZionCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionOperator CheckOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDecoratorNearWallDirection, float> WallDirections;
    
public:
    UBTDecorator_IsNearWall();

};

