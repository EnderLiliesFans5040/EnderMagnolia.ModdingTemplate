#pragma once
#include "CoreMinimal.h"
#include "EIKBoneDriver.generated.h"

UENUM(BlueprintType)
enum class EIKBoneDriver : uint8 {
    None,
    AttackTarget,
    FootLeft,
    FootRight,
    HookTarget = 100,
};

