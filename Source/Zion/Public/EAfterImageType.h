#pragma once
#include "CoreMinimal.h"
#include "EAfterImageType.generated.h"

UENUM(BlueprintType)
enum class EAfterImageType : uint8 {
    None,
    FX,
    Texture,
};

