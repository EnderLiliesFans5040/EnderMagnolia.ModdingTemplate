#include "SpineFXComponent.h"

USpineFXComponent::USpineFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USpineFXComponent::SpawnFXs(const TArray<FSpineFXData>& FXDataList, TArray<UNiagaraComponent*>& out_FXInstances) {
}

UNiagaraComponent* USpineFXComponent::SpawnFX(const FSpineFXData& FXData) {
    return NULL;
}

void USpineFXComponent::OnFXSystemEnd(UNiagaraComponent* FX) {
}


