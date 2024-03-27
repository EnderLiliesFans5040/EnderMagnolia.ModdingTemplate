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
class UUserWidgetMapIcon_Player;
class UUserWidgetMapIcon_StoryEvent;
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
    UUserWidgetMapCursor* MapCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMapIcon_Player* PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetZionShowHide* MapLegend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetRestPointList* RestPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StoryEventIconsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StoryEventDirectionsHolder;
    
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
    float ZoomMax;
    
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
    float StickToIconBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetMapIcon_StoryEvent> WidgetStoryEventIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetZionShowHide> WidgetStoryEventDirectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WidgetStoryEventDirectionShowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetMapStoryEventDirectionData> StoryEventsWithDirections;
    
public:
    UUserWidgetMap();

    UFUNCTION(BlueprintCallable)
    void Zoom(float InZoomDelta);
    
    UFUNCTION(BlueprintCallable)
    void ShowAllMapIcons();
    
    UFUNCTION(BlueprintCallable)
    void SetNewZoomScale(float NewZoomScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleRestPointList(bool bRestPointListOpened);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestPointListInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetTargetedIcon(UUserWidgetMapIcon* MapIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetMapAreaUnderCursor(UUserWidgetMapArea* MapArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachedTargetedIcon(UUserWidgetMapIcon* MapIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeMapAreaUnderCursor(UUserWidgetMapArea* MapArea);
    
    UFUNCTION(BlueprintCallable)
    void MoveMap(const FVector2D& InMoveDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestPointListOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapAreaVisited(const UUserWidgetMapArea* MapAreaWidget) const;
    
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

