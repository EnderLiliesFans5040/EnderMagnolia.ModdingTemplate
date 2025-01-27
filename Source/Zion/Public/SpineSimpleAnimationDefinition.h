#pragma once
#include "CoreMinimal.h"
#include "SpineSimpleAnimationDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSpineSimpleAnimationDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    ZION_API FSpineSimpleAnimationDefinition();
};

