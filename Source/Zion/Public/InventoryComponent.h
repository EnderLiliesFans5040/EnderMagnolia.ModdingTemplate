#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "CurrencyValue.h"
#include "Drop.h"
#include "EAptitudeType.h"
#include "ECurrencyType.h"
#include "EInventoryItemType.h"
#include "OnCurrencyAddedDelegate.h"
#include "OnItemAddedDelegate.h"
#include "InventoryComponent.generated.h"

class UInventory;
class UInventoryAptitude;
class UInventorySkill;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemAdded OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrencyAdded OnCurrencyAdded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECurrencyType> DropFactoredCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemCurrencyInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventoryAptitude* ItemAptitudeInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemSpiritInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventorySkill* ItemSkillInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemEquipmentInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemAssistInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemStatsInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemPassiveInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemMaterialInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemTipInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemTutorialInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemKeyInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemQuestInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemCostumeInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemEnemyInfoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemNPCInfoInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventory* ItemGalleryInventory;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 SpendCurrency(const FCurrencyValue& CurrencyValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItem(const FDataTableRowHandle& ItemHandle, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void MarkItemAsChecked(const FDataTableRowHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemChecked(const FDataTableRowHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNonCheckedItem(EInventoryItemType ItemType) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasItem(const FDataTableRowHandle& ItemHandle, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAptitude(const EAptitudeType& AptitudeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetTutorialInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetTipInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetStatsInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetSpiritInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventorySkill* GetSkillInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetPassiveInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetNPCInfoInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetInventoryFromItemType(EInventoryItemType ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetGalleryInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetEquipmentInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetEnemyInfoInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetCurrencyInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrency(ECurrencyType CurrencyType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountOfItem(const FDataTableRowHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetCostumeInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventory* GetAssistInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryAptitude* GetAptitudeInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpendCurrency(const FCurrencyValue& CurrencyValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(const FDataTableRowHandle& ItemHandle, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool AddDrop(const FDrop& Drop, float DropFactor);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCurrency(ECurrencyType CurrencyType, int32 CurrencyToAdd);
    
};

