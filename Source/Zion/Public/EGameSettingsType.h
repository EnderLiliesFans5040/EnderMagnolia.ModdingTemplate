#pragma once
#include "CoreMinimal.h"
#include "EGameSettingsType.generated.h"

UENUM(BlueprintType)
enum class EGameSettingsType : uint8 {
    All,
    Game,
    Input,
    Video,
};

