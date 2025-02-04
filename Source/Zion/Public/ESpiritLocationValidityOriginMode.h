#pragma once
#include "CoreMinimal.h"
#include "ESpiritLocationValidityOriginMode.generated.h"

UENUM(BlueprintType)
enum class ESpiritLocationValidityOriginMode : uint8 {
    GroundedSpiritOrigin,
    TargetHeightSpiritOrigin,
    SummonerOrigin,
};

