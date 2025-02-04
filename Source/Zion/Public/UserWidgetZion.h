#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "EBuildPlatformType.h"
#include "FooterData.h"
#include "RichTextInputElement.h"
#include "UserWidgetZionBase.h"
#include "UserWidgetZionDelegateDelegate.h"
#include "UserWidgetZion.generated.h"

class UFMODEvent;
class UNativeWidgetHost;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetZion : public UUserWidgetZionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserWidgetZionDelegate OnDestruct;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseHoverFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnChildFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptRepeatKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNativeWidgetHost* WidgetHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnConfirmFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnCancelFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnNavigationFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFooterData> FooterEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExplanationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBuildPlatformType, FText> ExplanationTextPerPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRichTextInputElement> ExplanationInputElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExplanationStringElements;
    
public:
    UUserWidgetZion();

protected:
    UFUNCTION(BlueprintCallable)
    void SetFocusToLastFocusedChild(UWidget* FallbackWidget);
    
    UFUNCTION(BlueprintCallable)
    void ResetLastFocusedChild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlaySoundEvent(UFMODEvent* SoundEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressUp(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressRight(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressPreviousAlt(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressPrevious(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressNextAlt(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressNext(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressLeft(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressDown(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressContextAlt(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressContext(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressConfirm(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnPressCancel(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnDownRight(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnDownPreviousAlt(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnDownPrevious(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnDownNextAlt(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnDownNext(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply OnDownLeft(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChildFocused(UNativeWidgetHost* FocusedWidgetHost, const FFocusEvent& FocusEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFocusPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusedFromMouse() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeExplanationText(const FText& InExplanationText);
    
};

