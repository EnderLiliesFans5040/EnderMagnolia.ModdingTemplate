#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EFacingType.h"
#include "LocomotionEventDelegate.h"
#include "LocomotionComponent.generated.h"

class UInputAction;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API ULocomotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionEvent OnFacingChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* DashInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVelocityForFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImmersionDepthForLateralOnly;
    
public:
    ULocomotionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleFacing();
    
    UFUNCTION(BlueprintCallable)
    void SetUpVector(const FVector& NewUpVector);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateFacing(bool bNewUpdateFacing);
    
    UFUNCTION(BlueprintCallable)
    void SetFacingFromVector(const FVector& Vector);
    
    UFUNCTION(BlueprintCallable)
    void SetFacing(EFacingType FacingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetWorldUpToUpRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUpdateFacing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFacingType GetFacing() const;
    
};

