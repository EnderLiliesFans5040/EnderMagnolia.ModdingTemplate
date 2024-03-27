#pragma once
#include "CoreMinimal.h"
#include "EPlayerCostumeFX.h"
#include "InventoryItemGrantData.h"
#include "InventoryItemCostumeData.generated.h"

class UNiagaraSystem;
class USpineAtlasAsset;
class USpineNotifyAsset;
class USpineSkeletonDataAsset;

USTRUCT(BlueprintType)
struct FInventoryItemCostumeData : public FInventoryItemGrantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USpineNotifyAsset> NotifyAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USpineAtlasAsset> AtlasAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USpineSkeletonDataAsset> SkeletonDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerCostumeFX, TSoftObjectPtr<UNiagaraSystem>> CostumeFXs;
    
    ZION_API FInventoryItemCostumeData();
};

