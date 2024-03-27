#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EditorDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEditorDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEditorDebugComponent(const FObjectInitializer& ObjectInitializer);

};

