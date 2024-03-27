#pragma once
#include "CoreMinimal.h"
#include "GameplayConditionChecker.h"
#include "ConditionedTexture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FConditionedTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    ZION_API FConditionedTexture();
};

