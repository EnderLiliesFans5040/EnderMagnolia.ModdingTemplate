#pragma once
#include "CoreMinimal.h"
#include "BTTaskZion.h"
#include "SpineAnimationDefinition.h"
#include "BTTask_SetFacing.generated.h"

UCLASS(Abstract, Blueprintable)
class UBTTask_SetFacing : public UBTTaskZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnAnimations;
    
public:
    UBTTask_SetFacing();

};

