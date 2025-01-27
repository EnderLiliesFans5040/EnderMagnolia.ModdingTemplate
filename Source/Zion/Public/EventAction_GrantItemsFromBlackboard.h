#pragma once
#include "CoreMinimal.h"
#include "EventAction_GrantItemsBase.h"
#include "EventAction_GrantItemsFromBlackboard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_GrantItemsFromBlackboard : public UEventAction_GrantItemsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemBlackboardKeys;
    
public:
    UEventAction_GrantItemsFromBlackboard();

};

