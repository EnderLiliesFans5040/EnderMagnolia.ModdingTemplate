#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ELaunchGameIntent.h"
#include "ESoundFamily.h"
#include "GameInstanceZion.generated.h"

class UFMODBank;
class UFMODBus;
class UFMODVCA;
class UGameInstanceZion;
class UInputMappingContext;
class UObject;
class USentrySettings;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class ZION_API UGameInstanceZion : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELaunchGameIntent LaunchGameIntent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputMappingContext*> InputContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputMappingContext*> DebugInputContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundFamily, UFMODVCA*> SoundVCAs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundFamily, UFMODBus*> SoundBuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBank*> VoiceBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> PersistantGameWorld;
    
public:
    UGameInstanceZion();

    UFUNCTION(BlueprintCallable)
    void SetLaunchGameIntent(ELaunchGameIntent NewLaunchGameIntent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAutoUploadCrashReportChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleSettingsDelegate(USentrySettings* Settings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELaunchGameIntent GetLaunchGameIntent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameInstanceZion* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearLaunchGameIntent();
    
};

