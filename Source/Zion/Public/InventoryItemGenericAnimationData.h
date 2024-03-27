#pragma once
#include "CoreMinimal.h"
#include "InventoryItemGenericAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemGenericAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AnimationDisplayName;
    
    ZION_API FInventoryItemGenericAnimationData();
};

