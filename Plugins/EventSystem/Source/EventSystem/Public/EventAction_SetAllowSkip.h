#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_SetAllowSkip.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetAllowSkip : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSkip;
    
public:
    UEventAction_SetAllowSkip();

};

