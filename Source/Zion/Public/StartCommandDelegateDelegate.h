#pragma once
#include "CoreMinimal.h"
#include "StartCommandDelegateDelegate.generated.h"

class UCommand;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartCommandDelegate, const UCommand*, Command);

