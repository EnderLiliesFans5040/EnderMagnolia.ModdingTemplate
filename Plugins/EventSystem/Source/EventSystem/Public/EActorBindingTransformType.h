#pragma once
#include "CoreMinimal.h"
#include "EActorBindingTransformType.generated.h"

UENUM()
enum class EActorBindingTransformType : int32 {
    LocalSpace,
    WorldSpace,
    ActorBinding,
};

