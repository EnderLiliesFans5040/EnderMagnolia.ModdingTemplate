#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIKBoneDriver.h"
#include "IKBonesComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIKBonesComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EIKBoneDriver, USceneComponent*> CachedBoneDrivers;
    
public:
    UIKBonesComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetIKBone(EIKBoneDriver IKBoneDriver, bool bResetIKConstraint);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetIKBone(EIKBoneDriver IKBoneDriver);
    
};

