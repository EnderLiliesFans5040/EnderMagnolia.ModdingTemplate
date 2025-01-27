#pragma once
#include "CoreMinimal.h"
#include "EFMODOutput.generated.h"

UENUM(BlueprintType)
namespace EFMODOutput {
    enum Type {
        TYPE_AUTODETECT,
        TYPE_NOSOUND,
        TYPE_WASAPI,
        TYPE_ASIO,
        TYPE_PULSEAUDIO,
        TYPE_ALSA,
        TYPE_COREAUDIO,
        TYPE_AUDIOTRACK,
        TYPE_OPENSL,
        TYPE_AUDIOOUT,
        TYPE_AUDIO3D,
        TYPE_NNAUDIO,
        TYPE_WINSONIC,
        TYPE_AAUDIO,
    };
}

