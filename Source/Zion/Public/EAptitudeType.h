#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.generated.h"

UENUM(BlueprintType)
enum class EAptitudeType : uint8 {
    None,
    Crouch,
    Heal,
    Dodge = 5,
    DodgeWeak,
    Jump = 10,
    DoubleJump,
    Dash = 30,
    DashCharge,
    DashChargeUnderwater,
    PileAttack = 40,
    HighJump = 50,
    WallGrab = 60,
    WallCharge = 65,
    Dive = 75,
    Hook = 100,
    SP = 110,
    FastTravel = 150,
};

