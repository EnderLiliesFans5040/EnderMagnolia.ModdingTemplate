#pragma once
#include "CoreMinimal.h"
#include "ESpineBone.generated.h"

UENUM(BlueprintType)
enum class ESpineBone : uint8 {
    None,
    ActorOrigin,
    Default = 5,
    Feet = 10,
    Root = 50,
    Hip = 60,
    Head = 70,
    FootRight = 100,
    FootLeft = 110,
    HandRight = 120,
    HandLeft = 130,
    Custom = 255,
};

