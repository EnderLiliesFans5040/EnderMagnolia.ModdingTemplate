#pragma once
#include "CoreMinimal.h"
#include "EEffectMaterialType.h"
#include "SoundDataGroup.h"
#include "MaterialToSoundMap.generated.h"

USTRUCT(BlueprintType)
struct FMaterialToSoundMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectMaterialType, FSoundDataGroup> Materials;
    
    ZION_API FMaterialToSoundMap();
};

