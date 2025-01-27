#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_GravityScale.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_GravityScale : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GravityScaleFactorCurve;
    
public:
    UCommandModule_GravityScale();

};

