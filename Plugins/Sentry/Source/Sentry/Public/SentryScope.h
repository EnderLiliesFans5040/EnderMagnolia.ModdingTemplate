#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryScope.generated.h"

class USentryAttachment;
class USentryBreadcrumb;

UCLASS(Blueprintable)
class SENTRY_API USentryScope : public UObject {
    GENERATED_BODY()
public:
    USentryScope();

    UFUNCTION(BlueprintCallable)
    void SetTagValue(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTags(const TMap<FString, FString>& Tags);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetFingerprint(const TArray<FString>& Fingerprint);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraValue(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetExtras(const TMap<FString, FString>& Extras);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvironment(const FString& Environment);
    
    UFUNCTION(BlueprintCallable)
    void SetDist(const FString& Dist);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(const FString& Key, const TMap<FString, FString>& Values);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExtra(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveContext(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTagValue(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetFingerprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetExtraValue(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetExtras() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEnvironment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDist() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBreadcrumbs();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttachments();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void AddBreadcrumb(USentryBreadcrumb* Breadcrumb);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachment(USentryAttachment* Attachment);
    
};

