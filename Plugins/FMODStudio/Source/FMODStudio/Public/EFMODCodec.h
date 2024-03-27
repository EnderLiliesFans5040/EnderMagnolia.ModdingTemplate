#pragma once
#include "CoreMinimal.h"
#include "EFMODCodec.generated.h"

UENUM(BlueprintType)
namespace EFMODCodec {
    enum Type {
        VORBIS,
        FADPCM,
        OPUS,
        XMA,
        AT9,
    };
}

