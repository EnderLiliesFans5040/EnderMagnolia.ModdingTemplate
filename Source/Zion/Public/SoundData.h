#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoundData.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalSpaceOffset;
    
    ZION_API FSoundData();
};

