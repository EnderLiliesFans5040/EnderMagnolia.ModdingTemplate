#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DelayUndilatedOutputPinDelegate.h"
#include "DelayUndilatedAsyncAction.generated.h"

class UDelayUndilatedAsyncAction;
class UObject;

UCLASS(Blueprintable)
class UDelayUndilatedAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayUndilatedOutputPin OnFinish;
    
    UDelayUndilatedAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDelayUndilatedAsyncAction* DelayUndilated(const UObject* WorldContextObject, float DelayInSeconds);
    
};

