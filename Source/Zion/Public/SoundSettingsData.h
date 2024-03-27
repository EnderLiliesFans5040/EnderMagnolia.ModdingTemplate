#pragma once
#include "CoreMinimal.h"
#include "ESoundFamily.h"
#include "SoundSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FSoundSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundFamily, float> Volumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceLanguage;
    
    ZION_API FSoundSettingsData();
};

