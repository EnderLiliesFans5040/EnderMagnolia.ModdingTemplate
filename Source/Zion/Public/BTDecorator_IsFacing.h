#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecoratorZionCondition.h"
#include "EFacingType.h"
#include "BTDecorator_IsFacing.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsFacing : public UBTDecoratorZionCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFacingType> ValidFacings;
    
public:
    UBTDecorator_IsFacing();

};

