#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Inventory.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UInventory : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> CheckedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UInventory();

    UFUNCTION(BlueprintCallable)
    void MarkItemAsChecked(const FName& ItemRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemChecked(const FName& ItemRowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNonCheckedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItem(const FName& ItemRowName, int32 Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountOfItem(const FName& ItemId) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, int32> GetAllItemsAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, int32> GetAllItems() const;
    
};

