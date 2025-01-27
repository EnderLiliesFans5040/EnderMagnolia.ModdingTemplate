#pragma once
#include "CoreMinimal.h"
#include "EEffectGuardMaterialType.h"
#include "SoundDataGroup.h"
#include "GuardMaterialToSoundMap.generated.h"

USTRUCT(BlueprintType)
struct FGuardMaterialToSoundMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectGuardMaterialType, FSoundDataGroup> GuardMaterials;
    
    ZION_API FGuardMaterialToSoundMap();
};

