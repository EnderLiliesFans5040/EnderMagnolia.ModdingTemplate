#pragma once
#include "CoreMinimal.h"
#include "TimedStateData.h"
#include "TimedStateData_Time.generated.h"

USTRUCT(BlueprintType)
struct FTimedStateData_Time : public FTimedStateData {
    GENERATED_BODY()
public:
    ZION_API FTimedStateData_Time();
};

