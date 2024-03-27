#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameMapChangeProviderData.h"
#include "GameMapChangeDataProviderInterface.generated.h"

UINTERFACE(Blueprintable)
class ZION_API UGameMapChangeDataProviderInterface : public UInterface {
    GENERATED_BODY()
};

class ZION_API IGameMapChangeDataProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGameMapChangeProviderData(FGameMapChangeProviderData& OutGameMapChangeProviderData);
    
};

