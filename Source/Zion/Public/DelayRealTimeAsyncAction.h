#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DelayRealTimeOutputPinDelegate.h"
#include "DelayRealTimeAsyncAction.generated.h"

class UDelayRealTimeAsyncAction;
class UObject;

UCLASS(Blueprintable)
class UDelayRealTimeAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayRealTimeOutputPin OnFinish;
    
    UDelayRealTimeAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDelayRealTimeAsyncAction* DelayRealTime(const UObject* WorldContextObject, float DelayInSeconds);
    
};

