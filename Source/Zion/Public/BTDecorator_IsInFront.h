#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecoratorZion.h"
#include "BTDecorator_IsInFront.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsInFront : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
public:
    UBTDecorator_IsInFront();

};

