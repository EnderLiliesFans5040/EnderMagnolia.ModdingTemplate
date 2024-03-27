#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpineFXData.h"
#include "SpineFXComponent.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSION_API USpineFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpineFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnFXs(const TArray<FSpineFXData>& FXDataList, TArray<UNiagaraComponent*>& out_FXInstances);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnFX(const FSpineFXData& FXData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFXSystemEnd(UNiagaraComponent* FX);
    
};

