#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkillMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FSkillMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    ZION_API FSkillMaterialData();
};

