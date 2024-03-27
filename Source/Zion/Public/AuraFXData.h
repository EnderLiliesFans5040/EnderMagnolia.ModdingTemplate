#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "EAuraFXDeactivateTiming.h"
#include "AuraFXData.generated.h"

USTRUCT(BlueprintType)
struct FAuraFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAuraFXDeactivateTiming DeactivateTiming;
    
    ZION_API FAuraFXData();
};

