#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayConditionChecker.h"
#include "Templates/SubclassOf.h"
#include "GameplayConditionCheckerAsset.generated.h"

class APlayerController;
class UGameplayConditionCheckerAsset;

UCLASS(Abstract, Blueprintable)
class UGameplayConditionCheckerAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
public:
    UGameplayConditionCheckerAsset();

    UFUNCTION(BlueprintCallable)
    static bool CheckGameplayConditionAsset(const TSubclassOf<UGameplayConditionCheckerAsset>& GameplayConditionAssetClass, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCondition(APlayerController* PlayerController) const;
    
};

