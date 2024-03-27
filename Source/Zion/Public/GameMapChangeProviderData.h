#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapTransitionSpawnPointData.h"
#include "GameMapChangeProviderData.generated.h"

USTRUCT(BlueprintType)
struct FGameMapChangeProviderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapTransitionSpawnPointData MapTransitionSpawnPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestinationWorldLocation;
    
    ZION_API FGameMapChangeProviderData();
};

