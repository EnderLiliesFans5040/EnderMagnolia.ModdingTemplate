#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SpriteShapeSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPRITESHAPE_API USpriteShapeSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    USpriteShapeSplineComponent(const FObjectInitializer& ObjectInitializer);

};

