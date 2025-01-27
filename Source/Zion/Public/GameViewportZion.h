#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "GameViewportDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameViewportZion.generated.h"

class UGameViewportZion;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class UGameViewportZion : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportDelegate OnResolutionChangedDelegate;
    
    UGameViewportZion();

    UFUNCTION(BlueprintCallable)
    void SetWorldRenderingEnable(bool bEnableWorldRendering);
    
    UFUNCTION(BlueprintCallable)
    void SetViewportOverlayWidgetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewportOverlayRenderOpacity(float Opacity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetUserWidgetInStack(TSubclassOf<UUserWidget> ClassToFind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameViewportZion* Get();
    
};

