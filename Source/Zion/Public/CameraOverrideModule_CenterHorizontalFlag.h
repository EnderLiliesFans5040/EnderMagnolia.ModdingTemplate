#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_CenterHorizontalFlag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_CenterHorizontalFlag : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenterHorizontal;
    
public:
    UCameraOverrideModule_CenterHorizontalFlag();

};

