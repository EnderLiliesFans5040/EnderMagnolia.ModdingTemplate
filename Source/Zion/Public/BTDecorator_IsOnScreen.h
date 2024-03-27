#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "BTDecorator_IsOnScreen.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsOnScreen : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTolerance;
    
public:
    UBTDecorator_IsOnScreen();

};

