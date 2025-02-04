#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "UserWidgetMapIcon_Actor.h"
#include "UserWidgetMapIcon_Teleport.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapIcon_Teleport : public UUserWidgetMapIcon_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MapTransitionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestinationWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ToDestination_MapSpace;
    
public:
    UUserWidgetMapIcon_Teleport();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetToDestination_MapSpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartWorldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetMapTransitionHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestinationWorldLocation() const;
    
};

