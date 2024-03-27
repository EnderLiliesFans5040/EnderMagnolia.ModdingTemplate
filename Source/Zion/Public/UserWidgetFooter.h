#pragma once
#include "CoreMinimal.h"
#include "FooterData.h"
#include "UserWidgetZion.h"
#include "UserWidgetFooter.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetFooter : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UUserWidgetFooter();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const TArray<FFooterData>& FooterDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEntriesVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearEntries(bool bTemporaryOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddEntry(const FFooterData& FooterData, bool bTemporary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddEntries(const TArray<FFooterData>& FooterDataList, bool bTemporary);
    
};

