#pragma once
#include "CoreMinimal.h"
#include "EEventPlayerResult.h"
#include "EventPlayerFinishDelegateDelegate.generated.h"

class UEventPlayer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEventPlayerFinishDelegate, UEventPlayer*, EventPlayer, bool, bCompletedEvent, EEventPlayerResult, EventResult);

