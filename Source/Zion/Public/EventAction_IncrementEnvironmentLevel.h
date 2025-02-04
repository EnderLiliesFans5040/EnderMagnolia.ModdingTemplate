#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_IncrementEnvironmentLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_IncrementEnvironmentLevel : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockEnvironmentLevel;
    
public:
    UEventAction_IncrementEnvironmentLevel();

};

