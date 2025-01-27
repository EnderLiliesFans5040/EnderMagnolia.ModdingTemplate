#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AbilityData.h"
#include "EDashChargeAnimationMode.h"
#include "EDashChargeMode.h"
#include "EDashChargeOrientationMode.h"
#include "SoundData.h"
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
    EDashChargeMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
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
    TArray<FSpineAnimationDefinition> DefaultSpiritAnimations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDashChargeAnimationMode SpiritAnimationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSpineAnimationDefinition> AnimationDataForNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition SpiritAnimation_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition SpiritAnimation_UpLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition SpiritAnimation_Lateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition SpiritAnimation_DownLateral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition SpiritAnimation_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TEnumAsByte<EMovementMode>> ValidMovementModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData DashChargeSoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData DashChargeLoopSoundData;
    
    ZION_API FDashChargeSettings();
};

