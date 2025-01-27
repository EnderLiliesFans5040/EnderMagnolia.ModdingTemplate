#include "CharacterZionSpirit.h"
#include "Components/SceneComponent.h"
#include "RenderLayerComponent.h"
#include "SpineBoneComponent.h"
#include "SpineFXComponent.h"
#include "SpineRootMotionComponent.h"
#include "SpineSkeletonAnimationExComponent.h"
#include "SpineMeshMaskComponent.h"
#include "SpineSkeletonRendererComponent.h"
#include "AbilityComponent.h"
#include "CollisionComponent.h"
#include "CommandComponent.h"
#include "FactionComponent.h"
#include "FallThroughComponent.h"
#include "HitStopComponent.h"
#include "InputBufferComponent.h"
#include "LocomotionComponent.h"
#include "SpineAnimatorComponent.h"
#include "SpineHighlightComponent.h"
#include "SpiritStatsSnapshotComponent.h"
#include "StateComponent.h"
#include "VisualPivotModifierComponent.h"
#include "ZionCharacterMovementComponent.h"
#include "ZionInputComponent.h"

ACharacterZionSpirit::ACharacterZionSpirit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UZionCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->AIControllerClass = NULL;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this)) = NULL;
    this->bInjectSummonerMovementMode = true;
    this->DismissStates.AddDefaulted(1);
    this->SpiritCooldownClass = NULL;
    this->ZionInputComponent = CreateDefaultSubobject<UZionInputComponent>(TEXT("ZionInput"));
    this->InputBufferComponent = CreateDefaultSubobject<UInputBufferComponent>(TEXT("InputBuffer"));
    this->LocomotionComponent = CreateDefaultSubobject<ULocomotionComponent>(TEXT("Locomotion"));
    this->CommandComponent = CreateDefaultSubobject<UCommandComponent>(TEXT("Command"));
    this->StateComponent = CreateDefaultSubobject<UStateComponent>(TEXT("State"));
    this->AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));
    this->CollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("Collision"));
    this->FactionComponent = CreateDefaultSubobject<UFactionComponent>(TEXT("Faction"));
    this->HitStopComponent = CreateDefaultSubobject<UHitStopComponent>(TEXT("HitStop"));
    this->RenderLayerComponent = CreateDefaultSubobject<URenderLayerComponent>(TEXT("RenderLayer"));
    this->VisualPivotSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("VisualPivot"));
    this->VisualPivotModifierComponent = CreateDefaultSubobject<UVisualPivotModifierComponent>(TEXT("VisualPivotModifier"));
    this->SpineRendererComponent = CreateDefaultSubobject<USpineSkeletonRendererComponent>(TEXT("SpineRenderer"));
    this->SpineMaskRendererComponent = CreateDefaultSubobject<USpineMeshMaskComponent>(TEXT("SpineHighlightMask"));
    this->SpineAnimationComponent = CreateDefaultSubobject<USpineSkeletonAnimationExComponent>(TEXT("SpineAnimation"));
    this->SpineAnimatorComponent = CreateDefaultSubobject<USpineAnimatorComponent>(TEXT("SpineAnimator"));
    this->SpineBoneComponent = CreateDefaultSubobject<USpineBoneComponent>(TEXT("SpineBone"));
    this->SpineFXComponent = CreateDefaultSubobject<USpineFXComponent>(TEXT("SpineFX"));
    this->SpineRootMotionComponent = CreateDefaultSubobject<USpineRootMotionComponent>(TEXT("SpineRootMotion"));
    this->SpineHighlightComponent = CreateDefaultSubobject<USpineHighlightComponent>(TEXT("SpineHighlight"));
    this->SpiritStatsSnapshot = CreateDefaultSubobject<USpiritStatsSnapshotComponent>(TEXT("SpiritStatsSnapshot"));
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->ZionCharacterMovement = (UZionCharacterMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UZionCharacterMovementComponent*>(this);
    this->FallThroughComponent = CreateDefaultSubobject<UFallThroughComponent>(TEXT("FallThrough"));
    this->DebugDisplayComponent = NULL;
    this->InvokedByInputAction = NULL;
    this->InvokedByCommandSet = NULL;
    this->AIController = NULL;
    this->SpineMaskRendererComponent->SetupAttachment(SpineRendererComponent);
    this->SpineRendererComponent->SetupAttachment(VisualPivotSceneComponent);
    this->VisualPivotSceneComponent->SetupAttachment(RootComponent);
}

void ACharacterZionSpirit::SetActive(bool bNewActive) {
}









bool ACharacterZionSpirit::IsSummoned() const {
    return false;
}

bool ACharacterZionSpirit::IsActive() const {
    return false;
}

AActor* ACharacterZionSpirit::GetSummoner() const {
    return NULL;
}

void ACharacterZionSpirit::Dismiss(bool bInstant) {
}

void ACharacterZionSpirit::DelayedDismiss(float Delay) {
}


