#pragma once
#include "CoreMinimal.h"
#include "FieldTalkEntry.h"
#include "UserWidgetZion.h"
#include "UserWidgetFieldTalkHolder.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetFieldTalkHolder : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UUserWidgetFieldTalkHolder();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowText(const FFieldTalkEntry& FieldTalkEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchFieldTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishFieldTalk(bool bSkipActiveFieldTalk);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUIReady() const;
    
};

