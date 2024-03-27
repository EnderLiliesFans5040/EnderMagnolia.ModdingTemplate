#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "EConditionType.h"
#include "BTDecorator_Comparator.generated.h"

UCLASS(Abstract, Blueprintable)
class UBTDecorator_Comparator : public UBTDecoratorZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionType ConditionType;
    
    UBTDecorator_Comparator();

};

