#pragma once
#include "CoreMinimal.h"
#include "EventPlayerDelegateDelegate.generated.h"

class UEventPlayer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventPlayerDelegate, UEventPlayer*, EventPlayer);

