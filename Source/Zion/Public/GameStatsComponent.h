#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStatsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UGameStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameStatsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 UnsetPause();
    
    UFUNCTION(BlueprintCallable)
    int32 SetPause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayTimeAsString() const;
    
};

