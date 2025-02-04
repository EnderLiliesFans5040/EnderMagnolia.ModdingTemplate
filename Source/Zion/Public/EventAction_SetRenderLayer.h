#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "ERenderLayerTypes.h"
#include "EventAction_SetRenderLayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetRenderLayer : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenderLayerTypes RenderLayer;
    
public:
    UEventAction_SetRenderLayer();

};

