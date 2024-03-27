#pragma once
#include "CoreMinimal.h"
#include "EInputStyle.generated.h"

UENUM(BlueprintType)
enum class EInputStyle : uint8 {
    None,
    MouseAndKeyboard,
    Xbox360 = 10,
    XboxOne,
    PS4 = 20,
    PS5,
    Switch = 30,
    PC_PS4 = 100,
    PC_PS5,
    PC_Switch,
};

