#pragma once
#include "CoreMinimal.h"
#include "EDifficultyPreset.generated.h"

UENUM(BlueprintType)
enum class EDifficultyPreset : uint8 {
    None,
    Easy,
    Normal,
    Hard,
    Custom = 100,
};

