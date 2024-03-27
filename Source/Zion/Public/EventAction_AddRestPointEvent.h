#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventAction.h"
#include "EventAction_AddRestPointEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_AddRestPointEvent : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RestPointEventDataHandle;
    
public:
    UEventAction_AddRestPointEvent();

};

