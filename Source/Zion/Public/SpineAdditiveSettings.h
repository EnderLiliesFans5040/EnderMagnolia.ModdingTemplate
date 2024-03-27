#pragma once
#include "CoreMinimal.h"
#include "SpineAdditiveSettings.generated.h"

USTRUCT(BlueprintType)
struct FSpineAdditiveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdditiveAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditiveTrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> AllowedOverrideAnimations;
    
    ZION_API FSpineAdditiveSettings();
};

