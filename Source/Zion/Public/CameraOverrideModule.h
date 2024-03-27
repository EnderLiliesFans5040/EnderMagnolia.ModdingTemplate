#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CameraOverrideModule.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCameraOverrideModule : public UObject {
    GENERATED_BODY()
public:
    UCameraOverrideModule();

};

