#pragma once
#include "CoreMinimal.h"
#include "AnimationNameData.generated.h"

USTRUCT(BlueprintType)
struct FAnimationNameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AnimationNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AnimationDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalAnimations;
    
    ZION_API FAnimationNameData();
};

