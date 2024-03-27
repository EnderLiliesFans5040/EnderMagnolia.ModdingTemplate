#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "SpineAnimationTransitionDefinition.generated.h"

class USpineAnimationTransitionCondition;

USTRUCT(BlueprintType)
struct FSpineAnimationTransitionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpineAnimationTransitionCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> AnimationDefinitions;
    
    ZION_API FSpineAnimationTransitionDefinition();
};

