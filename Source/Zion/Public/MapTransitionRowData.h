#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MapTransitionData.h"
#include "MapTransitionRowData.generated.h"

USTRUCT(BlueprintType)
struct FMapTransitionRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapTransitionData> TransitionSpawnPoints;
    
    ZION_API FMapTransitionRowData();
};

