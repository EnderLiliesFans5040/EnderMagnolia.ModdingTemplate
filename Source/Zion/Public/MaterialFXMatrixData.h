#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActionToFXMap.h"
#include "EEffectAttackType.h"
#include "MaterialFXMatrixData.generated.h"

UCLASS(Blueprintable)
class UMaterialFXMatrixData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectAttackType, FActionToFXMap> FXMatrix;
    
    UMaterialFXMatrixData();

};

