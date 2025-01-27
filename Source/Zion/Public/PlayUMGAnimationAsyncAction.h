#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PlayUMGAnimationOutputPinDelegate.h"
#include "PlayUMGAnimationAsyncAction.generated.h"

class UPlayUMGAnimationAsyncAction;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UPlayUMGAnimationAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayUMGAnimationOutputPin OnFinish;
    
    UPlayUMGAnimationAsyncAction();

    UFUNCTION(BlueprintCallable)
    static UPlayUMGAnimationAsyncAction* PlayUMGAnimation(UUserWidget* Widget, UWidgetAnimation* InAnimation, bool bLockNavigation);
    
};

