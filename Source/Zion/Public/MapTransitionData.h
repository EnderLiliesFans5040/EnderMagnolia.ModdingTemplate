#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MapTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FMapTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GameMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    ZION_API FMapTransitionData();
};

