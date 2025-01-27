#pragma once
#include "CoreMinimal.h"
#include "CableComponent.h"
#include "CustomCableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCustomCableComponent : public UCableComponent {
    GENERATED_BODY()
public:
    UCustomCableComponent(const FObjectInitializer& ObjectInitializer);

};

