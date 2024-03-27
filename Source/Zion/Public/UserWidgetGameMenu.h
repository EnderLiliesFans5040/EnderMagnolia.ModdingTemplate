#pragma once
#include "CoreMinimal.h"
#include "GameMenuPageData.h"
#include "RestPointData.h"
#include "UserWidgetZion.h"
#include "UserWidgetGameMenu.generated.h"

class UUserWidgetFooter;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetGameMenu : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PageSwitcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAtRestPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEquipmentSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameMenuPageData> PageDataList;
    
public:
    UUserWidgetGameMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageChanged(int32 NewPageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFastTravelRequested(const FName& RestPointID, const FRestPointData& RestPointData);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyFastTravelRequested(const FName& RestPointID, const FRestPointData& RestPointData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtRestPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GoToPage(int32 PageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageCount() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UUserWidgetFooter* GetFooter() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPageIndex() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwitchEquipment() const;
    
};

