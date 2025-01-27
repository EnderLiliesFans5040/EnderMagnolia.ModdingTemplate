#pragma once
#include "CoreMinimal.h"
#include "DataTableRowHandleKey.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FDataTableRowHandleKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    ZION_API FDataTableRowHandleKey();
};
FORCEINLINE uint32 GetTypeHash(const FDataTableRowHandleKey) { return 0; }

