#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "GameViewportZionDelegateDelegate.h"
#include "GameEngineZion.generated.h"

class UGameEngineZion;

UCLASS(Blueprintable, NonTransient)
class UGameEngineZion : public UGameEngine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZionDelegate OnApplicationSuspend;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZionDelegate OnApplicationUnsuspend;
    
    UGameEngineZion();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameEngineZion* Get();
    
};

