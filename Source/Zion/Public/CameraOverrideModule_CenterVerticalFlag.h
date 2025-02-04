#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_CenterVerticalFlag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_CenterVerticalFlag : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenterVertical;
    
public:
    UCameraOverrideModule_CenterVerticalFlag();

};

