#pragma once
#include "CoreMinimal.h"
#include "EventAction_GrantItemsBase.h"
#include "ItemHandleCount.h"
#include "EventAction_GrantItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_GrantItems : public UEventAction_GrantItemsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemHandleCount> ItemHandleCounts;
    
public:
    UEventAction_GrantItems();

};

