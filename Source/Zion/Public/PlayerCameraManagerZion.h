#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/PlayerCameraManager.h"
#include "Templates/SubclassOf.h"
#include "PlayerCameraManagerZion.generated.h"

class AGameplayCamera;
class APlayerCameraManagerZion;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable, NonTransient)
class APlayerCameraManagerZion : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameplayCamera> GameplayCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MainMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* BlackBordersMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BlackBorderPostProcessMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateAspectRatioLock;
    
public:
    APlayerCameraManagerZion(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetViewTargetToGameplayCamera(FViewTargetTransitionParams ViewTargetTransitionParams, bool bInterruptOnGoingBlend);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameplayCamera* GetGameplayCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetActiveCameraClampBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCameraManagerZion* Get(const UObject* WorldContextObject, int32 PlayerControllerIndex);
    
};

