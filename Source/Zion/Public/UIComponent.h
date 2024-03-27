#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
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
    FComponentReference WorldSpaceGaugeOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceGauge> WorldSpaceGaugeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference WorldSpaceTextOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText> WorldSpaceTextDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText> WorldSpaceTextHealClass;
    
public:
    UUIComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedHeal(AActor* Source, int32 HealValue);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedDamage(AActor* Source, int32 DamageValue);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDeath();
    
};

