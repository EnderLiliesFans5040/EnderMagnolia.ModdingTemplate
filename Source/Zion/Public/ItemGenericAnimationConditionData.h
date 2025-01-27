#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.h"
#include "ItemGenericAnimationSpiritLevelConditionData.h"
#include "ItemGenericAnimationConditionData.generated.h"

USTRUCT(BlueprintType)
struct FItemGenericAnimationConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemGenericAnimationSpiritLevelConditionData> SpiritLevelConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAptitudeType> RequiredAptitudes;
    
    ZION_API FItemGenericAnimationConditionData();
};

