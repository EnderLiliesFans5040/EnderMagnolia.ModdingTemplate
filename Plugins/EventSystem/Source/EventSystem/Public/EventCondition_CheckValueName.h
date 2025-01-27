#pragma once
#include "CoreMinimal.h"
#include "EventCondition.h"
#include "EventCondition_CheckValueName.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventCondition_CheckValueName : public UEventCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ValueForSuccess;
    
public:
    UEventCondition_CheckValueName();

};

