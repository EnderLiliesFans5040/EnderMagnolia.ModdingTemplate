#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_FallingExecutionCount.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_FallingExecutionCount : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFallingExecutionCount;
    
public:
    UCommandCondition_FallingExecutionCount();

};

