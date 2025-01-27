#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InputBindingData.generated.h"

USTRUCT(BlueprintType)
struct FInputBindingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Mapping_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Mapping_Key;
    
    ZION_API FInputBindingData();
};

