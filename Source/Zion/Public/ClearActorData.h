#pragma once
#include "CoreMinimal.h"
#include "ClearActorData.generated.h"

USTRUCT(BlueprintType)
struct ZION_API FClearActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorID;
    
    FClearActorData();
};
FORCEINLINE uint32 GetTypeHash(const FClearActorData) { return 0; }

