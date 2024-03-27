#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemHandleCount.generated.h"

USTRUCT(BlueprintType)
struct FItemHandleCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    ZION_API FItemHandleCount();
};

