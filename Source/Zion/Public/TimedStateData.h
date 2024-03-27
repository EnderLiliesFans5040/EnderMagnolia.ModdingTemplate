#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TimedStateData.generated.h"

class UState;

USTRUCT(BlueprintType)
struct FTimedStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> States;
    
    ZION_API FTimedStateData();
};

