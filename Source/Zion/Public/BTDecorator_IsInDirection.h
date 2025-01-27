#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecoratorZionCondition.h"
#include "ELocalDirection.h"
#include "BTDecorator_IsInDirection.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsInDirection : public UBTDecoratorZionCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELocalDirection> ValidDirections;
    
public:
    UBTDecorator_IsInDirection();

};

