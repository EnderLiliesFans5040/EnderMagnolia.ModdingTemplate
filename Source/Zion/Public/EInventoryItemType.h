#pragma once
#include "CoreMinimal.h"
#include "EInventoryItemType.generated.h"

UENUM(BlueprintType)
enum class EInventoryItemType : uint8 {
    None,
    Currency,
    Stats,
    Aptitude,
    Spirit,
    Skill,
    Passive,
    Tip,
    Key,
    Material,
    Equipment,
    Assist,
    Tutorial,
    Costume,
    EnemyInfo,
    NPCInfo,
};

