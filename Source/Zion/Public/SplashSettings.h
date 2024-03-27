#pragma once
#include "CoreMinimal.h"
#include "SplashSettings.generated.h"

USTRUCT(BlueprintType)
struct FSplashSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplashStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplashSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateSplashFX;
    
    ZION_API FSplashSettings();
};

