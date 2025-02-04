#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "EDashChargeMode.h"
#include "CommandCondition_DashChargeMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandCondition_DashChargeMode : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDashChargeMode> ValidModes;
    
public:
    UCommandCondition_DashChargeMode();

};

