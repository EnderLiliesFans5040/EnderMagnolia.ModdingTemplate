#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EDashChargeOrientationMode.h"
#include "SpineAnimationDefinition.h"
#include "SpiritSummonParameters.h"
#include "Templates/SubclassOf.h"
#include "DashChargeSettings.generated.h"

class ACharacterZionSpirit;

USTRUCT(BlueprintType)
struct FDashChargeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> SpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritSummonParameters SummonParameters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDashChargeOrientationMode OrientationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOrientationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition RideStartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSpineAnimationDefinition> AnimationDataForNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TEnumAsByte<EMovementMode>> ValidMovementModes;
    
    ZION_API FDashChargeSettings();
};

