#pragma once
#include "CoreMinimal.h"
#include "Drop.h"
#include "DropGroup.generated.h"

USTRUCT(BlueprintType)
struct FDropGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDrop> Drops;
    
    ZION_API FDropGroup();
};

