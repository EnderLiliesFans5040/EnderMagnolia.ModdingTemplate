#include "GameplayConditionCheckerAsset.h"
#include "Templates/SubclassOf.h"

UGameplayConditionCheckerAsset::UGameplayConditionCheckerAsset() {
}

bool UGameplayConditionCheckerAsset::CheckGameplayConditionAsset(const TSubclassOf<UGameplayConditionCheckerAsset>& GameplayConditionAssetClass, APlayerController* PlayerController) {
    return false;
}

bool UGameplayConditionCheckerAsset::CheckCondition(APlayerController* PlayerController) const {
    return false;
}


