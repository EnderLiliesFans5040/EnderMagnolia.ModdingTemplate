#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EnemyRepulsionData.h"
#include "EnemyRepulsionSetupData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyRepulsionSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference RepulsionColliderReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyRepulsionData RepulsionData;
    
    ZION_API FEnemyRepulsionSetupData();
};

