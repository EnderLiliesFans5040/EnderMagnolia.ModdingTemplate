#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERespawnReason.h"
#include "RecollectionBossBaseComponent.generated.h"

class AEnemySpawner;
class UUserWidgetDialogYesNo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URecollectionBossBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERespawnReason ExitRespawnReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetDialogYesNo> DialogYesNoClass;
    
public:
    URecollectionBossBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RetryRecollectionMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRetryDialogYes();
    
    UFUNCTION(BlueprintCallable)
    void OnRetryDialogNo();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogClosed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEnemySpawner* GetCachedEnemySpawner() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GameMapChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void Finish();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExitRecollectionMode() const;
    
    UFUNCTION(BlueprintCallable)
    void BossDeathStart(AEnemySpawner* EnemySpawner);
    
    UFUNCTION(BlueprintCallable)
    void BossDeathEndPostDelay();
    
    UFUNCTION(BlueprintCallable)
    void BossDeathEnd(AEnemySpawner* EnemySpawner);
    
};

