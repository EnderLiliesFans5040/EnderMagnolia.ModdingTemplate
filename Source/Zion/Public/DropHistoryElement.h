#pragma once
#include "CoreMinimal.h"
#include "DropSourceID.h"
#include "DropHistoryElement.generated.h"

USTRUCT(BlueprintType)
struct FDropHistoryElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropSourceID DropSourceID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DropTime;
    
    ZION_API FDropHistoryElement();
};

