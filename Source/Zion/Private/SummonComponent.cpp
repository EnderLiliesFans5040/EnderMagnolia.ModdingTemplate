#include "SummonComponent.h"
#include "Templates/SubclassOf.h"

USummonComponent::USummonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

ACharacterZionSpirit* USummonComponent::SummonSpiritFromCommand(const TSubclassOf<ACharacterZionSpirit>& SpiritClass, const TArray<TSubclassOf<UCommand>>& CommandClasses, const FSpiritSummonParameters& SummonParameters, const UCommand* SourceCommand) {
    return NULL;
}

ACharacterZionSpirit* USummonComponent::SummonSpirit(const TSubclassOf<ACharacterZionSpirit>& SpiritClass, const TArray<TSubclassOf<UCommand>>& CommandClasses, const FSpiritSummonParameters& SummonParameters, const UInputAction* InvokedByInputAction, ECommandLayerType CommandLayerType, const UCommandSet* FallbackCommandSet) {
    return NULL;
}

void USummonComponent::SetForceSummonNextToggle() {
}

void USummonComponent::OnGameMapChanged() {
}

void USummonComponent::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

bool USummonComponent::IsSpiritSummoned(const TSubclassOf<ACharacterZionSpirit>& SpiritClass) {
    return false;
}

ACharacterZionSpirit* USummonComponent::GetOrSpawnSpirit(const TSubclassOf<ACharacterZionSpirit>& SpiritClass) {
    return NULL;
}

void USummonComponent::FlushCachedSpirits() {
}


