#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "SpineAnimationDefinition.h"
#include "SpiritSummonParameters.h"
#include "Templates/SubclassOf.h"
#include "WallGrabComponent.generated.h"

class ACharacter;
class ACharacterZionSpirit;
class UState;
class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWallGrabComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalityForWallGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToWallGrabOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopOffsetForLineCast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BottomOffsetForLineCast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZVelocityForGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalSpaceWallGrabLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> IgnoreWallGrabStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> WallGrabStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> TransitionToWallDashBumpingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> SpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritSummonParameters SummonParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> WallGrabStartAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> WallDashBumpingAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSpineAnimationDefinition> AnimationDataForNames;
    
public:
    UWallGrabComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshWallGrab();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWallGrab();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartAnimation(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveBlocked(const FHitResult& Impact);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallOnRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbingWall() const;
    
};

