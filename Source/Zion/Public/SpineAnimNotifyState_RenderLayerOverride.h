#pragma once
#include "CoreMinimal.h"
#include "ERenderLayerTypes.h"
#include "SpineAnimNotifyState.h"
#include "SpineAnimNotifyState_RenderLayerOverride.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USpineAnimNotifyState_RenderLayerOverride : public USpineAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenderLayerTypes RenderLayer;
    
public:
    USpineAnimNotifyState_RenderLayerOverride();

};

