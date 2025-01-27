#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "StaticVolume.h"
#include "StaticVolume_Ability.generated.h"

class AActor;
class UAbilityComponent;

UCLASS(Abstract, Blueprintable)
class AStaticVolume_Ability : public AStaticVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityTriggerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
public:
    AStaticVolume_Ability(const FObjectInitializer& ObjectInitializer);

};

