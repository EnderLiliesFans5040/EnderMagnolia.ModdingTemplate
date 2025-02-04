#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserWidgetZion.h"
#include "WidgetMapStoryEventDirectionData.h"
#include "UserWidgetMap.generated.h"

class UCanvasPanel;
class URetainerBox;
class UScaleBox;
class UUserWidgetMapArea;
class UUserWidgetMapCursor;
class UUserWidgetMapIcon;
class UUserWidgetMapIcon_CustomMarker;
class UUserWidgetMapIcon_Player;
class UUserWidgetMapIcon_StoryEvent;
class UUserWidgetMapLegend;
class UUserWidgetMapTransition;
class UUserWidgetPlayerTrail;
class UUserWidgetRestPointList;
class UUserWidgetZionShowHide;

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMap : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetainerBox* RetainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapAreaHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMapCursor* MapCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMapIcon_Player* PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMapLegend* MapLegend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetRestPointList* RestPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetPlayerTrail* WBP_PlayerTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StoryEventIconsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StoryEventDirectionsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MapAreaTransitionsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CustomMarkerIconsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAllMapIcons;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseWheelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideIconsZoomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomScaledIconsScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomScaledIconsScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MoveSpeedFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeedFactorRampUpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeedFactorRampUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D XMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D YMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickToIconBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetMapIcon_StoryEvent> WidgetStoryEventIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetZionShowHide> WidgetStoryEventDirectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WidgetStoryEventDirectionShowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetMapArea*> MapAreaWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetMapTransition*> CachedMapAreaTransitionWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetMapStoryEventDirectionData> StoryEventsWithDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetMapIcon_CustomMarker*> CustomMarkerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemoveAllCustomMarkersHoldDuration;
    
public:
    UUserWidgetMap();

    UFUNCTION(BlueprintCallable)
    void Zoom(float InZoomDelta);
    
    UFUNCTION(BlueprintCallable)
    void ShowAllMapIcons();
    
    UFUNCTION(BlueprintCallable)
    void SetNewZoomScale(float NewZoomScale);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveCustomMarkerUnderCursor(UUserWidgetMapIcon_CustomMarker* CustomMarkerIcon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleRestPointList(bool bRestPointListOpened, bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestPointListInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetTargetedIcon(UUserWidgetMapIcon* MapIcon, bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetMapAreaUnderCursor(UUserWidgetMapArea* MapArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshRemoveAllCustomMarkersHoldTime(float CurrentHoldingTime, float HoldingDuration, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshCustomMarkerAvailableCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedTargetedIcon(UUserWidgetMapIcon* MapIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoCustomMarkerAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMapAreaUnderCursor(UUserWidgetMapArea* MapArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCalculateMapCompletionPercentage(int32 Percentage);
    
    UFUNCTION(BlueprintCallable)
    void MoveMap(const FVector2D& InMoveDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestPointListOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapAreaVisited(const UUserWidgetMapArea* MapAreaWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMapCompletionPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomMarkerAvailableCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceTargetIcon(UUserWidgetMapIcon* Icon);
    
    UFUNCTION(BlueprintCallable)
    void DebugMarkAllMapZonesAsVisited();
    
    UFUNCTION(BlueprintCallable)
    void DebugMarkAllMapIconsAsSeen();
    
    UFUNCTION(BlueprintCallable)
    void ClearInputs();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

