#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillSlot.h"
#include "EquipSkillEventDelegate.h"
#include "EquippedSkillData.h"
#include "InputActions.h"
#include "InventoryItemSkillData.h"
#include "InventoryItemSpiritData.h"
#include "SkillLevelData.h"
#include "SkillComponent.generated.h"

class UCommandSet;
class UInputAction;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class USkillComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipSkillEvent OnEquipSkillDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipSkillEvent OnUnequipSkillDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FInputActions> InputActionsForSkillSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FName> DefaultSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FEquippedSkillData> EquippedSkillDataForSkillSlots;
    
public:
    USkillComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnEquipAll();
    
    UFUNCTION(BlueprintCallable)
    void UnEquip(ESkillSlot SkillSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEquippedSkill(ESkillSlot SkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinimumEquippedSPCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESkillSlot GetEquippedSkillSlotFromID(const FName& SkillID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkillLevelData GetEquippedSkillLevelData(ESkillSlot SkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputAction* GetEquippedSkillInputActionFromSpirit(const FInventoryItemSpiritData& SpiritData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEquippedSkillID(ESkillSlot SkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemSkillData GetEquippedItemSkillData(ESkillSlot SkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommandSet* GetEquippedCommandSet(ESkillSlot SkillSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void Equip(ESkillSlot SkillSlot, const FName& SkillID);
    
};

