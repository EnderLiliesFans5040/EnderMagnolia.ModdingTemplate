#pragma once
#include "CoreMinimal.h"
#include "EventCondition.h"
#include "EventCondition_IsValueRowHandleSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventCondition_IsValueRowHandleSet : public UEventCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyToCheck;
    
public:
    UEventCondition_IsValueRowHandleSet();

};

