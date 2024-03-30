#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RenderStateComponent.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API URenderStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoMarkAsSeenOnZoneComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ZoneLevel;
    
public:
    URenderStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetNewBounds(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
};

