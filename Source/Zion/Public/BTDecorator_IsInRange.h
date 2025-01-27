#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecoratorZionCondition.h"
#include "EDistanceComparisonType.h"
#include "BTDecorator_IsInRange.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsInRange : public UBTDecoratorZionCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDistanceComparisonType DistanceType;
    
public:
    UBTDecorator_IsInRange();

};

