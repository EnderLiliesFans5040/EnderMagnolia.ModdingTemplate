#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventBlackboardInit.generated.h"

USTRUCT(BlueprintType)
struct FEventBlackboardInit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> Names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Booleans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Integers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDataTableRowHandle> RowHandles;
    
    EVENTSYSTEM_API FEventBlackboardInit();
};

