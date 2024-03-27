#pragma once
#include "CoreMinimal.h"
#include "EActorBindingType.generated.h"

UENUM()
enum class EActorBindingType : int32 {
    Runtime,
    Spawn,
};

