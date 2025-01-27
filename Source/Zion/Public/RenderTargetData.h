#pragma once
#include "CoreMinimal.h"
#include "RenderTargetData.generated.h"

class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FRenderTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapAreaTextureMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* FogOfWarMaskRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* FogOfWarBlockerRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ZonesClearedMaskRT;
    
    ZION_API FRenderTargetData();
};

