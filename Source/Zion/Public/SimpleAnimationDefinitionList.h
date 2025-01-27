#pragma once
#include "CoreMinimal.h"
#include "SpineSimpleAnimationDefinition.h"
#include "SimpleAnimationDefinitionList.generated.h"

USTRUCT(BlueprintType)
struct FSimpleAnimationDefinitionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineSimpleAnimationDefinition> AnimationDefinitions;
    
    ZION_API FSimpleAnimationDefinitionList();
};

