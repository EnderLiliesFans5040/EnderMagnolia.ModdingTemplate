#pragma once
#include "CoreMinimal.h"
#include "ECommandFinishType.h"
#include "FinishCommandDelegateDelegate.generated.h"

class UCommand;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFinishCommandDelegate, const UCommand*, Command, ECommandFinishType, FinishType);

