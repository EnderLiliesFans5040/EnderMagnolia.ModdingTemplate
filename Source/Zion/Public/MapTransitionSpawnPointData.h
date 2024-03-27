#pragma once
#include "CoreMinimal.h"
#include "MapTransitionSpawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FMapTransitionSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    ZION_API FMapTransitionSpawnPointData();
};

uint32 GetTypeHash(const FMapTransitionSpawnPointData& mapTransitionSpawnPointData);