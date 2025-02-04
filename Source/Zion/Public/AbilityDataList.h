#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "AbilityDataList.generated.h"

USTRUCT(BlueprintType)
struct FAbilityDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityData> Abilities;
    
    ZION_API FAbilityDataList();
};

