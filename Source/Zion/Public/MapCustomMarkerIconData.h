#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapCustomMarkerIconData.generated.h"

USTRUCT(BlueprintType)
struct FMapCustomMarkerIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkerID;
    
    ZION_API FMapCustomMarkerIconData();
};

uint32 GetTypeHash(const FMapCustomMarkerIconData& mapCustomMarkerIconData);