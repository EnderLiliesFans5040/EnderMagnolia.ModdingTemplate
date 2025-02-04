#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_MinMaxBlendSpeed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_MinMaxBlendSpeed : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMaxBlendSpeed;
    
public:
    UCameraOverrideModule_MinMaxBlendSpeed();

};

