#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_StopFX.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_StopFX : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardID;
    
public:
    UEventAction_StopFX();

};

