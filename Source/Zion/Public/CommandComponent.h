#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "CachedCommands.h"
#include "CommandDelegateDelegate.h"
#include "CommandFinishCooldownDelegateDelegate.h"
#include "CommandLayer.h"
#include "CommandSettings.h"
#include "CommandSettingsContainer.h"
#include "ECommandCategory.h"
#include "ECommandLayerType.h"
#include "FinishCommandDelegateDelegate.h"
#include "StartCommandDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "CommandComponent.generated.h"

class ACharacter;
class UCommand;
class UCommandSet;
class UInputAction;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UCommandComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandDelegate OnCommandQueueCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartCommandDelegate OnPreStartCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartCommandDelegate OnPostStartCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishCommandDelegate OnFinishCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandFinishCooldownDelegate OnCommandFinishCooldown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandSet* DefaultCommandSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCommandSettingsContainer> CommandSettingsContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UCommand>, FCachedCommands> CommandsForClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECommandLayerType, FCommandLayer> CommandLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* FallbackInputAction;
    
public:
    UCommandComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetFallingExecutionCountsOfCategories(const TArray<ECommandCategory>& CategoriesToReset);
    
    UFUNCTION(BlueprintCallable)
    void ResetFallingExecutionCounts();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownRatioForCommandSet(const UCommandSet* CommandSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownForCommandSet(const UCommandSet* CommandSet) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCommands(bool bStopCurrentCommand);
    
    UFUNCTION(BlueprintCallable)
    void AddCommandsToVirtualBufferFromClasses(const TArray<TSubclassOf<UCommand>>& CommandClasses, const UInputAction* InvokedByInputAction, ECommandLayerType CommandLayerType, float BufferTTL);
    
    UFUNCTION(BlueprintCallable)
    void AddCommandsFromClasses(const TArray<TSubclassOf<UCommand>>& CommandClasses, const UInputAction* InvokedByInputAction, ECommandLayerType CommandLayerType, bool bRemoveOnStartFailure, const UCommandSet* OverrideCommandSet);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCommands(const TArray<FCommandSettings>& CommandSettingsArray, const UCommandSet* OverrideCommandSet);
    
};

