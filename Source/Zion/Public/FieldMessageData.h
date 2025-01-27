#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "FieldMessageData.generated.h"

USTRUCT(BlueprintType)
struct FFieldMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> ActorAnimations;
    
    ZION_API FFieldMessageData();
};

