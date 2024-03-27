#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "EHasStateConditionType.h"
#include "Templates/SubclassOf.h"
#include "CommandCondition_HasState.generated.h"

class UState;

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandCondition_HasState : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHasStateConditionType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> States;
    
public:
    UCommandCondition_HasState();

};

