#pragma once
#include "CoreMinimal.h"
#include "EmulatedFogAxisSettings.h"
#include "EmulatedFogWindSettings.h"
#include "EmulatedFogSettings.generated.h"

USTRUCT(BlueprintType)
struct FEmulatedFogSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmulatedFogAxisSettings DepthFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmulatedFogAxisSettings HeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmulatedFogWindSettings WindSettings;
    
    ZION_API FEmulatedFogSettings();
};

