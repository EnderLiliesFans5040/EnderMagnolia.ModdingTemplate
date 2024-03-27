#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEquipmentSlot.h"
#include "EquippedItem.h"
#include "InventoryItemEquipmentData.h"
#include "EquipmentComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class UEquipmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlot, FEquippedItem> EquippedItems;
    
public:
    UEquipmentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnEquipAll();
    
    UFUNCTION(BlueprintCallable)
    void UnEquip(EEquipmentSlot EquipmentSlot);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippedOnSlot(EEquipmentSlot EquipmentSlot, const FName& EquipmentID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped(const FName& EquipmentID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEquipmentIDFromSlot(EEquipmentSlot EquipmentSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemEquipmentData GetEquipmentDataFromSlot(EEquipmentSlot EquipmentSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemEquipmentData GetEquipmentDataFromID(const FName& EquipmentID) const;
    
    UFUNCTION(BlueprintCallable)
    void Equip(EEquipmentSlot EquipmentSlot, const FName& EquipmentID);
    
};

