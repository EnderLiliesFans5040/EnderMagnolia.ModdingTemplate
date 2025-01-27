#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_InputDirection.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCommandCondition_InputDirection : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreCanMoveCheck;
    
public:
    UCommandCondition_InputDirection();

};

