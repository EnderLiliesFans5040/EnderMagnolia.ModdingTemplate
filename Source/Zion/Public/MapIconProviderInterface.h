#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayConditionChecker.h"
#include "MapIconProviderData.h"
#include "MapIconProviderInterface.generated.h"

UINTERFACE(Blueprintable)
class ZION_API UMapIconProviderInterface : public UInterface {
    GENERATED_BODY()
};

class ZION_API IMapIconProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetMapIconGameplayConditions(FGameplayConditionChecker& OutConditionChecker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMapIconActorWithDependencies(FMapIconProviderData& OutMapIconProviderData);
    
};

