#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "ERandomRuntimeLinearBlendType.h"
#include "BTDecorator_RandomRuntimeLinear.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_RandomRuntimeLinear : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSuccessPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSuccessPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToReachMaxSuccessPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERandomRuntimeLinearBlendType BlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseExp;
    
public:
    UBTDecorator_RandomRuntimeLinear();

};

