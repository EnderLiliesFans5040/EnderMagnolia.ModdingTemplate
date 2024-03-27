#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EmulatedFogWindSettings.generated.h"

USTRUCT(BlueprintType)
struct FEmulatedFogWindSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindStrength;
    
    ZION_API FEmulatedFogWindSettings();
};

