#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_IsSpecialModifierPressed.generated.h"

class UInputAction;

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_IsSpecialModifierPressed : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* SpecialInputAction;
    
public:
    UCommandCondition_IsSpecialModifierPressed();

};

