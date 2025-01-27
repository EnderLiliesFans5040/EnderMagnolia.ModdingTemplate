#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "ECommonOperator.h"
#include "CommandCondition_ImmersionDepth.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_ImmersionDepth : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComparingImmersionDepth;
    
public:
    UCommandCondition_ImmersionDepth();

};

