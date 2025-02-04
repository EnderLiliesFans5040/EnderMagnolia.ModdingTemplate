#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationNameData.h"
#include "EExtraAnimationRootMotionMode.h"
#include "InventoryItemGenericInfoData.h"
#include "UserWidgetZion.h"
#include "UserWidgetExtraDialogSpineViewer.generated.h"

class UMaterialInterface;
class UOverlay;
class USpineWidget;
class UTrackEntry;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetExtraDialogSpineViewer : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SpineViewerLocationContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SceneContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpineWidget* SpineWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemGenericInfoData CharacterItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultNormalBlendMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultScreenBlendMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DefaultXMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DefaultYMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D XMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D YMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpineViewerCurrentLocation;
    
public:
    UUserWidgetExtraDialogSpineViewer();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupMinMaxPositions(float MinScaleFactor);
    
    UFUNCTION(BlueprintCallable)
    void ResetSpineViewerToDefaultLocation();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceSpineMaterials();
    
    UFUNCTION(BlueprintCallable)
    void PlaySpineAnimation(const FAnimationNameData& AnimationNameData, EExtraAnimationRootMotionMode RootMotionMode);
    
    UFUNCTION(BlueprintCallable)
    void PlayAdditionalAnimations(const TArray<FString>& AdditionalAnimations);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpineAnimationFinished(UTrackEntry* TrackEntry);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAfterUpdateWorldTransform(USpineWidget* Skeleton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleFocusAfterMouseClick();
    
    UFUNCTION(BlueprintCallable)
    void ClearSpineAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearInputs();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanMoveSpineViewer() const;
    
};

