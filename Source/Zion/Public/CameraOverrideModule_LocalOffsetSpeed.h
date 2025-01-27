#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_LocalOffsetSpeed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_LocalOffsetSpeed : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalLocationOffsetSpeed;
    
public:
    UCameraOverrideModule_LocalOffsetSpeed();

};

