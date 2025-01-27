#pragma once
#include "CoreMinimal.h"
#include "CompressedRenderTarget.h"
#include "FogOfWarSaveData.generated.h"

USTRUCT(BlueprintType)
struct FFogOfWarSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCompressedRenderTarget> MapFogOfWarBuffers;
    
    ZION_API FFogOfWarSaveData();
};

