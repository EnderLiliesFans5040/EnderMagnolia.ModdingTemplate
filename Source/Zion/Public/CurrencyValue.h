#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CurrencyValue.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ZION_API FCurrencyValue();
};

