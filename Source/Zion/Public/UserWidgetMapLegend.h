#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.h"
#include "UserWidgetZionShowHide.h"
#include "UserWidgetMapLegend.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUserWidgetMapLegend : public UUserWidgetZionShowHide {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EMapIconType> IgnoreVisibilityCheckIconTypes;
    
public:
    UUserWidgetMapLegend();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLegendInitialized(const TSet<EMapIconType>& VisibleIconTypes);
    
};

