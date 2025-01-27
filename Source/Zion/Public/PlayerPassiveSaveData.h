#pragma once
#include "CoreMinimal.h"
#include "PlayerPassiveSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerPassiveSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemIDs;
    
    ZION_API FPlayerPassiveSaveData();
};

