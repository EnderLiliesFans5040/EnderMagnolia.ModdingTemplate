#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_CameraSpeed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_CameraSpeed : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSpeed;
    
public:
    UCameraOverrideModule_CameraSpeed();

};

