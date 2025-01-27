#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameReadyOutputPinDelegate.h"
#include "WaitGameReadyAsyncAction.generated.h"

class UObject;
class UWaitGameReadyAsyncAction;

UCLASS(Blueprintable)
class UWaitGameReadyAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameReadyOutputPin OnFinish;
    
    UWaitGameReadyAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameReadyAsyncAction* WaitGameReady(const UObject* WorldContextObject, bool bAlsoWaitWorldLoading);
    
};

