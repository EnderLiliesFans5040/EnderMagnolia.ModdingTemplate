#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TargetPivotProviderInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable)
class UTargetPivotProviderInterface : public UInterface {
    GENERATED_BODY()
};

class ITargetPivotProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetTargetPivot() const;
    
};

