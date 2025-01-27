#pragma once
#include "CoreMinimal.h"
#include "EKnockbackPhase.generated.h"

UENUM(BlueprintType)
enum class EKnockbackPhase : uint8 {
    None,
    Starting,
    Launch,
    WaitForLanding,
    Stagger,
    Recovery,
    Finish,
};

