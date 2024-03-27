#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AssistVisual.generated.h"

class UFollowTargetComponent;
class USceneComponent;
class USpineSkeletonAnimationExComponent;
class USpineSkeletonRendererComponent;

UCLASS(Abstract, Blueprintable)
class AAssistVisual : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* SpineRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationExComponent* SpineAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowTargetComponent* FollowTarget;
    
public:
    AAssistVisual(const FObjectInitializer& ObjectInitializer);

};

