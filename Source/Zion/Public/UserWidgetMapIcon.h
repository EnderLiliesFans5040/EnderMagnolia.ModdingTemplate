#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Widgets/Layout/Anchors.h"
#include "EAptitudeType.h"
#include "EMapIconGenerationType.h"
#include "EMapIconType.h"
#include "GameplayConditionChecker.h"
#include "Templates/SubclassOf.h"
#include "UserWidgetZion.h"
#include "UserWidgetMapIcon.generated.h"

class UImage;
class UInventory;
class UPaperSprite;
class UUserWidgetMapArea;
class UUserWidgetMapIcon;
class UUserWidgetMapIconDetails;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapIcon : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetMapArea* ParentMapArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetMapIcon*> DependentIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors CanvasAnchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CanvasAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconGenerationType GenerationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIconLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIconLocationLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconLocationLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIconAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetMapIconDetails> WidgetMapIconDetails_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IconDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAptitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAptitudeType AptitudeRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireGameplayCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> ConditionNotSatisfiedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> ConditionSatisfiedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
public:
    UUserWidgetMapIcon();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowIcon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIconFromSoftSprite(TSoftObjectPtr<UPaperSprite> NewIcon, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(const UInventory* Inventory, const FName& ItemId, int32 AddedCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAptitudesChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWidgetIconDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UUserWidgetMapIconDetails> GetWidgetIconDetailsClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapIconType GetMapIconType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetItemsRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAptitudeType GetAptitudeRequired() const;
    
};

