#pragma once
#include "CoreMinimal.h"
#include "MapCustomMarkerIconData.h"
#include "UserWidgetMapIcon.h"
#include "UserWidgetMapIcon_CustomMarker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapIcon_CustomMarker : public UUserWidgetMapIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapCustomMarkerIconData CustomMarkerData;
    
public:
    UUserWidgetMapIcon_CustomMarker();

    UFUNCTION(BlueprintCallable)
    void SetScale(float NewScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetScale(float NewScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCustomMarkerData(const FMapCustomMarkerIconData& NewCustomMarkerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMapCustomMarkerIconData GetCustomMarkerIconData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomMarkerDisplayID() const;
    
};

