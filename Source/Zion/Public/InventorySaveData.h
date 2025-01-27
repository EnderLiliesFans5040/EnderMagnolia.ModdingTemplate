#pragma once
#include "CoreMinimal.h"
#include "InventorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FInventorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Checked;
    
    ZION_API FInventorySaveData();
};

