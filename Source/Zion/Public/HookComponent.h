#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "EHookType.h"
#include "MovementModeData.h"
#include "Templates/SubclassOf.h"
#include "HookComponent.generated.h"

class AActor;
class AHookPoint;
class UPrimitiveComponent;
class USphereComponent;
class UState;
class UUserWidgetWorldSpace;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHookComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeSinceLastRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHookDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachPointZLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HookPointBelowActorDistanceWeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> InvalidStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> ValidMovementModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpace> WorldSpaceHookTargetClass_Point;
    
public:
    UHookComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockHook();
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideHookWorldLocation(const FVector& NewHookWorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideHookPoint(AHookPoint* NewHookPoint);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideHookWorldLocation();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideHookPoint();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnlockHook(AHookPoint* HookPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockHook(AHookPoint* HookPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAptitudesChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockCurrentHook();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHookWorldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTargetHook(EHookType HookType) const;
    
};

