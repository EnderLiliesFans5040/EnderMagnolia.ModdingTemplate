#pragma once
#include "CoreMinimal.h"
#include "EventUserWidgetInterface.h"
#include "UserWidgetZion.h"
#include "UserWidgetEvent.generated.h"

class UEventPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetEvent : public UUserWidgetZion, public IEventUserWidgetInterface {
    GENERATED_BODY()
public:
    UUserWidgetEvent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUsePreSkipFadeOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUsePostSkipFadeIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTalk(const FText& SpeakerName, const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestRemoveFromParent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayChoices(const FText& SpeakerName, const FText& Text, const TArray<FText>& Choices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventPlayer* GetEventPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteTalk();
    
    UFUNCTION(BlueprintCallable)
    void CompleteChoices(int32 SelectedChoiceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSkipEvent() const;
    

    // Fix for true pure virtual functions not being implemented
};

