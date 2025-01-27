#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERenderLayerTypes.h"
#include "RenderLayerSubsystem.generated.h"

UCLASS(Blueprintable)
class RENDERLAYER_API URenderLayerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URenderLayerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPriorityForRenderLayer(const ERenderLayerTypes& RenderLayer);
    
};

