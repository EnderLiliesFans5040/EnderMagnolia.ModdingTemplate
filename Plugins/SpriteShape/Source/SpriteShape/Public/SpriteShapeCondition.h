#pragma once
#include "CoreMinimal.h"
#include "SpriteShapeCondition.generated.h"

USTRUCT(BlueprintType)
struct FSpriteShapeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngle;
    
    SPRITESHAPE_API FSpriteShapeCondition();
};

