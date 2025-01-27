#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpineSimpleAnimationDefinition.h"
#include "SpineActor.generated.h"

class USceneComponent;
class USpineSkeletonAnimationExComponent;
class USpineSkeletonRendererComponent;

UCLASS(Abstract, Blueprintable)
class ASpineActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationExComponent* SpineAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* SpineRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushAnimationsOnActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDeactivate;
    
public:
    ASpineActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivate();
    
public:
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate(const TArray<FSpineSimpleAnimationDefinition>& AnimationDefinitions);
    
};

