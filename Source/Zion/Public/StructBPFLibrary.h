#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AbilityData.h"
#include "CurrencyTransactionInfos.h"
#include "CurrencyValue.h"
#include "ExtendedStatsData.h"
#include "InventoryItemSkillData.h"
#include "MovementModeData.h"
#include "StatsLevelData.h"
#include "StructBPFLibrary.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable)
class UStructBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStructBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCurrencyValue ToCurrencyValue(const FCurrencyTransactionInfos& Info, int32 AlreadyBoughtCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStatsLevelData StatsLevelData_Subtract(const FStatsLevelData& A, const FStatsLevelData& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStatsLevelData StatsLevelData_Add(const FStatsLevelData& A, const FStatsLevelData& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MovementModeMatch(const UCharacterMovementComponent* CharacterMovementComponent, FMovementModeData MovementModeData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemSkillDataValid(const FInventoryItemSkillData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbilityDataValid(const FAbilityData& AbilityData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExtendedStatsData ExtendedStatsData_Subtract(const FExtendedStatsData& A, const FExtendedStatsData& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExtendedStatsData ExtendedStatsData_Add(const FExtendedStatsData& A, const FExtendedStatsData& B);
    
};

