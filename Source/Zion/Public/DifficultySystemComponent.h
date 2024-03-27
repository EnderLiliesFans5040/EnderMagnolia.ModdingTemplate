#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DifficultySettings.h"
#include "EDifficultyPreset.h"
#include "DifficultySystemComponent.generated.h"

class UDifficultySystemComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UDifficultySystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDifficultyPreset, FDifficultySettings> DifficultyForPresets;
    
public:
    UDifficultySystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDifficultySettings(const FDifficultySettings& NewDifficultySettings);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyPresetAndSettings(EDifficultyPreset NewDifficultyPreset, const FDifficultySettings& NewDifficultySettings);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyPreset(EDifficultyPreset NewDifficultyPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDifficultySettings GetDifficultySettingsForPreset(EDifficultyPreset InDifficultyPreset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDifficultySettings GetDifficultySettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficultyPreset GetDifficultyPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDifficultySystemComponent* Get(const UObject* WorldContextObject);
    
};

