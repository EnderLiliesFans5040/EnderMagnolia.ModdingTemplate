#pragma once
#include "CoreMinimal.h"
#include "ECommandPriorityType.generated.h"

UENUM(BlueprintType)
enum class ECommandPriorityType : uint8 {
    Dummy = 0,
    Override = 10,
    Aptitudes = 15,
    DodgeActions = 20,
    SpecialSkills = 45,
    Skills = 50,
    Default = 100,
};

