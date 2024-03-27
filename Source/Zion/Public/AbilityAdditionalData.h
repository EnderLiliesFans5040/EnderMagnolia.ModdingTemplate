#pragma once
#include "CoreMinimal.h"
#include "ECommandSetCategory.h"
#include "AbilityAdditionalData.generated.h"

USTRUCT(BlueprintType)
struct FAbilityAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandSetCategory CommandSetCategory;
    
    ZION_API FAbilityAdditionalData();
};

