#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeReleaseData.generated.h"

class UCommand;

USTRUCT(BlueprintType)
struct FChargeReleaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> CommandClasses;
    
    ZION_API FChargeReleaseData();
};

