#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerCostumeFX.h"
#include "PlayerCostumeComponent.generated.h"

class UNiagaraSystem;
class USpineAtlasAsset;
class USpineNotifyAsset;
class USpineSkeletonDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerCostumeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCostumeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpineAtlasAsset* SpineAtlasAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonDataAsset* SpineSkeletonDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpineNotifyAsset* SpineNotifyAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPlayerCostumeFX, UNiagaraSystem*> CostumeFXs;
    
public:
    UPlayerCostumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEquippedCostumeID() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipCostume(const FName& InCostumeID);
    
};

