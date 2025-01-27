#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectProcessCollection.generated.h"

class UAbilityEffectProcess;

USTRUCT(BlueprintType)
struct FAbilityEffectProcessCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAbilityEffectProcess*> Processes;
    
    ZION_API FAbilityEffectProcessCollection();
};

