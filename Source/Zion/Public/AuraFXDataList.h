#pragma once
#include "CoreMinimal.h"
#include "AuraFXData.h"
#include "AuraFXDataList.generated.h"

USTRUCT(BlueprintType)
struct FAuraFXDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAuraFXData> AuraFXList;
    
    ZION_API FAuraFXDataList();
};

