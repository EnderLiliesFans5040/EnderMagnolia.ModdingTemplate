#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpineFXData.h"
#include "EClearStatus.h"
#include "MapIconProviderInterface.h"
#include "Breakable.generated.h"

class UClearComponent;
class UDeathComponent;
class UFMODEvent;
class UFactionComponent;
class USceneComponent;
class USpineBoneComponent;
class USpineFXComponent;
class UStatHPComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API ABreakable : public AActor, public IMapIconProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatHPComponent* StatHPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearComponent* ClearComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineFXComponent* SpineFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineBoneComponent* SpineBoneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkAsClearOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnBreakFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateBreakFXFromLastAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnBreakFMODEvent;
    
public:
    ABreakable(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnClearStatusChecked(EClearStatus ClearStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnBreakableReceivedDamage(AActor* Source, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnBreakableDeathProcessStart();
    

    // Fix for true pure virtual functions not being implemented
};

