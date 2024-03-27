#pragma once
#include "CoreMinimal.h"
#include "UserWidgetZion.h"
#include "UserWidgetMapArea.generated.h"

class AStaticVolume_Zone;
class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapArea : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ZonesHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* IconsHolder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconsRequireRealtimeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapRowName;
    
public:
    UUserWidgetMapArea();

    UFUNCTION(BlueprintCallable)
    void ShowAllMapAreaIcons();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnZoneVisited(AStaticVolume_Zone* ZoneVisited) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMapName() const;
    
};

