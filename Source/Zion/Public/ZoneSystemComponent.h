#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FadeDescriptionData.h"
#include "ZoneSystemComponent.generated.h"

class AActor;
class ULevelStreamingDynamic;
class UObject;
class UZoneSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UZoneSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* ActiveZoneLevelStreaming;
    
public:
    UZoneSystemComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFadeOutFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAnyZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveZoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActiveZoneLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UZoneSystemComponent* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BindActorToZone(AActor* Actor);
    
};

