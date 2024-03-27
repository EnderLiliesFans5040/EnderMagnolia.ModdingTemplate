#pragma once
#include "CoreMinimal.h"
#include "EmulatedFogSettings.h"
#include "BlendEmulatedFogSettings.generated.h"

USTRUCT(BlueprintType)
struct FBlendEmulatedFogSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmulatedFogSettings FirstFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmulatedFogSettings SecondFog;
    
    ZION_API FBlendEmulatedFogSettings();
};

