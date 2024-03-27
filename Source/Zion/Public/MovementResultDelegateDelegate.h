#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "MovementResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovementResultDelegate, const FHitResult&, Hit);

