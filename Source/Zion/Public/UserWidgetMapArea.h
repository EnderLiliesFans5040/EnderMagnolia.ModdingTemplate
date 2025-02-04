#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.h"
#include "UserWidgetZion.h"
#include "UserWidgetMapArea.generated.h"

class AStaticVolume_Zone;
class UCanvasPanel;
class UImage;
class UUserWidgetMapIcon;
class UUserWidgetMapTransition;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ZoomScaled_IconsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapTransitionsHolder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconsRequireRealtimeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetMapIcon*> CachedMapIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<EMapIconType> VisibleMapIconTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetMapTransition*> CachedMapTransitions;
    
public:
    UUserWidgetMapArea();

    UFUNCTION(BlueprintCallable)
    void ShowAllMapAreaIcons();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnZoneVisited(AStaticVolume_Zone* ZoneVisited) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZoneCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCompletionPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearedZoneCount() const;
    
};

