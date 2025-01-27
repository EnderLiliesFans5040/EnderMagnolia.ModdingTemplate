#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "BTDecorator_Random.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_Random : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessPercentage;
    
public:
    UBTDecorator_Random();

};

