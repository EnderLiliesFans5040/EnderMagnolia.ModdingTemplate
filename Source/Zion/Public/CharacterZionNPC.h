#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "EventActorInterface.h"
#include "EventActorTalkInterface.h"
#include "SpineAnimationDefinition.h"
#include "VisualPivotProviderInterface.h"
#include "CharacterZionNPC.generated.h"

class UCollisionComponent;
class UDebugDisplayComponent;
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
class UVisualPivotModifierComponent;
class UZionCharacterMovementComponent;

UCLASS(Blueprintable)
class ACharacterZionNPC : public ACharacter, public IVisualPivotProviderInterface, public IEventActorInterface, public IEventActorTalkInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionComponent* CollisionComponent;
    
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
    UZionCharacterMovementComponent* ZionCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebugDisplayComponent* DebugDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> IdleOverrideAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TalkLocationOffset;
    
public:
    ACharacterZionNPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIdleOverrideAnimations(const TArray<FSpineAnimationDefinition>& NewIdleOverrideAnimations);
    

    // Fix for true pure virtual functions not being implemented
};

