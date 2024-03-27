#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MapAreaData.h"
#include "MapAreaZoneData.h"
#include "GameMapData.generated.h"

class UUserWidgetMapArea;
class UWorld;

USTRUCT(BlueprintType)
struct FGameMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetMapArea> WidgetMapArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapAreaDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapAreaData MapAreaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapAreaZoneData MapAreaZoneData;
    
    ZION_API FGameMapData();
};

