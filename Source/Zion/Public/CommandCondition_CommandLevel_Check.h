#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_CommandLevel_Check.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_CommandLevel_Check : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCommandLevel;
    
public:
    UCommandCondition_CommandLevel_Check();

};

