#pragma once
#include "CoreMinimal.h"
#include "EWidgetReleaseMode.generated.h"

UENUM(BlueprintType)
enum EWidgetReleaseMode {
    Manual,
    AutoReleaseHolder,
    AutoReleaseWidget,
    AutoReleaseHolderAndWidget,
};

