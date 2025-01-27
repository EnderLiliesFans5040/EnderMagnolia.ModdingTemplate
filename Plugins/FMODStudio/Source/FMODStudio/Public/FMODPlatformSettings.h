#pragma once
#include "CoreMinimal.h"
#include "EFMODCodec.h"
#include "EFMODOutput.h"
#include "EFMODSpeakerMode.h"
#include "FMODPlatformSettings.generated.h"

USTRUCT(BlueprintType)
struct FFMODPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RealChannelCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFMODSpeakerMode::Type> SpeakerMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFMODOutput::Type> OutputType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomPoolSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFMODCodec::Type>, int32> Codecs;
    
    FMODSTUDIO_API FFMODPlatformSettings();
};

