#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EAbilityWeightCategory.h"
#include "HitData.h"
#include "SpineFlashColorData.h"
#include "SpineColorComponent.generated.h"

class AAbility;
class AActor;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class USpineColorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFlashColorData DefaultDamageFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAbilityWeightCategory, FSpineFlashColorData> DamageColorForWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AffectedSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SkinMaterial;
    
public:
    USpineColorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor Color, float Alpha, float LerpDuration);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGotAbilityApplied(AAbility* Ability, AActor* Source, const FHitData& HitData);
    
public:
    UFUNCTION(BlueprintCallable)
    void FlashColor(FLinearColor Color, float Alpha, float FlashDuration);
    
    UFUNCTION(BlueprintCallable)
    void ClearColor(float LerpDuration);
    
};

