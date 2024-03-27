#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "DecoratorNearGroundDirectionData.h"
#include "EConditionOperator.h"
#include "EDecoratorNearGroundDirection.h"
#include "EDecoratorNearGroundUpVectorMode.h"
#include "BTDecorator_IsNearGround.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsNearGround : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionOperator CheckOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDecoratorNearGroundUpVectorMode UpVectorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDecoratorNearGroundDirection, FDecoratorNearGroundDirectionData> GroundDirections;
    
public:
    UBTDecorator_IsNearGround();

};

