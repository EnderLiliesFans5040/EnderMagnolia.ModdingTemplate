#pragma once
#include "CoreMinimal.h"
#include "CommandCondition_InputDirection.h"
#include "EInputDirection.h"
#include "CommandCondition_InputDirection_Custom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_InputDirection_Custom : public UCommandCondition_InputDirection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputDirection> ValidInputDirections;
    
public:
    UCommandCondition_InputDirection_Custom();

};

