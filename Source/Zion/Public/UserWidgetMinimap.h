#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Layout/Anchors.h"
#include "UserWidgetZion.h"
#include "WidgetMapStoryEventDirectionData.h"
#include "UserWidgetMinimap.generated.h"

class UCanvasPanel;
class UOverlay;
class URetainerBox;
class UUserWidgetMapArea;
class UUserWidgetMapIcon_Player;
class UUserWidgetMapIcon_StoryEvent;
class UUserWidgetZionShowHide;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetMinimap : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DisplayHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetainerBox* RetainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MinimapHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MinimapWidgetHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMapIcon_Player* PlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StoryEventIconsHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* StoryEventDirectionsHolder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetMapArea* CurrentWidgetMapArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetMapIcon_StoryEvent> WidgetStoryEventIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetZionShowHide> WidgetStoryEventDirectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WidgetStoryEventDirectionShowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetMapStoryEventDirectionData> StoryEventsWithDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors FullscreenAnchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FullscreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FullscreenAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FullscreenRetainerBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullscreenOpacity;
    
public:
    UUserWidgetMinimap();

    UFUNCTION(BlueprintCallable)
    void RequestRender();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStoryLevelChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeDefaultDisplayValues();
    
    UFUNCTION(BlueprintCallable)
    void ChangeDisplayMode();
    
};

