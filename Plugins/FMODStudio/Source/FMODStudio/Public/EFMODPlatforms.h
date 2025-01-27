#pragma once
#include "CoreMinimal.h"
#include "EFMODPlatforms.generated.h"

UENUM(BlueprintType)
namespace EFMODPlatforms {
    enum Type {
        Windows,
        Linux,
        Mac,
        Android,
        IOS,
        PS4,
        PS5,
        Deprecated,
        Switch,
        XboxOne,
        XSX,
        Editor,
    };
}

