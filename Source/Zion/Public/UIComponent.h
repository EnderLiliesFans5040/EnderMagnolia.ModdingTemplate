#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "DamageData.h"
#include "Templates/SubclassOf.h"
#include "UIComponent.generated.h"

class AActor;
class UUserWidgetWorldSpaceGauge;
class UUserWidgetWorldSpaceText;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGaugeOriginComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference GaugeOriginComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GaugeOriginLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GaugeOriginWorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceGauge> WorldSpaceGaugeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TextOriginLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText> WorldSpaceTextDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText> WorldSpaceTextCriticalDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText> WorldSpaceTextAdvantageDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText> WorldSpaceTextDisadvantageDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText> WorldSpaceTextHealClass;
    
public:
    UUIComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedHeal(AActor* Source, int32 HealValue);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedDamageData(AActor* Source, const FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedDamage(AActor* Source, int32 DamageValue);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDeath();
    
};

