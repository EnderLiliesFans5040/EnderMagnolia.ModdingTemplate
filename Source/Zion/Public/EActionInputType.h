#pragma once
#include "CoreMinimal.h"
#include "EActionInputType.generated.h"

UENUM(BlueprintType)
enum class EActionInputType : uint8 {
    None,
    Jump,
    Move,
    Move_Right,
    Move_Left,
    Move_Up,
    Move_Down,
    Dodge,
    Pause,
    CameraOffset,
    CameraOffset_Right,
    CameraOffset_Left,
    CameraOffset_Up,
    CameraOffset_Down,
    Attack_A,
    Attack_B,
    Attack_C,
    Attack_D,
    AttackSpecial_A,
    AttackSpecial_B,
    AttackSpecial_C,
    AttackSpecial_D,
    Menu,
    Hook,
    Heal,
    Interact,
    Special_Modifier,
    Minimap,
    Shortcut_AttackSpecial_A,
    Shortcut_AttackSpecial_B,
    Shortcut_AttackSpecial_C,
    Shortcut_AttackSpecial_D,
};

