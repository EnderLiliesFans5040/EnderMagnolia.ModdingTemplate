#pragma once
#include "CoreMinimal.h"
#include "EWaitType.h"
#include "EventAction.h"
#include "EventAction_Wait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Wait : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaitType WaitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitFrame;
    
public:
    UEventAction_Wait();

};

