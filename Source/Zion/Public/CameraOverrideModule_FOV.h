#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "ECameraModuleOverrideType.h"
#include "CameraOverrideModule_FOV.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_FOV : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraModuleOverrideType OverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVFactor;
    
public:
    UCameraOverrideModule_FOV();

};

