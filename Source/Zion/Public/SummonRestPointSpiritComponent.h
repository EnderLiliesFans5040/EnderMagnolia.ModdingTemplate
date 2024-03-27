#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AptitudeArray.h"
#include "ESkillSlot.h"
#include "SummonRestPointSpiritComponent.generated.h"

class ACharacterZionSpirit;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API USummonRestPointSpiritComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOffsetToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOffsetBetweenSpirits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ACharacterZionSpirit>, FAptitudeArray> AptitudeSpirits_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterZionSpirit> ExplorationSpiritSoftClass;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ACharacterZionSpirit>> CachedSpirits;
    
public:
    USummonRestPointSpiritComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSummonRestPointSpirits();
    
    UFUNCTION(BlueprintCallable)
    void RefreshRestPointSpirits();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnEquipSkill(ESkillSlot SkillSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipSkill(ESkillSlot SkillSlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishSummonRestPointSpirits();
    
};

