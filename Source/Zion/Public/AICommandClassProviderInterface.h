#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "AICommandClassProviderInterface.generated.h"

class UCommand;

UINTERFACE(Blueprintable)
class UAICommandClassProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IAICommandClassProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetIdlePeaceCommandClass(TSubclassOf<UCommand>& out_CommandClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFindEnemyCommandClass(TSubclassOf<UCommand>& out_CommandClass);
    
};

