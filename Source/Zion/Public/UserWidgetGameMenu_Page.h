#pragma once
#include "CoreMinimal.h"
#include "FooterData.h"
#include "UserWidgetZion.h"
#include "UserWidgetGameMenu_Page.generated.h"

class UUserWidgetFooter;
class UUserWidgetGameMenu;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetGameMenu_Page : public UUserWidgetZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFooterData> DefaultFooterEntries;
    
public:
    UUserWidgetGameMenu_Page();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPageClosed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtRestPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetGameMenu* GetGameMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetFooter* GetFooter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFooterData> GetDefaultFooterEntries() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwitchEquipment() const;
    
};

