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

bool UStructBPFLibrary::MovementModeMatch(const UCharacterMovementComponent* CharacterMovementComponent, FMovementModeData MovementModeData) {
    return false;
}

bool UStructBPFLibrary::IsItemSkillDataValid(const FInventoryItemSkillData& ItemData) {
    return false;
}

bool UStructBPFLibrary::IsAbilityDataValid(const FAbilityData& AbilityData) {
    return false;
}

FExtendedStatsData UStructBPFLibrary::ExtendedStatsData_Subtract(const FExtendedStatsData& A, const FExtendedStatsData& B) {
    return FExtendedStatsData{};
}

FExtendedStatsData UStructBPFLibrary::ExtendedStatsData_Add(const FExtendedStatsData& A, const FExtendedStatsData& B) {
    return FExtendedStatsData{};
}


