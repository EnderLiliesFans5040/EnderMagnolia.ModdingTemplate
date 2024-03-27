#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "EventActorInterface.h"
#include "EventActorTalkInterface.h"
#include "CharacterAbilityDelegateDelegate.h"
#include "CharacterAbilityFullDelegateDelegate.h"
#include "CharacterDynamicDelegateDelegate.h"
#include "CharacterNotifyInterface.h"
#include "TargetPivotProviderInterface.h"
#include "Templates/SubclassOf.h"
#include "VisualPivotProviderInterface.h"
#include "CharacterZion.generated.h"

class AAbility;
class AActor;
class UAbilityComponent;
class UCollisionComponent;
class UCommandComponent;
class UDeathComponent;
class UDebugDisplayComponent;
class UFXComponent;
class UHitStopComponent;
class UInputBufferComponent;
class UKnockbackComponent;
class ULocomotionComponent;
class URenderLayerComponent;
class USceneComponent;
class UShakeComponent;
class USoundComponent;
class USpineAnimatorComponent;
class USpineBoneComponent;
class USpineColorComponent;
class USpineHighlightComponent;
class USpineMeshMaskComponent;
class USpineRootMotionComponent;
class USpineSkeletonAnimationExComponent;
class USpineSkeletonRendererComponent;
class UStatBurnComponent;
class UStatFreezeComponent;
class UStatHPComponent;
class UStatShockComponent;
class UState;
class UStateComponent;
class UStatusEffectComponent;
class UUIComponent;
class UVisualPivotModifierComponent;
class UZionCharacterMovementComponent;
class UZionInputComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API ACharacterZion : public ACharacter, public IEventActorInterface, public IEventActorTalkInterface, public ICharacterNotifyInterface, public IVisualPivotProviderInterface, public ITargetPivotProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityFullDelegate OnGotAbilityAppliedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityFullDelegate OnGotAbilityAppliedPostActivateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityDelegate OnGuardedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityDelegate OnParriedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDynamicDelegate OnDodgeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDynamicDelegate OnEventStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDynamicDelegate OnEventStoppedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoyoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInstantKillOnSwim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> PostParriedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostParriedStatesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> PostEventStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostEventStatesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TalkLocationOffset;
    
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
    UStatHPComponent* StatHPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKnockbackComponent* KnockbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitStopComponent* HitStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShakeComponent* ShakeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIComponent* UIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URenderLayerComponent* RenderLayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USoundComponent* SoundComponent;
    
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
    USpineHighlightComponent* SpineHighlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXComponent* FXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineRootMotionComponent* SpineRootMotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusEffectComponent* StatusEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatBurnComponent* StatBurnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatFreezeComponent* StatFreezeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatShockComponent* StatShockComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineColorComponent* SpineColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZionCharacterMovementComponent* ZionCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugDisplayComponent* DebugDisplayComponent;
    
public:
    ACharacterZion(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldConsiderJumpAsWallGrab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldConsiderJumpAsHookAttach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldConsiderJumpAsGrounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldConsiderJumpAsAirborne() const;
    
    UFUNCTION(BlueprintCallable)
    void ResetJumpCount();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedDamage(AActor* Source, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParried(AAbility* Ability, AActor* Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGuarded(AAbility* Ability, AActor* Source);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEvent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UZionCharacterMovementComponent* GetZionCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCollisionComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetCameraTarget() const;
    

    // Fix for true pure virtual functions not being implemented
};

