#pragma once
#include "CoreMinimal.h"
#include "DropHistoryElement.h"
#include "DropSystemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDropSystemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDropHistoryElement> History;
    
    ZION_API FDropSystemSaveData();
};

