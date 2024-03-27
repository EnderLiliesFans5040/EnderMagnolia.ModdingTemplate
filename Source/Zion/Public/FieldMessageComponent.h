#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "OnFieldMessageFinishedDelegate.h"
#include "FieldMessageComponent.generated.h"

class UFieldMessageAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFieldMessageComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFieldMessageFinished OnFieldMessageFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldMessageAsset* MessageData;
    
public:
    UFieldMessageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMessageData(UFieldMessageAsset* MessageDataAsset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMessageCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LaunchFieldMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcessingFieldMessage() const;
    
};

