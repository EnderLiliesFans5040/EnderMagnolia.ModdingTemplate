#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpineMeshTangent.generated.h"

USTRUCT(BlueprintType)
struct FSpineMeshTangent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TangentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipTangentY;
    
    SPINEMESHPLUGIN_API FSpineMeshTangent();
};

