#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "ECameraModuleOverrideType.h"
#include "CameraOverrideModule_ZoomOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_ZoomOffset : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraModuleOverrideType OverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomOffsetFactor;
    
public:
    UCameraOverrideModule_ZoomOffset();

};

