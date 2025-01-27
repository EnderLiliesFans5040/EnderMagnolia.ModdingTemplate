#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "AnimationDefinitionList.generated.h"

USTRUCT(BlueprintType)
struct FAnimationDefinitionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> AnimationDefinitions;
    
    ZION_API FAnimationDefinitionList();
};

