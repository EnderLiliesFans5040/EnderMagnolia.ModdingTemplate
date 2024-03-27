#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "EEffectActionType.h"
#include "ActionToFXMap.generated.h"

USTRUCT(BlueprintType)
struct FActionToFXMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectActionType, FSpineFXData> Actions;
    
    ZION_API FActionToFXMap();
};

