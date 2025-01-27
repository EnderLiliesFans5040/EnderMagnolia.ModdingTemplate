#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_PlayerBoundsFactor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_PlayerBoundsFactor : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerBoundsFactor;
    
public:
    UCameraOverrideModule_PlayerBoundsFactor();

};

