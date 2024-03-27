#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "UserWidgetZion.h"
#include "UserWidgetWrapBox.generated.h"

class UWidget;
class UWrapBox;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class UUserWidgetWrapBox : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* WrapBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InnerSlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplicitWrapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
public:
    UUserWidgetWrapBox();

    UFUNCTION(BlueprintCallable)
    bool RemoveChildAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveChild(UWidget* Content);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasChild(UWidget* Content) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyChildren() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetWrapNavigationWidget(bool bWrapToTop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildrenCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildIndex(const UWidget* Content) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetChildAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWidget*> GetAllChildren() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearChildren();
    
    UFUNCTION(BlueprintCallable)
    void AddChild(UWidget* Content);
    
};

