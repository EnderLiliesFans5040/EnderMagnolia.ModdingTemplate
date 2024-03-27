#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EMovementModeCustom.h"
#include "MovementModeData.generated.h"

USTRUCT(BlueprintType)
struct FMovementModeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementModeCustom MovementModeCustom;
    
    ZION_API FMovementModeData();
};
FORCEINLINE uint32 GetTypeHash(const FMovementModeData) { return 0; }

