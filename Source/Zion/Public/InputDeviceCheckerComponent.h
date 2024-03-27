#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputDeviceCheckerComponent.generated.h"

class UUserWidgetZion;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UInputDeviceCheckerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetZion> UserWidgetClass;
    
public:
    UInputDeviceCheckerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWidgetClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnActiveControllerDisconnected();
    
};

