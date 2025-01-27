#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_EnemyBoundsFactor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_EnemyBoundsFactor : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyBoundsFactor;
    
public:
    UCameraOverrideModule_EnemyBoundsFactor();

};

