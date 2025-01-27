#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECommonOperator.h"
#include "ItemGenericAnimationSpiritLevelConditionData.generated.h"

USTRUCT(BlueprintType)
struct FItemGenericAnimationSpiritLevelConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonOperator ConditionOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SpiritRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpiritLevel;
    
    ZION_API FItemGenericAnimationSpiritLevelConditionData();
};

