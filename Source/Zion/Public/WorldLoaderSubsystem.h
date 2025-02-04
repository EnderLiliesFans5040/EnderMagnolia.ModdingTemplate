#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FadeDescriptionData.h"
#include "GameMapData.h"
#include "WorldLoaderSubsystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UWorldLoaderSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UWorldLoaderSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap_PostFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void SwitchGameMap_PostFadeIn();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenWorld(TSoftObjectPtr<UWorld> WorldToLoad, FName PlayerStartTag, const FFadeDescriptionData& FadeOutDescription, const FFadeDescriptionData& FadeInDescription);
    
    UFUNCTION(BlueprintCallable)
    void OpenGameMap(const FDataTableRowHandle& GameMapHandle, const FName PlayerStartTag, bool bForceReload, const FFadeDescriptionData& FadeOutDescription, const FFadeDescriptionData& FadeInDescription);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPostLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamingDynamicLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeInFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading(bool bConsiderFadeAsLoading) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentPlayerStartTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentGameMapID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameMapData GetCurrentGameMapData() const;
    
};

