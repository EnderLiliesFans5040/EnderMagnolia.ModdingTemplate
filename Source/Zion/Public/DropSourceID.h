#pragma once
#include "CoreMinimal.h"
#include "DropSourceID.generated.h"

USTRUCT(BlueprintType)
struct FDropSourceID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DropTag;
    
    ZION_API FDropSourceID();
};

