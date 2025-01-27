#pragma once
#include "CoreMinimal.h"
#include "EnemyData.h"
#include "UserWidgetZion.h"
#include "UserWidgetEnemyUI.generated.h"

class AAIController;
class APawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetEnemyUI : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UUserWidgetEnemyUI();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestRemoveFromParent(bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEnemyData GetEnemyData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController* GetController() const;
    
};

