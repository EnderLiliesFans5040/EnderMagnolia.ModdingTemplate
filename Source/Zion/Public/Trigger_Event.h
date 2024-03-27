#pragma once
#include "CoreMinimal.h"
#include "EEventPlayerResult.h"
#include "EventData.h"
#include "Trigger.h"
#include "Trigger_Event.generated.h"

class UEventAsset;
class UEventPlayer;

UCLASS(Blueprintable)
class ATrigger_Event : public ATrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventData> EventDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventAsset* LoadedEventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventPlayer* EventPlayer;
    
public:
    ATrigger_Event(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEventFinished(UEventPlayer* InEventPlayer, bool bCompletedEvent, EEventPlayerResult EventResult);
    
};

