#pragma once
#include "CoreMinimal.h"
#include "EUMGLayer.generated.h"

UENUM(BlueprintType)
enum class EUMGLayer : uint8 {
    Default,
    Event,
    Menu,
    MenuOverlay,
    Movie,
    Fade,
    Dialog,
    System_InputDevice,
    System_Profile,
    SaveLoad,
};

