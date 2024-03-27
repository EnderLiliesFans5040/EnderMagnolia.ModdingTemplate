#pragma once
#include "CoreMinimal.h"
#include "MapRestPointData.generated.h"

USTRUCT(BlueprintType)
struct FMapRestPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    ZION_API FMapRestPointData();
};

