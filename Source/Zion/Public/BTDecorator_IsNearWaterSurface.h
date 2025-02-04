#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZionCondition.h"
#include "BTDecorator_IsNearWaterSurface.generated.h"

UCLASS(Blueprintable)
class ZION_API UBTDecorator_IsNearWaterSurface : public UBTDecoratorZionCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UBTDecorator_IsNearWaterSurface();

};

