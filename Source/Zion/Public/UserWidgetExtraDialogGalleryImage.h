#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserWidgetZion.h"
#include "UserWidgetExtraDialogGalleryImage.generated.h"

class UImageZion;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetExtraDialogGalleryImage : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImageZion* GalleryImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D XMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D YMinMax;
    
public:
    UUserWidgetExtraDialogGalleryImage();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupImageMinMaxPositions();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaceImage(const FVector2D& NewImagePosition);
    
    UFUNCTION(BlueprintCallable)
    void MoveImage(const FVector2D& InMoveDelta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetCurrentScaleFactor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearInputs();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

