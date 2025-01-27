#pragma once
#include "CoreMinimal.h"
#include "EStencilCategory.generated.h"

UENUM()
enum class EStencilCategory : int32 {
    None,
    Player = 5,
    Spirit,
    Enemy = 10,
    Boss,
    NPC = 20,
    Object = 50,
};

