#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZionCondition.h"
#include "BTDecorator_IsOnScreen.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsOnScreen : public UBTDecoratorZionCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTolerance;
    
public:
    UBTDecorator_IsOnScreen();

};

