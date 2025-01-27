#pragma once
#include "CoreMinimal.h"
#include "EEventPlayerState.generated.h"

UENUM()
enum class EEventPlayerState : int32 {
    None,
    Initializing,
    PostInitialize,
    Playing,
    Skipping,
    PostSkip,
    Finishing,
    Aborting,
};

