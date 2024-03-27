#pragma once
#include "CoreMinimal.h"
#include "TalkParameters.h"
#include "UserWidgetWorldSpaceText.h"
#include "UserWidgetWorldSpaceText_Talk.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetWorldSpaceText_Talk : public UUserWidgetWorldSpaceText {
    GENERATED_BODY()
public:
    UUserWidgetWorldSpaceText_Talk();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpeakerName(const FText& SpeakerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalk(const FTalkParameters& TalkParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressConfirm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishTalk();
    
    UFUNCTION(BlueprintCallable)
    void CompleteTalk();
    
};

