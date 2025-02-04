#include "CharacterZionNPC.h"
#include "Components/SceneComponent.h"
#include "RenderLayerComponent.h"
#include "SpineBoneComponent.h"
#include "SpineFXComponent.h"
#include "SpineRootMotionComponent.h"
#include "SpineSkeletonAnimationExComponent.h"
#include "SpineMeshMaskComponent.h"
#include "SpineSkeletonRendererComponent.h"
#include "CollisionComponent.h"
#include "FactionComponent.h"
#include "LocomotionComponent.h"
#include "SpineAnimatorComponent.h"
#include "SpineHighlightComponent.h"
#include "VisualPivotModifierComponent.h"
#include "ZionCharacterMovementComponent.h"

ACharacterZionNPC::ACharacterZionNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UZionCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->AIControllerClass = NULL;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this)) = NULL;
    this->LocomotionComponent = CreateDefaultSubobject<ULocomotionComponent>(TEXT("Locomotion"));
    this->CollisionComponent = CreateDefaultSubobject<UCollisionComponent>(TEXT("Collision"));
    this->FactionComponent = CreateDefaultSubobject<UFactionComponent>(TEXT("Faction"));
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
    FProperty* p_CharacterMovement_Prior = GetClass()->FindPropertyByName("CharacterMovement");
    this->ZionCharacterMovement = (UZionCharacterMovementComponent*)*p_CharacterMovement_Prior->ContainerPtrToValuePtr<UZionCharacterMovementComponent*>(this);
    this->DebugDisplayComponent = NULL;
    this->SpineMaskRendererComponent->SetupAttachment(SpineRendererComponent);
    this->SpineRendererComponent->SetupAttachment(VisualPivotSceneComponent);
    this->VisualPivotSceneComponent->SetupAttachment(RootComponent);
}

void ACharacterZionNPC::SetIdleOverrideAnimations(const TArray<FSpineAnimationDefinition>& NewIdleOverrideAnimations) {
}


