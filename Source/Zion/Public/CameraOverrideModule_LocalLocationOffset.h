#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_LocalLocationOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_LocalLocationOffset : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LocalLocationOffset;
    
public:
    UCameraOverrideModule_LocalLocationOffset();

};

