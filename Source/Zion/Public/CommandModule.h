#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommandModule.generated.h"

class ACharacter;
class UCommand;

UCLASS(Abstract, Blueprintable, EditInlineNew, Within=Command)
class ZION_API UCommandModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForModuleToComplete;
    
public:
    UCommandModule();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommand* GetCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacter() const;
    
};

