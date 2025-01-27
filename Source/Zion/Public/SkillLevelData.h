#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventoryItemUpgradeInfo.h"
#include "SkillData.h"
#include "SkillMaterialData.h"
#include "SkillLevelData.generated.h"

USTRUCT(BlueprintType)
struct FSkillLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillData SkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillData SpecialSkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillMaterialData> UnlockMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItemUpgradeInfo> UnlockInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItemUpgradeInfo> UnlockSpecialInfos;
    
    ZION_API FSkillLevelData();
};

