#pragma once
#include "CoreMinimal.h"
#include "NameSet.h"
#include "MapAreaZoneData.generated.h"

USTRUCT(BlueprintType)
struct FMapAreaZoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearablesPerZones;
    
    ZION_API FMapAreaZoneData();
};

