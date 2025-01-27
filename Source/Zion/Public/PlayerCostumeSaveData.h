#pragma once
#include "CoreMinimal.h"
#include "PlayerCostumeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCostumeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquippedCostumeID;
    
    ZION_API FPlayerCostumeSaveData();
};

