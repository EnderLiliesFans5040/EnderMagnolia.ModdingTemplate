#pragma once
#include "CoreMinimal.h"
#include "CustomRuntimeFloatCurve.h"
#include "ECurrencyType.h"
#include "EValueType.h"
#include "CurrencyTransactionInfos.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyTransactionInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EValueType CostType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FixedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomRuntimeFloatCurve ValueCurve;
    
    ZION_API FCurrencyTransactionInfos();
};

