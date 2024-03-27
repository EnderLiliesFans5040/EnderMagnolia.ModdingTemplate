#pragma once
#include "CoreMinimal.h"
#include "UserWidgetWorldSpace.h"
#include "UserWidgetWorldSpaceDebug.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetWorldSpaceDebug : public UUserWidgetWorldSpace {
    GENERATED_BODY()
public:
    UUserWidgetWorldSpaceDebug();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTextForTag(FName Tag, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearTextForTag(FName Tag);
    
};

