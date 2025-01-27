#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Curves/CurveFloat.h"
#include "SpineFXData.h"
#include "CharacterNotifyInterface.h"
#include "Templates/SubclassOf.h"
#include "VisualPivotProviderInterface.h"
#include "CharacterZionSpirit.generated.h"

class AAIControllerZion;
class AActor;
class ASpiritCooldown;
class UAbilityComponent;
class UCollisionComponent;
class UCommandComponent;
class UCommandSet;
class UDebugDisplayComponent;
class UFactionComponent;
class UFallThroughComponent;
class UHitStopComponent;
class UInputAction;
class UInputBufferComponent;
class ULocomotionComponent;
class URenderLayerComponent;
class USceneComponent;
class USpineAnimatorComponent;
class USpineBoneComponent;
class USpineFXComponent;
class USpineHighlightComponent;
class USpineMeshMaskComponent;
class USpineRootMotionComponent;
class USpineSkeletonAnimationExComponent;
class USpineSkeletonRendererComponent;
class USpiritStatsSnapshotComponent;
class UState;
class UStateComponent;
class UVisualPivotModifierComponent;
class UZionCharacterMovementComponent;
class UZionInputComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API ACharacterZionSpirit : public ACharacter, public ICharacterNotifyInterface, public IVisualPivotProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FadeInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FadeInFilterCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FadeOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FadeInFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FadeOutFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInjectSummonerMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> DismissStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpiritCooldown> SpiritCooldownClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZionInputComponent* ZionInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputBufferComponent* InputBufferComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommandComponent* CommandComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitStopComponent* HitStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URenderLayerComponent* RenderLayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* VisualPivotSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVisualPivotModifierComponent* VisualPivotModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* SpineRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineMeshMaskComponent* SpineMaskRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationExComponent* SpineAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineAnimatorComponent* SpineAnimatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineBoneComponent* SpineBoneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineFXComponent* SpineFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineRootMotionComponent* SpineRootMotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineHighlightComponent* SpineHighlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpiritStatsSnapshotComponent* SpiritStatsSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZionCharacterMovementComponent* ZionCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFallThroughComponent* FallThroughComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugDisplayComponent* DebugDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputAction* InvokedByInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandSet* InvokedByCommandSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIControllerZion* AIController;
    
public:
    ACharacterZionSpirit(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleport(const FVector& From, const FVector& To);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSummon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreSummon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocationBlendStart(const FVector& StartLocation, const FVector& EndLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocationBlendEnd(const FVector& StartLocation, const FVector& EndLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDismiss();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSummoned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSummoner() const;
    
    UFUNCTION(BlueprintCallable)
    void Dismiss(bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void DelayedDismiss(float Delay);
    

    // Fix for true pure virtual functions not being implemented
};

