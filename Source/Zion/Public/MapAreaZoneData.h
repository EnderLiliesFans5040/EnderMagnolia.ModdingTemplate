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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearablesForRevealPerZones;
    
    ZION_API FMapAreaZoneData();
};

