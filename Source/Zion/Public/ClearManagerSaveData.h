#pragma once
#include "CoreMinimal.h"
#include "NameSet.h"
#include "ClearManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FClearManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearedActors;
    
    ZION_API FClearManagerSaveData();
};

