#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameUnpausedOutputPinDelegate.h"
#include "WaitGameUnpaused.generated.h"

class UObject;
class UWaitGameUnpaused;

UCLASS(Blueprintable)
class UWaitGameUnpaused : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameUnpausedOutputPin OnFinish;
    
    UWaitGameUnpaused();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameUnpaused* WaitGameUnpaused(const UObject* WorldContextObject);
    
};

