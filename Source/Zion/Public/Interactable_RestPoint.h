#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Interactable.h"
#include "Interactable_RestPoint.generated.h"

class UChildActorComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API AInteractable_RestPoint : public AInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PlayerStartChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RestPointDataHandle;
    
public:
    AInteractable_RestPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextEventDataHandle(const FDataTableRowHandle& InNextEventDataHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetRestPointDataHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetNextEventDataHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearNextEventDataHandle();
    
};

