#pragma once
#include "CoreMinimal.h"
#include "UserWidgetZion.h"
#include "UserWidgetAchievementNotificationHolder.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetAchievementNotificationHolder : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AchievementsQueue;
    
public:
    UUserWidgetAchievementNotificationHolder();

    UFUNCTION(BlueprintCallable)
    void QueueAchievementNotification(const FName& AchievementID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchAchievementNotification(const FName& AchievementID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDisplayAchievementNotificationsChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchNextNotification();
    
};

