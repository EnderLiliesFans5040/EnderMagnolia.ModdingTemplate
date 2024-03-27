#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZoneBlackBordersSettings.generated.h"

USTRUCT(BlueprintType)
struct FZoneBlackBordersSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBlackBorders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BorderMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BorderMax;
    
    ZION_API FZoneBlackBordersSettings();
};

