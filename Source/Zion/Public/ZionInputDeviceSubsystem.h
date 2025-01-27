#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EInputStyle.h"
#include "InputDeviceDelegateDelegate.h"
#include "ZionInputDeviceSubsystem.generated.h"

UCLASS(Blueprintable)
class UZionInputDeviceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputDeviceDelegate OnGamepadConnectionChangedDelegate;
    
    UZionInputDeviceSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockActiveController(bool bResetLockCount);
    
    UFUNCTION(BlueprintCallable)
    void SetInputStyleGamepadOverride(EInputStyle NewInputStyleGamepadOverride);
    
    UFUNCTION(BlueprintCallable)
    void LockActiveController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyGamepadConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveControllerLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputStyle GetInputStyleGamepadOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputStyle GetInputStyle() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetActiveControllerID();
    
};

