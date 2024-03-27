#pragma once
#include "CoreMinimal.h"
#include "EMoveToTalkDistanceTargetFacingType.generated.h"

UENUM(BlueprintType)
enum class EMoveToTalkDistanceTargetFacingType : uint8 {
    None,
    BeforeSubjectMovement,
    AfterSubjectMovement,
};

