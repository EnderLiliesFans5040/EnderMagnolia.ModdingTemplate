#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "EBreakType.h"
#include "BreakDropData.generated.h"

USTRUCT(BlueprintType)
struct FBreakDropData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBreakType, FDataTableRowHandle> DropForBreakTypes;
    
    ZION_API FBreakDropData();
};

