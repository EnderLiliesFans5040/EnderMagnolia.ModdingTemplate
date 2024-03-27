#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActionToMaterialMap.h"
#include "EEffectAttackType.h"
#include "GuardMaterialToSoundMap.h"
#include "SoundDataGroup.h"
#include "MaterialSEMatrixData.generated.h"

UCLASS(Blueprintable)
class UMaterialSEMatrixData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectAttackType, FActionToMaterialMap> SEMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectAttackType, FGuardMaterialToSoundMap> SEGuards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundDataGroup FallbackSoundDataGroup;
    
    UMaterialSEMatrixData();

};

