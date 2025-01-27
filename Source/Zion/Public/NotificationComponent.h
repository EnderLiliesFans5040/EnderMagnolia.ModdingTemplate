#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInventoryItemType.h"
#include "NotificationComponent.generated.h"

class UInventory;
class UNotificationMapAsset;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class UNotificationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotificationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryItemType> UnnotifiedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNotificationMapAsset* NotificationMap;
    
public:
    UNotificationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPawnDeath();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotificationDurationFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationDelayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(const UInventory* Inventory, const FName& ItemId, int32 AddedCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartNotification() const;
    
};

