#pragma once
#include "CoreMinimal.h"
#include "CommandFinishCooldownDelegateDelegate.generated.h"

class UCommandSet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCommandFinishCooldownDelegate, const UCommandSet*, CommandSet, bool, bReset);

