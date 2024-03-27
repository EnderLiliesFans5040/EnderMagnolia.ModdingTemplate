#pragma once
#include "CoreMinimal.h"
#include "NotificationData.h"
#include "UserWidgetZion.h"
#include "UserWidgetNotificationHolder.generated.h"

class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetNotificationHolder : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ScrollContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollDuration;
    
public:
    UUserWidgetNotificationHolder();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchNotification(const FNotificationData& NotificationData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayHolder();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUIReady() const;
    
};

