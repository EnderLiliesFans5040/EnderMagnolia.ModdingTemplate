#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DelayFrameOutputPinDelegate.h"
#include "DelayFrameAsyncAction.generated.h"

class UDelayFrameAsyncAction;
class UObject;

UCLASS(Blueprintable)
class UDelayFrameAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelayFrameOutputPin OnFinish;
    
    UDelayFrameAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDelayFrameAsyncAction* DelayFrame(const UObject* WorldContextObject, int32 DelayInFrames);
    
};

