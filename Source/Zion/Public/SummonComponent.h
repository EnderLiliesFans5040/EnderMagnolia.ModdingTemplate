#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECommandLayerType.h"
#include "SpiritSummonParameters.h"
#include "Templates/SubclassOf.h"
#include "SummonComponent.generated.h"

class ACharacterZionSpirit;
class UCommand;
class UCommandSet;
class UInputAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API USummonComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ACharacterZionSpirit>, ACharacterZionSpirit*> CachedSpirits;
    
public:
    USummonComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ACharacterZionSpirit* SummonSpiritFromCommand(const TSubclassOf<ACharacterZionSpirit>& SpiritClass, const TArray<TSubclassOf<UCommand>>& CommandClasses, const FSpiritSummonParameters& SummonParameters, const UCommand* SourceCommand);
    
    UFUNCTION(BlueprintCallable)
    ACharacterZionSpirit* SummonSpirit(const TSubclassOf<ACharacterZionSpirit>& SpiritClass, const TArray<TSubclassOf<UCommand>>& CommandClasses, const FSpiritSummonParameters& SummonParameters, const UInputAction* InvokedByInputAction, ECommandLayerType CommandLayerType, const UCommandSet* FallbackCommandSet);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSpiritSummoned(const TSubclassOf<ACharacterZionSpirit>& SpiritClass);
    
    UFUNCTION(BlueprintCallable)
    ACharacterZionSpirit* GetOrSpawnSpirit(const TSubclassOf<ACharacterZionSpirit>& SpiritClass);
    
};

