#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "EventAction_SubjectBinding.h"
#include "EMaterialParameterMode.h"
#include "EventAction_Material_SetParameter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Material_SetParameter : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialParameterMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve Curve;
    
public:
    UEventAction_Material_SetParameter();

};

