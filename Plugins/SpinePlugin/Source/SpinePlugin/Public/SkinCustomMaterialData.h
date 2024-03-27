#pragma once
#include "CoreMinimal.h"
#include "SkinCustomMaterialData.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FSkinCustomMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> atlasCustomMaterials;
    
    SPINEPLUGIN_API FSkinCustomMaterialData();
};

