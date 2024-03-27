#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "GameplayCondition.generated.h"

class APlayerController;
class UGameplayCondition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGameplayCondition : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertCondition;
    
public:
    UGameplayCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnCheckCondition(APlayerController* PlayerController);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool CheckGameplayCondition(const TSubclassOf<UGameplayCondition>& GameplayConditionClass, APlayerController* PlayerController);
    
};

