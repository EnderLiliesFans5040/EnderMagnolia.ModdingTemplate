#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESaveCopyResult.h"
#include "ESaveExistsType.h"
#include "LoadGameResultDelegate.h"
#include "SaveGameResultDelegate.h"
#include "Templates/SubclassOf.h"
#include "SaveSubsystem.generated.h"

class USaveGameZion;
class USaveSettings;
class UUserWidgetZionShowHide;

UCLASS(Blueprintable)
class USaveSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveSettings* CurrentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGameZion* SavingGameData;
    
public:
    USaveSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetCurrentSlotIndex(int32 NewSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void SaveGameInCurrentSlotAsync(TSubclassOf<UUserWidgetZionShowHide> SaveWidgetClass, FSaveGameResult OnSaveFinished);
    
    UFUNCTION(BlueprintCallable)
    bool SaveGameInCurrentSlot();
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeSinceLastGameSave();
    
    UFUNCTION(BlueprintCallable)
    ESaveExistsType LoadSettings(bool bForceReload);
    
    UFUNCTION(BlueprintCallable)
    void LoadGameFromSlotAsync(int32 SlotIndex, FLoadGameResult OnLoadFinished);
    
    UFUNCTION(BlueprintCallable)
    void LoadGameFromCurrentSlotAsync(FLoadGameResult OnLoadFinished);
    
    UFUNCTION(BlueprintCallable)
    ESaveExistsType LoadGameFromCurrentSlot(USaveGameZion*& out_GameData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastGameSave() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteSettings();
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveDataAtSlotIndex(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    ESaveCopyResult CopyGameDataToEmptySlot(int32 SlotToCopy, int32& out_TargetSlot);
    
    UFUNCTION(BlueprintCallable)
    ESaveExistsType CheckCurrentSlotExistence();
    
};

