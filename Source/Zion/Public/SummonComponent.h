#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECommandLayerType.h"
#include "SpiritSummonParameters.h"
#include "SummonDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SummonComponent.generated.h"

class ACharacterZionSpirit;
class AController;
class APawn;
class UCommand;
class UCommandSet;
class UInputAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API USummonComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonDelegate OnAutoSpiritEnabledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonDelegate OnAutoSpiritDisabledDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<ACharacterZionSpirit>> DefaultSpiritClassesToKeepLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ACharacterZionSpirit>, ACharacterZionSpirit*> CachedSpirits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<ACharacterZionSpirit>> SpiritClassesToKeepLoaded;
    
public:
    USummonComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ACharacterZionSpirit* SummonSpiritFromCommand(const TSubclassOf<ACharacterZionSpirit>& SpiritClass, const TArray<TSubclassOf<UCommand>>& CommandClasses, const FSpiritSummonParameters& SummonParameters, const UCommand* SourceCommand);
    
    UFUNCTION(BlueprintCallable)
    ACharacterZionSpirit* SummonSpirit(const TSubclassOf<ACharacterZionSpirit>& SpiritClass, const TArray<TSubclassOf<UCommand>>& CommandClasses, const FSpiritSummonParameters& SummonParameters, const UInputAction* InvokedByInputAction, ECommandLayerType CommandLayerType, const UCommandSet* FallbackCommandSet);
    
    UFUNCTION(BlueprintCallable)
    void SetForceSummonNextToggle();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSpiritSummoned(const TSubclassOf<ACharacterZionSpirit>& SpiritClass);
    
    UFUNCTION(BlueprintCallable)
    ACharacterZionSpirit* GetOrSpawnSpirit(const TSubclassOf<ACharacterZionSpirit>& SpiritClass);
    
    UFUNCTION(BlueprintCallable)
    void FlushCachedSpirits();
    
};

