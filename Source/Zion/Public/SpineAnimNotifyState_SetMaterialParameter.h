#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "SpineAnimNotifyState.h"
#include "SpineAnimNotifyState_SetMaterialParameter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USpineAnimNotifyState_SetMaterialParameter : public USpineAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> RenderComponentRefs;
    
public:
    USpineAnimNotifyState_SetMaterialParameter();

};

