#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_InputLocationOffsetSpeed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_InputLocationOffsetSpeed : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputLocationOffsetSpeed;
    
public:
    UCameraOverrideModule_InputLocationOffsetSpeed();

};

