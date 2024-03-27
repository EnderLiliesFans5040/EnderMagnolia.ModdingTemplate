#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "EInputDirection.h"
#include "CommandCondition_DodgeStill_InputSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_DodgeStill_InputSetting : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputDirection> ValidInputDirections;
    
public:
    UCommandCondition_DodgeStill_InputSetting();

};

