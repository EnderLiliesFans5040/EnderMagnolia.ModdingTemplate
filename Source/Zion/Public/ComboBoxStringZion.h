#pragma once
#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "ComboBoxStringZion.generated.h"

UCLASS(Blueprintable)
class UComboBoxStringZion : public UComboBoxString {
    GENERATED_BODY()
public:
    UComboBoxStringZion();

    UFUNCTION(BlueprintCallable)
    void AddOptions(const TArray<FString>& OptionsToAdd);
    
};

