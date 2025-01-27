#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "ConfigureScopeDelegateDelegate.h"
#include "ConfigureSettingsDelegateDelegate.h"
#include "ESentryCrashedLastRun.h"
#include "ESentryLevel.h"
#include "SentrySubsystem.generated.h"

class USentryBeforeSendHandler;
class USentryBreadcrumb;
class USentryEvent;
class USentryId;
class USentryTraceSampler;
class USentryTransaction;
class USentryTransactionContext;
class USentryUser;
class USentryUserFeedback;

UCLASS(Blueprintable)
class SENTRY_API USentrySubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USentryBeforeSendHandler* BeforeSendHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USentryTraceSampler* TraceSampler;
    
public:
    USentrySubsystem();

    UFUNCTION(BlueprintCallable)
    USentryTransaction* StartTransactionWithContextAndOptions(USentryTransactionContext* Context, const TMap<FString, FString>& Options);
    
    UFUNCTION(BlueprintCallable)
    USentryTransaction* StartTransactionWithContext(USentryTransactionContext* Context);
    
    UFUNCTION(BlueprintCallable)
    USentryTransaction* StartTransaction(const FString& Name, const FString& Operation);
    
    UFUNCTION(BlueprintCallable)
    void StartSession();
    
    UFUNCTION(BlueprintCallable)
    void SetUser(USentryUser* User);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(const FString& Key, const TMap<FString, FString>& Values);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUser();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool IsSupportedForCurrentSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentryCrashedLastRun IsCrashedLastRun();
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithSettings(const FConfigureSettingsDelegate& OnConfigureSettings);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void EndSession();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureScope(const FConfigureScopeDelegate& OnConfigureScope);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearBreadcrumbs();
    
    UFUNCTION(BlueprintCallable)
    void CaptureUserFeedbackWithParams(USentryId* EventId, const FString& Email, const FString& Comments, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void CaptureUserFeedback(USentryUserFeedback* UserFeedback);
    
    UFUNCTION(BlueprintCallable)
    USentryId* CaptureMessageWithScope(const FString& Message, const FConfigureScopeDelegate& OnConfigureScope, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    USentryId* CaptureMessage(const FString& Message, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    USentryId* CaptureEventWithScope(USentryEvent* Event, const FConfigureScopeDelegate& OnConfigureScope);
    
    UFUNCTION(BlueprintCallable)
    USentryId* CaptureEvent(USentryEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    void AddBreadcrumbWithParams(const FString& Message, const FString& Category, const FString& Type, const TMap<FString, FString>& Data, ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void AddBreadcrumb(USentryBreadcrumb* Breadcrumb);
    
};

