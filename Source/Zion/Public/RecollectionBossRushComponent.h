#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RecollectionBossRushRecordData.h"
#include "RecollectionBossRushComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URecollectionBossRushComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBossRushIndex;
    
public:
    URecollectionBossRushComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnbindEvents();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 TryAddNewRecord(const FRecollectionBossRushRecordData& NewRecordData);
    
    UFUNCTION(BlueprintCallable)
    void StartBossRush();
    
    UFUNCTION(BlueprintCallable)
    bool SetTimerPaused(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable)
    void ResetRecords();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapSwitch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimerPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossRushActive() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GoToNextBoss();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRecollectionBossRushRecordData GetRecordData(const int32 RecordIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossRushTime() const;
    
    UFUNCTION(BlueprintCallable)
    void EndBossRush();
    
    UFUNCTION(BlueprintCallable)
    void ClearBossRush();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUpdateTime() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindEvents();
    
};

