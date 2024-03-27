#pragma once
#include "CoreMinimal.h"
#include "EInputMappingPriority.generated.h"

UENUM(BlueprintType)
enum class EInputMappingPriority : uint8 {
    BelowDefault,
    Default = 10,
    AboveDefault = 20,
    Interactable = 50,
    Debug = 200,
};

