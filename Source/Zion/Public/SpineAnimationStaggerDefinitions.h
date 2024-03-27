#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "SpineAnimationStaggerDefinitions.generated.h"

USTRUCT(BlueprintType)
struct FSpineAnimationStaggerDefinitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> Stagger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> Recovery;
    
    ZION_API FSpineAnimationStaggerDefinitions();
};

