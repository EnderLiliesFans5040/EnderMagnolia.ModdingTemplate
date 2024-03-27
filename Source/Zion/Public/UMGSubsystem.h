#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputCoreTypes.h"
#include "EUIInputType.h"
#include "UMGSubsystemSubtitleDelegateDelegate.h"
#include "UMGSubsystem.generated.h"

class UObject;
class UUMGSubsystem;
class UUserWidget;
class UUserWidgetExplanation;
class UUserWidgetFooter;

UCLASS(Blueprintable)
class UUMGSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUMGSubsystemSubtitleDelegate OnSetSubtitle;
    
    UUMGSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockNavigation(UUserWidget* LockSource);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveFooter(UUserWidgetFooter* Footer);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveExplanationWidget(UUserWidgetExplanation* ExplanationWidget);
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultBindings(bool bGamepad);
    
    UFUNCTION(BlueprintCallable)
    void ResetNavigationLocks();
    
    UFUNCTION(BlueprintCallable)
    void RemapKey(EUIInputType UIInputType, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void RefreshNavigationLockState();
    
    UFUNCTION(BlueprintCallable)
    void LockNavigation(UUserWidget* LockSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusingFromMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetFooter* GetActiveFooter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetExplanation* GetActiveExplanationWidget() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUMGSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveFooter();
    
};

