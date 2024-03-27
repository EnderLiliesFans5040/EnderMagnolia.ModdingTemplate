#pragma once
#include "CoreMinimal.h"
#include "DecoratorNearGroundDirectionData.generated.h"

USTRUCT(BlueprintType)
struct FDecoratorNearGroundDirectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCheckDistance;
    
    ZION_API FDecoratorNearGroundDirectionData();
};

