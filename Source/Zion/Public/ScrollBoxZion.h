#pragma once
#include "CoreMinimal.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Components/ScrollBox.h"
#include "ScrollBoxZion.generated.h"

class UNativeWidgetHost;
class UWidgetNavigation;

UCLASS(Blueprintable)
class UScrollBoxZion : public UScrollBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementCountsPerLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> NavigationOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateScrollOnNavigation;
    
public:
    UScrollBoxZion();

    UFUNCTION(BlueprintCallable)
    void SimulateNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationOrientation(TEnumAsByte<EOrientation> NewNavigationOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetElementCountPerLine(int32 NewElementCountsPerLine);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWidgetHostIntoView(UNativeWidgetHost* NativeWidgetHost, bool InAnimateScroll, EDescendantScrollDestination InDestination, float InScrollPadding);
    
    UFUNCTION(BlueprintCallable)
    void CopyWidgetNavigation(UWidgetNavigation* WidgetNavigation);
    
};

