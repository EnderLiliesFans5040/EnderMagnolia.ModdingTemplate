#pragma once
#include "CoreMinimal.h"
#include "LaunchStatusEffectDelegateDelegate.generated.h"

class UStatusEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLaunchStatusEffectDelegate, UStatusEffect*, StatusEffect);

