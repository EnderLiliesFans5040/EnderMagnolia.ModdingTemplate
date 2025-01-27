#pragma once
#include "CoreMinimal.h"
#include "ESkillUnlockResultType.generated.h"

UENUM(BlueprintType)
enum class ESkillUnlockResultType : uint8 {
    Invalid,
    Success,
    NotEnoughMaterial,
    AlreadyMaxLevel,
};

