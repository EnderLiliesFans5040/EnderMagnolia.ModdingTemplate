#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VisualPivotModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVisualPivotModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVisualPivotModifierComponent(const FObjectInitializer& ObjectInitializer);

};

