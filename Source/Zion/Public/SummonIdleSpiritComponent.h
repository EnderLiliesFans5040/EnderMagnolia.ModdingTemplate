#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillSlot.h"
#include "LoadedIdleSpiritClass.h"
#include "SummonedIdleSpiritData.h"
#include "SummonIdleSpiritComponent.generated.h"

class UCommand;
class UInputAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API USummonIdleSpiritComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleDurationBeforeSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurationBeforeSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurationBeforeSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurationBetweenSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurationBetweenSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurationBeforeAutoDismiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurationBeforeAutoDismiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOffsetToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetToPlayerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOffsetBetweenSpirits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetBetweenSpiritsRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> IgnoredInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FLoadedIdleSpiritClass> CachedSpiritClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSummonedIdleSpiritData> ActiveSpiritsData;
    
public:
    USummonIdleSpiritComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUnEquipSkill(ESkillSlot SkillSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnPostStartCommand(const UCommand* Command);
    
    UFUNCTION(BlueprintCallable)
    void OnJustTriggeredInputAction(const UInputAction* InputAction);
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnEquipSkill(ESkillSlot SkillSlot);
    
};

