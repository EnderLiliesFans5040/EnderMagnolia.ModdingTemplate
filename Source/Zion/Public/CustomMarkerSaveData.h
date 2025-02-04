#pragma once
#include "CoreMinimal.h"
#include "MapCustomMarkerIconData.h"
#include "CustomMarkerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCustomMarkerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FMapCustomMarkerIconData> PlacedCustomMarkers;
    
    ZION_API FCustomMarkerSaveData();
};

