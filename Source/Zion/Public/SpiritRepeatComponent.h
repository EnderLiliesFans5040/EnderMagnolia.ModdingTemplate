#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpiritRepeatDelegateDelegate.h"
#include "SpiritRepeatComponent.generated.h"

class AAbility;
class ACharacterZionSpirit;
class UAbilityComponent;
class UFollowTargetComponent;
class ULocomotionComponent;
class USpineAnimatorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpiritRepeatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritRepeatDelegate OnRepeatEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritRepeatDelegate OnRepeatDisable;
    
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
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAbility* ManualAbility;
    
public:
    USpiritRepeatComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSummonerFacingChange();
    
};

