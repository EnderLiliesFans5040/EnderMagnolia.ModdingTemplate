#include "CharacterZion.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "RenderLayerComponent.h"
#include "SpineBoneComponent.h"
#include "SpineRootMotionComponent.h"
#include "SpineSkeletonAnimationExComponent.h"
#include "SpineMeshMaskComponent.h"
#include "SpineSkeletonRendererComponent.h"
#include "AbilityComponent.h"
#include "CollisionComponent.h"
#include "CommandComponent.h"
#include "DeathComponent.h"
#include "FXComponent.h"
#include "HitStopComponent.h"
#include "InputBufferComponent.h"
#include "KnockbackComponent.h"
#include "LocomotionComponent.h"
#include "ShakeComponent.h"
#include "SoundComponent.h"
#include "SpineAnimatorComponent.h"
#include "SpineColorComponent.h"
#include "SpineHighlightComponent.h"
#include "StatBurnComponent.h"
#include "StatFreezeComponent.h"
#include "StatHPComponent.h"
#include "StatShockComponent.h"
#include "StateComponent.h"
#include "StatusEffectComponent.h"
#include "UIComponent.h"
#include "VisualPivotModifierComponent.h"
#include "ZionCharacterMovementComponent.h"
#include "ZionInputComponent.h"

ACharacterZion::ACharacterZion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UZionCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this)) = NULL;
    this->CoyoteTime = 0.50f;
    this->bInstantKillOnSwim = false;
    this->PostParriedStatesDuration = 1.00f;
    this->PostEventStatesDuration = 1.00f;
    this->ZionInputComponent = CreateDefaultSubobject<UZionInputComponent>(TEXT("ZionInput"));
    this->InputBufferComponent = CreateDefaultSubobject<UInputBufferComponent>(TEXT("InputBuffer"));
    this->LocomotionComponent = CreateDefaultSubobject<ULocomotionComponent>(TEXT("Locomotion"));
    this->CommandComponent = CreateDefaultSubobject<UCommandComponent>(TEXT("Command"));
    this->StateComponent = CreateDefaultSubobject<UStateComponent>(TEXT("State"));
    this->AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));
    this->CollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("Collision"));
    this->StatHPComponent = CreateDefaultSubobject<UStatHPComponent>(TEXT("StatHP"));
    this->KnockbackComponent = CreateDefaultSubobject<UKnockbackComponent>(TEXT("Knockback"));
    this->HitStopComponent = CreateDefaultSubobject<UHitStopComponent>(TEXT("HitStop"));
    this->ShakeComponent = CreateDefaultSubobject<UShakeComponent>(TEXT("Shake"));
    this->DeathComponent = CreateDefaultSubobject<UDeathComponent>(TEXT("Death"));
    this->UIComponent = CreateDefaultSubobject<UUIComponent>(TEXT("UI"));
    this->RenderLayerComponent = CreateDefaultSubobject<URenderLayerComponent>(TEXT("RenderLayer"));
    this->SoundComponent = CreateDefaultSubobject<USoundComponent>(TEXT("Sound"));
    this->VisualPivotSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("VisualPivot"));
    this->VisualPivotModifierComponent = CreateDefaultSubobject<UVisualPivotModifierComponent>(TEXT("VisualPivotModifier"));
    this->SpineRendererComponent = CreateDefaultSubobject<USpineSkeletonRendererComponent>(TEXT("SpineRenderer"));
    this->SpineMaskRendererComponent = CreateDefaultSubobject<USpineMeshMaskComponent>(TEXT("SpineHighlightMask"));
    this->SpineAnimationComponent = CreateDefaultSubobject<USpineSkeletonAnimationExComponent>(TEXT("SpineAnimation"));
    this->SpineAnimatorComponent = CreateDefaultSubobject<USpineAnimatorComponent>(TEXT("SpineAnimator"));
    this->SpineBoneComponent = CreateDefaultSubobject<USpineBoneComponent>(TEXT("SpineBone"));
    this->SpineHighlightComponent = CreateDefaultSubobject<USpineHighlightComponent>(TEXT("SpineHighlight"));
    this->FXComponent = CreateDefaultSubobject<UFXComponent>(TEXT("FX"));
    this->SpineRootMotionComponent = CreateDefaultSubobject<USpineRootMotionComponent>(TEXT("SpineRootMotion"));
    this->StatusEffectComponent = CreateDefaultSubobject<UStatusEffectComponent>(TEXT("StatusEffect"));
    this->StatBurnComponent = CreateDefaultSubobject<UStatBurnComponent>(TEXT("StatBurn"));
    this->StatFreezeComponent = CreateDefaultSubobject<UStatFreezeComponent>(TEXT("StatFreeze"));
    this->StatShockComponent = CreateDefaultSubobject<UStatShockComponent>(TEXT("StatShock"));
    this->SpineColorComponent = CreateDefaultSubobject<USpineColorComponent>(TEXT("SpineColorComponent"));
    this->ZionCharacterMovement = NULL;
    this->DebugDisplayComponent = NULL;
    this->VisualPivotSceneComponent->SetupAttachment(RootComponent);
    this->SpineRendererComponent->SetupAttachment(VisualPivotSceneComponent);
    this->SpineMaskRendererComponent->SetupAttachment(SpineRendererComponent);
}

bool ACharacterZion::ShouldConsiderJumpAsWallGrab() const {
    return false;
}

bool ACharacterZion::ShouldConsiderJumpAsHookAttach() const {
    return false;
}

bool ACharacterZion::ShouldConsiderJumpAsGrounded() const {
    return false;
}

bool ACharacterZion::ShouldConsiderJumpAsAirborne() const {
    return false;
}

void ACharacterZion::ResetJumpCount() {
}

void ACharacterZion::OnReceivedDamage(AActor* Source, int32 Value) {
}



bool ACharacterZion::IsInEvent() const {
    return false;
}

UZionCharacterMovementComponent* ACharacterZion::GetZionCharacterMovement() const {
    return NULL;
}

UCollisionComponent* ACharacterZion::GetCollisionComponent() const {
    return NULL;
}

USceneComponent* ACharacterZion::GetCameraTarget_Implementation() const {
    return NULL;
}


