#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_DismissSpirits.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_DismissSpirits : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstant;
    
public:
    UEventAction_DismissSpirits();

};

