#pragma once
#include "CoreMinimal.h"
#include "BTTaskZion.h"
#include "BTTask_SpineColor.generated.h"

UCLASS(Abstract, Blueprintable)
class UBTTask_SpineColor : public UBTTaskZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpDuration;
    
public:
    UBTTask_SpineColor();

};

