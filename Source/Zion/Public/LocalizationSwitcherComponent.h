#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LocalizationSwitcherComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULocalizationSwitcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULocalizationSwitcherComponent(const FObjectInitializer& ObjectInitializer);

};

