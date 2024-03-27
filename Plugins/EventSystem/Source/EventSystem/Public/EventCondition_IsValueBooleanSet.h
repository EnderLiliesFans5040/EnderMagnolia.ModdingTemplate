#pragma once
#include "CoreMinimal.h"
#include "EventCondition.h"
#include "EventCondition_IsValueBooleanSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventCondition_IsValueBooleanSet : public UEventCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyToCheck;
    
public:
    UEventCondition_IsValueBooleanSet();

};

