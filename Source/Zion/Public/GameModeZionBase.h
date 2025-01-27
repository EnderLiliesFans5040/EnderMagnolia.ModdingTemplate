#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeZionBase.generated.h"

class UInputDeviceCheckerComponent;
class ULocalizationSwitcherComponent;

UCLASS(Blueprintable, NonTransient)
class ZION_API AGameModeZionBase : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputDeviceCheckerComponent* InputDeviceCheckerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocalizationSwitcherComponent* LocalizationSwitcherComponent;
    
public:
    AGameModeZionBase(const FObjectInitializer& ObjectInitializer);

};

