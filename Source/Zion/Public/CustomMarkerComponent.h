#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MapCustomMarkerIconData.h"
#include "CustomMarkerComponent.generated.h"

class UUserWidgetMapIcon_CustomMarker;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerControllerZion, meta=(BlueprintSpawnableComponent))
class UCustomMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetMapIcon_CustomMarker> WidgetCustomMarkerIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomMarkerMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FMapCustomMarkerIconData> PlacedCustomMarkers;
    
public:
    UCustomMarkerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomMarkerMaxCount() const;
    
};

