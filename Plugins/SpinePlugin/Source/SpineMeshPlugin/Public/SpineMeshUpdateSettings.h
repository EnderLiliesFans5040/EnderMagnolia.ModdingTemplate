#pragma once
#include "CoreMinimal.h"
#include "SpineMeshUpdateSettings.generated.h"

USTRUCT(BlueprintType)
struct FSpineMeshUpdateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatePositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateUVData;
    
    SPINEMESHPLUGIN_API FSpineMeshUpdateSettings();
};

