#include "StructBPFLibrary.h"

UStructBPFLibrary::UStructBPFLibrary() {
}

FCurrencyValue UStructBPFLibrary::ToCurrencyValue(const FCurrencyTransactionInfos& Info, int32 AlreadyBoughtCount) {
    return FCurrencyValue{};
}

FStatsLevelData UStructBPFLibrary::StatsLevelData_Subtract(const FStatsLevelData& A, const FStatsLevelData& B) {
    return FStatsLevelData{};
}

FStatsLevelData UStructBPFLibrary::StatsLevelData_Add(const FStatsLevelData& A, const FStatsLevelData& B) {
    return FStatsLevelData{};
}

bool UStructBPFLibrary::MovementModeMatchAny(const UCharacterMovementComponent* CharacterMovementComponent, const TArray<FMovementModeData>& MovementModeDataList) {
    return false;
}

bool UStructBPFLibrary::MovementModeMatch(const UCharacterMovementComponent* CharacterMovementComponent, FMovementModeData MovementModeData) {
    return false;
}

bool UStructBPFLibrary::IsItemSkillDataValid(const FInventoryItemSkillData& ItemData) {
    return false;
}

bool UStructBPFLibrary::IsAbilityDataValid(const FAbilityData& AbilityData) {
    return false;
}

UPlatformMediaSource* UStructBPFLibrary::GetTutorialVideo(const FInventoryItemTutorialData& ItemTutorialData, APlayerControllerZion* PlayerControllerZion) {
    return NULL;
}

FExtendedStatsData UStructBPFLibrary::ExtendedStatsData_Subtract(const FExtendedStatsData& A, const FExtendedStatsData& B) {
    return FExtendedStatsData{};
}

void UStructBPFLibrary::ExtendedStatsData_ClampToZero(FExtendedStatsData& ExtendedStatsData) {
}

FExtendedStatsData UStructBPFLibrary::ExtendedStatsData_Add(const FExtendedStatsData& A, const FExtendedStatsData& B) {
    return FExtendedStatsData{};
}


