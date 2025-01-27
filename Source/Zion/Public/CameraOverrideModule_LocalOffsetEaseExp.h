#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "ECameraLocalOffsetBlendType.h"
#include "CameraOverrideModule_LocalOffsetEaseExp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_LocalOffsetEaseExp : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraLocalOffsetBlendType LocalOffsetBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalOffsetEaseExp;
    
public:
    UCameraOverrideModule_LocalOffsetEaseExp();

};

