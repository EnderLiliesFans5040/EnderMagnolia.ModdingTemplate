#pragma once
#include "CoreMinimal.h"
#include "SoundData.h"
#include "SoundDataGroup.generated.h"

USTRUCT(BlueprintType)
struct FSoundDataGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData Default;
    
    ZION_API FSoundDataGroup();
};

