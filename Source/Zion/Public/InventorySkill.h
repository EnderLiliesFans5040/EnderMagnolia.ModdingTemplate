#pragma once
#include "CoreMinimal.h"
#include "Inventory.h"
#include "InventorySkill.generated.h"

UCLASS(Blueprintable)
class UInventorySkill : public UInventory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SkillLevels;
    
public:
    UInventorySkill();

    UFUNCTION(BlueprintCallable)
    int32 SetSkillLevel(const FName& SkillID, int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxSkillLevel(const FName& SkillID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillLevel(const FName& SkillID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinSkillLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxSkillLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialSkillLevel(const FName& SkillID) const;
    
};

