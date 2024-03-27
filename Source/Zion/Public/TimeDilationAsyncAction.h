#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TimeDilationOutputPinDelegate.h"
#include "TimedDilationData.h"
#include "TimeDilationAsyncAction.generated.h"

class UObject;
class UTimeDilationAsyncAction;

UCLASS(Blueprintable)
class UTimeDilationAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeDilationOutputPin OnFinish;
    
    UTimeDilationAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UTimeDilationAsyncAction* TimeDilation(const UObject* WorldContextObject, const FTimedDilationData& TimedDilation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTimedProcessFinished();
    
};

