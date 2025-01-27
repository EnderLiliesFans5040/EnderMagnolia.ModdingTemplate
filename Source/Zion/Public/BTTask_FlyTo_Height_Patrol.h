#pragma once
#include "CoreMinimal.h"
#include "BTTask_FlyTo_Height.h"
#include "BTTask_FlyTo_Height_Patrol.generated.h"

UCLASS(Blueprintable)
class UBTTask_FlyTo_Height_Patrol : public UBTTask_FlyTo_Height {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveHeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveHeightMax;
    
public:
    UBTTask_FlyTo_Height_Patrol();

};

