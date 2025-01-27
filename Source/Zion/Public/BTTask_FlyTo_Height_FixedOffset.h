#pragma once
#include "CoreMinimal.h"
#include "BTTask_FlyTo_Height.h"
#include "BTTask_FlyTo_Height_FixedOffset.generated.h"

UCLASS(Blueprintable)
class UBTTask_FlyTo_Height_FixedOffset : public UBTTask_FlyTo_Height {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedHeightOffset;
    
public:
    UBTTask_FlyTo_Height_FixedOffset();

};

