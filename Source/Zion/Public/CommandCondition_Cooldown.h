#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_Cooldown.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_Cooldown : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
public:
    UCommandCondition_Cooldown();

};

