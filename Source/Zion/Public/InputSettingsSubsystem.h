#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputCoreTypes.h"
#include "EActionInputType.h"
#include "InputSettingsSubsystem.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable)
class UInputSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputMappingContext*> InputContexts;
    
public:
    UInputSettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    void ResetInputMappingContextToDefault(UInputMappingContext* InputMappingContext, bool bIsGamepad);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllInputMappingContextsToDefault(bool bIsGamepad);
    
    UFUNCTION(BlueprintCallable)
    bool RemapKey(const EActionInputType& ActionInputType, const FKey& NewKey, const TSet<EActionInputType>& InvalidInputTypes, bool bIsGamepadKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMappingNameFromInputAction(const UInputAction* InputAction, bool bIsGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMappedKey(const FName& MappingName) const;
    
};

