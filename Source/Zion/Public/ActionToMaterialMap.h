#pragma once
#include "CoreMinimal.h"
#include "EEffectActionType.h"
#include "MaterialToSoundMap.h"
#include "ActionToMaterialMap.generated.h"

USTRUCT(BlueprintType)
struct FActionToMaterialMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectActionType, FMaterialToSoundMap> Actions;
    
    ZION_API FActionToMaterialMap();
};

