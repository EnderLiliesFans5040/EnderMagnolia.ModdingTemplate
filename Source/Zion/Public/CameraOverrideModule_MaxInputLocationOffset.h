#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_MaxInputLocationOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_MaxInputLocationOffset : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxInputLocationOffset;
    
public:
    UCameraOverrideModule_MaxInputLocationOffset();

};

