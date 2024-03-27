#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_HasEnoughSP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_HasEnoughSP : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SPRequired;
    
public:
    UCommandCondition_HasEnoughSP();

};

