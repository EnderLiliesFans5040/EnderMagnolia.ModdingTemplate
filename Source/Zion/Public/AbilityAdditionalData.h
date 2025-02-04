#pragma once
#include "CoreMinimal.h"
#include "ECommandSetCategory.h"
#include "AbilityAdditionalData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAbilityAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandSetCategory CommandSetCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SourceOverride;
    
    ZION_API FAbilityAdditionalData();
};

