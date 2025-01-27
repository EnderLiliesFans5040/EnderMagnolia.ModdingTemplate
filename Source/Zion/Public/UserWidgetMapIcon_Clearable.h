#pragma once
#include "CoreMinimal.h"
#include "UserWidgetMapIcon_Actor.h"
#include "UserWidgetMapIcon_Clearable.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapIcon_Clearable : public UUserWidgetMapIcon_Actor {
    GENERATED_BODY()
public:
    UUserWidgetMapIcon_Clearable();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearIcon();
    
};

