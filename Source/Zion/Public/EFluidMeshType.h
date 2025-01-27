#pragma once
#include "CoreMinimal.h"
#include "EFluidMeshType.generated.h"

UENUM(BlueprintType)
enum class EFluidMeshType : uint8 {
    None,
    XY,
    YZ,
    XYZ,
};

