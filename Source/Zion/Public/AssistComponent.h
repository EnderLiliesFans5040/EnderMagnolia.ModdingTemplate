#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EquippedAssist.h"
#include "InventoryItemAssistData.h"
#include "AssistComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquippedAssist EquippedAssist;
    
public:
    UAssistComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnEquipAssist();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemAssistData GetEquippedAssistData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAssistID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInventoryItemAssistData GetAssistDataFromID(const FName& AssistID) const;
    
    UFUNCTION(BlueprintCallable)
    void EquipAssist(const FName& AssistID);
    
};

