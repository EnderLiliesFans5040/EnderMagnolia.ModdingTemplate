#pragma once
#include "CoreMinimal.h"
#include "SummonDelegateDelegate.generated.h"

class ACharacterZionSpirit;
class UCommandSet;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSummonDelegate, const ACharacterZionSpirit*, Spirit, const UCommandSet*, CommandSet);

