#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_WorldLocationOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_WorldLocationOffset : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WorldLocationOffset;
    
public:
    UCameraOverrideModule_WorldLocationOffset();

};

