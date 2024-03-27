#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommandCondition.generated.h"

class ACharacter;
class UCommand;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCommandCondition : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertCondition;
    
public:
    UCommandCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnCheckCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommand* GetCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacter() const;
    
};

