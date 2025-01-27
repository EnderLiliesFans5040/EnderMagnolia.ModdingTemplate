#pragma once
#include "CoreMinimal.h"
#include "ENotificationTypes.generated.h"

UENUM(BlueprintType)
enum class ENotificationTypes : uint8 {
    None,
    ItemReceived,
};

