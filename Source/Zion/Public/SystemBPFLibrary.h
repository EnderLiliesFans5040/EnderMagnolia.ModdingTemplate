#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureDefines.h"
#include "EBuildPlatformType.h"
#include "SystemBPFLibrary.generated.h"

class UPlatformMediaSource;
class UTexture2D;

UCLASS(Blueprintable)
class USystemBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USystemBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateUITexturesForCurrentResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXboxFamilyBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsing4KResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSwitchBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlaystationBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlaystation5Build();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlaystation4Build();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPCBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNewGamePlusEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEarlyAccessBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemoBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCrashReportAllowedBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBossRecollectionEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool GetWindowedResolutions(TArray<FIntPoint>& OutResolutions);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetRuntimeTextureInfosFromGroup(const TEnumAsByte<TextureGroup>& TextureGroup);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRuntimeTextureInfos(const UTexture2D* Texture2D);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRHIName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMoviePathFromMovieName(const FString& MovieName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGameVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGameBuildNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBuildPlatformType GetBuildPlatformType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBinkURLFromPlatformMediaSource(const UPlatformMediaSource* PlatformMediaSource);
    
    UFUNCTION(BlueprintCallable)
    static void FlushTextureStreaming(bool bDeferToEndFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesGameVersionMatchesPakVersion();
    
};

