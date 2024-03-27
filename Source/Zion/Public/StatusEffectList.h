#pragma once
#include "CoreMinimal.h"
#include "StatusEffectList.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> StatusEffects;
    
    ZION_API FStatusEffectList();
};

