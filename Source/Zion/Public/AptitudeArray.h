#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.h"
#include "AptitudeArray.generated.h"

USTRUCT(BlueprintType)
struct FAptitudeArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAptitudeType> AllowedAptitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAptitudeType> NotAllowedAptitudes;
    
    ZION_API FAptitudeArray();
};

