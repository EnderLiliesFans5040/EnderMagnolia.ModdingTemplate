#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpiritAutoComponent.generated.h"

class ACharacterZionSpirit;
class UCommandComponent;
class UCommandSet;
class UFollowTargetComponent;
class ULocomotionComponent;
class USpineAnimatorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpiritAutoComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacterZionSpirit* SpiritOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFollowTargetComponent* FollowTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineAnimatorComponent* AnimatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommandComponent* CommandComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandSet* AutoCommandSet;
    
public:
    USpiritAutoComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSummonerFacingChange();
    
    UFUNCTION(BlueprintCallable)
    void OnSummonerDodge();
    
    UFUNCTION(BlueprintCallable)
    void OnCommandQueueCleared();
    
};

