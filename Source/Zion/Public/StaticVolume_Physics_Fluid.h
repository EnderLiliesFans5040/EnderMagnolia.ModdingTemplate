#pragma once
#include "CoreMinimal.h"
#include "StaticVolume_Physics.h"
#include "StaticVolume_Physics_Fluid.generated.h"

UCLASS(Blueprintable)
class AStaticVolume_Physics_Fluid : public AStaticVolume_Physics {
    GENERATED_BODY()
public:
    AStaticVolume_Physics_Fluid(const FObjectInitializer& ObjectInitializer);

};

