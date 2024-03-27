#pragma once
#include "CoreMinimal.h"
#include "PlayerStatsSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperiencePoints;
    
    ZION_API FPlayerStatsSaveData();
};

